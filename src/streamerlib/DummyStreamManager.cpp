#include "StdAfx.h"
#include "DummyStreamManager.h"
#include "MpdClient.h"
#include "IAudioOutputStream.h"
#include "Settings.h"
#include "OutForwarder.h"


DummyStreamManager::DummyStreamManager(std::unique_ptr<IAudioOutputStream> audio_output_stream, MpdClient &client, Player& player, int prebuffer_time) 
	: StreamManager(std::move(audio_output_stream), player), 
	prebuffer_time(prebuffer_time),
	_mpd_client(client), client(), last_pause(), raw_bytes_per_second()
{	
}

DummyStreamManager::~DummyStreamManager()
{
	if (client != nullptr)
		client->close();
}

bool DummyStreamManager::execute_guard_section(std::function<bool ()> mpd_ok_command) const
{
	bool success = false;

	try
	{
		success = mpd_ok_command();
	}
	catch(const mpd_client_exception &) { }

	if (OnCommandSucceeded != nullptr)
		OnCommandSucceeded(success);

	return success;
}

bool DummyStreamManager::setup_mpd_playlist() const
{
	char buff[0x100] = {};
	::sprintf_s(buff, "http://%s:%d/live", _mpd_client.get_local_address().c_str(), Global::ListeningPort);
		
	return execute_guard_section(std::bind(&MpdClient::playlist_clear, &_mpd_client)) &&
		   execute_guard_section(std::bind(&MpdClient::playlist_add, &_mpd_client, buff));
}

void DummyStreamManager::connect_handler(const boost::system::error_code &error, void *)
{
	if (error)
	{
		_mpd_client.async_connect(std::bind(&DummyStreamManager::connect_handler, this, std::placeholders::_1, std::placeholders::_2));
		return;
	}

	setup_mpd_playlist();
}

void DummyStreamManager::initialize()
{
	_mpd_client.async_connect(std::bind(&DummyStreamManager::connect_handler, this, std::placeholders::_1, std::placeholders::_2));
}

int DummyStreamManager::open(int samplerate, int numchannels, int bitspersamp)
{
	::InterlockedExchange(&raw_bytes_per_second, (samplerate * bitspersamp * numchannels) / 8);
	set_written_bytes(0);

	_audio_output_stream->Initialize(samplerate, numchannels, bitspersamp);
	play();

	::InterlockedExchange(&start_t, ::GetTickCount());
	::InterlockedExchange(&w_offset, 0);
	::InterlockedExchange(&sync_offset, 0);
	::InterlockedExchange(&raw_written_bytes, 0);
	
	return prebuffer_time;
}

void DummyStreamManager::play()
{
	execute_guard_section(std::bind(&MpdClient::play, &_mpd_client));
}

void DummyStreamManager::stop()
{
	execute_guard_section(std::bind(&MpdClient::stop, &_mpd_client));
}

bool DummyStreamManager::pause(bool pause)
{
	if(pause)
		execute_guard_section(std::bind(&MpdClient::pause, &_mpd_client));
	else
		execute_guard_section(std::bind(&MpdClient::play, &_mpd_client));


	auto t = last_pause;
	if (!last_pause && pause)
	{
		set_written_bytes(0); // this is the encoded number
		::InterlockedExchange(&raw_written_bytes, ConvertMilisecondsToBytesCount(prebuffer_time));
		::InterlockedExchangeAdd(&w_offset, ::GetTickCount() - atomic_read(start_t)); 
	}

	if (last_pause && !pause)
	{
		::InterlockedExchange(&start_t, ::GetTickCount());
	}

	last_pause = pause;
	return t;
}

void DummyStreamManager::set_volume(int volume)
{
	execute_guard_section(std::bind(&MpdClient::set_volume, &_mpd_client, volume));
}

void DummyStreamManager::seek(int seek_time)
{
	execute_guard_section(std::bind(&MpdClient::re_play, &_mpd_client));

	set_written_bytes(0);
	::InterlockedExchange(&w_offset, seek_time);
	::InterlockedExchange(&start_t, ::GetTickCount());
	::InterlockedExchange(&raw_written_bytes, 0);

	PBYTE out_buff;
	_audio_output_stream->Flush(out_buff);
}

bool DummyStreamManager::write(PBYTE buff, int count)
{
	PBYTE out_buff;
	int encoded = _audio_output_stream->Write((PBYTE)buff, count, out_buff);
	::InterlockedExchangeAdd(&raw_written_bytes, count);

	if (client != nullptr)
		async_write_stream_content(client.get(), buff, count);

	boost::mutex::scoped_lock lock(_write_buffer_mutex);
	_write_buffer.insert(std::end(_write_buffer), buff, buff + count);

	//if (client == nullptr)
	//	return true;

	return encoded > 0; 
}

void DummyStreamManager::flush()
{
}

void DummyStreamManager::close()
{
	last_pause = false;

	execute_guard_section(std::bind(&MpdClient::stop, &_mpd_client));
	_write_buffer.clear();
	
	::InterlockedExchange(&sync_offset, 0);
	::InterlockedExchange(&start_t, 0);
	::InterlockedExchange(&w_offset, 0);

	_audio_output_stream->Close();
}

void DummyStreamManager::quit()
{
	_audio_output_stream->Close();
	stop();
}

void DummyStreamManager::handle_new_connection(asio::ip::tcp::socket *client, const std::string &request_headers)
{
	if (this->client != nullptr)
	{
		client->close();
		delete client;
		return;
	}

	set_written_bytes(0);

	{
		boost::mutex::scoped_lock lock(_write_buffer_mutex);

		const auto first_array = _write_buffer.array_one();
		const auto second_array = _write_buffer.array_two();

		try
		{
			auto w1 = asio::write(*client, asio::buffer(first_array.first, first_array.second)); 
			auto w2 = asio::write(*client, asio::buffer(second_array.first, second_array.second)); 
			set_written_bytes(w1 + w2);
		}
		catch(const boost::system::system_error &)
		{
			//We were unable to write to the socket. I don't know what i should do in that case
		}
	}

	this->client.reset(client);
}

void DummyStreamManager::handle_disconnect(asio::ip::tcp::socket *client)
{
	this->client.reset();
}

bool DummyStreamManager::can_write()
{
	return !last_pause;
}

unsigned DummyStreamManager::get_written_time()
{
	if (last_pause)
		return prebuffer_time + atomic_read(w_offset);

	return ConvertBytesToMiliseconds(atomic_read(raw_written_bytes)) + atomic_read(w_offset);
}

unsigned DummyStreamManager::get_output_time()
{
	if (last_pause)
		return atomic_read(w_offset);

	return ::GetTickCount() - atomic_read(start_t) + atomic_read(w_offset);
}

std::size_t DummyStreamManager::remaining_ms()
{
	return -1;
}


unsigned DummyStreamManager::ConvertBytesToMiliseconds(unsigned bytesCount)
{
	return ::MulDiv(bytesCount, 1000, raw_bytes_per_second);
}

unsigned DummyStreamManager::ConvertMilisecondsToBytesCount(unsigned miliseconds)
{
	return ::MulDiv(miliseconds, raw_bytes_per_second, 1000);
}