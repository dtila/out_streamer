#include "StdAfx.h"
#include "SyncronisedStreamManager.h"
#include "MpdClient.h"
#include "IAudioOutputStream.h"
#include "Settings.h"
#include "OutForwarder.h"
#include "Player.h"

const std::size_t async_write_buffer_lenght = 4 * 1024;

SyncronisedStreamManager::SyncronisedStreamManager(std::unique_ptr<IAudioOutputStream> audio_output_stream, MpdClient &client, struct Player& player, asio::io_service &io_service, Options playbackOptions) 
	: DummyStreamManager(std::move(audio_output_stream), client, player, playbackOptions.prebuffer_time), 
	io_service(io_service),
	playbackOptions(playbackOptions), 
	output_sync_timer(io_service),
	_write_async_buffer(new BYTE[async_write_buffer_lenght])
{
	std::memset(&last_mpd_status, 0, sizeof last_mpd_status);
}

SyncronisedStreamManager::~SyncronisedStreamManager()
{
	delete[] _write_async_buffer;

	if (client != nullptr)
	{
		client->close();
		client = nullptr;
	}
}

bool SyncronisedStreamManager::execute_guard_section(std::function<bool ()> mpd_ok_command)
{
	bool success = false;

	try
	{
		success = mpd_ok_command();
	}
	catch(const mpd_client_exception & e)
	{
		//TODO: Display progress bar something ...
		if (e.get_reason() == mpd_client_error_reason::disconnected)
			_mpd_client.async_connect(std::bind(&SyncronisedStreamManager::connect_handler, this, std::placeholders::_1, std::placeholders::_2));
	}

	if (OnCommandSucceeded != nullptr)
		OnCommandSucceeded(success);

	return success;
}

void SyncronisedStreamManager::connect_handler(const boost::system::error_code &error, void *)
{
	int cancel_code[] = { WSA_OPERATION_ABORTED };
	for (int i=0 ; i<_countof(cancel_code); i++)
		if (error.value() == cancel_code[i])
			return;

	if (error)
	{
		_mpd_client.async_connect(std::bind(&SyncronisedStreamManager::connect_handler, this, std::placeholders::_1, std::placeholders::_2));
		return;
	}

	try
	{
		auto status = _mpd_client.get_status();
		_player.setVolume(status.volume * 255 / 100);
		
		if (status.playback_status == mpd_player_status::stopped)
		{
			// the winamp is playing
			if (setup_mpd_playlist() && raw_bytes_per_second > 0)
			{
				play();
			}
		} 
		else
		{
			if (last_mpd_status.playlist_id != 0 && last_mpd_status.playlist_id != status.playlist_id)
				setup_mpd_playlist();
		}

		last_mpd_status = status;
		last_mpd_status.playlist_id --;
	}
	catch(const mpd_client_exception &e)
	{
		if (e.get_reason() == mpd_client_error_reason::disconnected)
			_mpd_client.async_connect(std::bind(&SyncronisedStreamManager::connect_handler, this, std::placeholders::_1, std::placeholders::_2));
	}
}

void SyncronisedStreamManager::initialize()
{
	_mpd_client.async_connect(std::bind(&SyncronisedStreamManager::connect_handler, this, std::placeholders::_1, std::placeholders::_2));
	start_async_send_chunks();
}

int SyncronisedStreamManager::open(int samplerate, int numchannels, int bitspersamp)
{
	for(;;)
	{
		try
		{
			auto status = _mpd_client.get_status();
			// we check if we need to setup the playlist
			if (last_mpd_status.playlist_id > 0 && last_mpd_status.playlist_id != status.playlist_id)
				setup_mpd_playlist();

			last_mpd_status = status;

			if (status.playback_status == mpd_player_status::stopped)
				break;
			
			if (::MessageBox(_player.window(), _T("The server is currently playing. Do you want to stop and play the current track?"), _T("Server playing"), MB_OKCANCEL | MB_ICONWARNING) == IDOK)
				_mpd_client.stop();
		}
		catch(const mpd_client_exception &e)
		{
			if (e.get_reason() == mpd_client_error_reason::disconnected && !playbackOptions.auto_enable_forwarder)
			{
				::MessageBox(_player.window(), _T("Unable to play because no MPD server could be find to the specified address and speakers forward is disabled.\nPlease review the connection settings, and try again."), _T("Unable to play"), MB_OK);
				break;
			}
			break;
		}
	}

	if (!playbackOptions.auto_enable_forwarder)
		playbackOptions.forwarder.EnableOutput(false);

	int latency = DummyStreamManager::open(samplerate, numchannels, bitspersamp);

	_current_track_lenght = 0;
	::InterlockedExchange(&_last_out_time, 0);
	::InterlockedExchange(&_sentBytes, 0);

	{
		int count = _audio_output_stream->ConvertMilisecondsToBytesCount(latency);
		boost::mutex::scoped_lock scope(this->_write_buffer_mutex);
		_write_buffer.set_capacity(count);
	}

	output_sync_timer.expires_from_now(boost::posix_time::seconds(2));
	output_sync_timer.async_wait(std::bind(&SyncronisedStreamManager::output_time_sync_callback, this, std::placeholders::_1));

	return latency;
}

void SyncronisedStreamManager::play()
{
	DummyStreamManager::play();
}

void SyncronisedStreamManager::stop()
{
	DummyStreamManager::stop();
}

bool SyncronisedStreamManager::pause(bool pause)
{
	if(pause)
	{
		execute_guard_section(std::bind(&MpdClient::pause, &_mpd_client));
	}
	else
	{
		execute_guard_section(std::bind(&MpdClient::play, &_mpd_client));
	}

	auto t = last_pause;
	if (!last_pause && pause)
	{
		auto t = ::GetTickCount() - atomic_read(start_t);
		::InterlockedExchangeAdd(&sync_offset, t); // not to w_offset !!!
	}

	if (last_pause && !pause)
	{
		::InterlockedExchange(&start_t, ::GetTickCount());
	}

	last_pause = pause;
	return t;
}

void SyncronisedStreamManager::set_volume(int volume)
{
	DummyStreamManager::set_volume(volume);
	playbackOptions.forwarder.SetVolume(volume);
}

void SyncronisedStreamManager::seek(int seek_time)
{
	int truncated_time = seek_time - (seek_time % 1000);
	DummyStreamManager::seek(truncated_time);
	
	::InterlockedExchange(&sync_offset, 0);
	::InterlockedExchange(&_last_out_time, truncated_time);
	::InterlockedExchange(&_sentBytes, 0);

	{
		boost::mutex::scoped_lock scoped(this->_write_buffer_mutex);
		_write_buffer.clear();
	}

	output_sync_timer.expires_from_now(boost::posix_time::seconds(2));
	output_sync_timer.async_wait(std::bind(&SyncronisedStreamManager::output_time_sync_callback, this, std::placeholders::_1));
}

void SyncronisedStreamManager::start_async_send_chunks()
{
	auto client_temp = client.get();
	std::size_t count = 0;

	{
		bool is_empty = _write_buffer.empty();
		if (client_temp == nullptr || is_empty) // we don't sync the empty check
			goto queue_post;
	
		boost::mutex::scoped_lock lock(_write_buffer_mutex);
		count = std::min(_write_buffer.size(), async_write_buffer_lenght);

		std::size_t count1 = std::min(_write_buffer.array_one().second, count);
		std::size_t count2 = count - count1;
		std::memcpy(_write_async_buffer, _write_buffer.array_one().first, count1);
	
		if (count2 > 0)
		{
			std::memcpy(_write_async_buffer + count1, _write_buffer.array_two().first, count2);
		}
	}

	if (count > 0)
	{
		asio::async_write(*client_temp, asio::buffer(_write_async_buffer, count), 
			std::bind(&SyncronisedStreamManager::async_send_chunks_handler, this, std::placeholders::_1, std::placeholders::_2));
		return;
	}

queue_post:
	::Sleep(1);
	io_service.post([this] () { start_async_send_chunks(); });
}

void SyncronisedStreamManager::async_send_chunks_handler(const system::error_code &error, std::size_t transferred)
{
	if (error)
		handle_disconnect(client.get());

	if (::InterlockedCompareExchange(&raw_bytes_per_second, raw_bytes_per_second, 0) == 0)
		return;

	if (transferred > 0)
	{
		::InterlockedExchangeAdd(&_sentBytes, transferred);
	
		boost::mutex::scoped_lock lock(_write_buffer_mutex);
		if (_write_buffer.size() >= transferred)
			_write_buffer.erase_begin(transferred);
	}

	start_async_send_chunks();
}

bool SyncronisedStreamManager::write(PBYTE buff, int count)
{
	if (last_pause)
	{
		return false;
	}


	PBYTE out_buff = nullptr;
	std::size_t encoded = 0;
	if (buff == NULL || count == 0)
	{
		encoded = _audio_output_stream->Flush(out_buff);
	}
	else
	{
		encoded = _audio_output_stream->Write((PBYTE)buff, count, out_buff);
	}
	
	if (client == nullptr && playbackOptions.auto_enable_forwarder)
	{
		::InterlockedExchangeAdd(&raw_written_bytes, count);
		return true;
	}

	boost::mutex::scoped_lock lock(_write_buffer_mutex);
	if (encoded > _write_buffer.reserve())
	{
		Global::DebugWrite(_T("Unable to write"));
		return false;
	}

	if (encoded > 0)
	{
		_write_buffer.insert(_write_buffer.end(), out_buff, out_buff + encoded);
		::InterlockedExchangeAdd(&_writtenBytes, encoded);
	}
	
	::InterlockedExchangeAdd(&raw_written_bytes, count);
	return true;
}

void SyncronisedStreamManager::flush()
{
	PBYTE out_buff;
	int encoded = _audio_output_stream->Flush(out_buff);
	
	if (encoded > 0)
	{
		boost::mutex::scoped_lock lock(_write_buffer_mutex);
		_write_buffer.insert(_write_buffer.end(), out_buff, out_buff + encoded);
		// we don't increase any RAW buffer, since is done in write with the provided data lenght
	}
}

bool SyncronisedStreamManager::can_write()
{
	if (last_pause)
		return false;

	return playbackOptions.auto_enable_forwarder || client != nullptr;
}

unsigned SyncronisedStreamManager::get_written_time()
{
	if (last_pause)
		return StreamManager::get_written_time() + atomic_read(w_offset);
	
	if (client == nullptr && playbackOptions.auto_enable_forwarder)
		return ConvertBytesToMiliseconds(atomic_read(raw_written_bytes)) + atomic_read(w_offset);

	auto t = StreamManager::get_written_time() + atomic_read(w_offset);
	//auto t = ConvertBytesToMiliseconds(atomic_read(raw_written_bytes)) + atomic_read(w_offset);
	//auto t = _audio_output_stream->ConvertBytesCountToMiliseconds(_sentBytes) + atomic_read(w_offset);
	return t;
}

unsigned SyncronisedStreamManager::get_output_time()
{
	if (last_pause)
		return atomic_read(w_offset) + atomic_read(sync_offset);

	if (client == nullptr && !playbackOptions.auto_enable_forwarder)
	{
		// if not client is connected yet
		return atomic_read(_last_out_time);
	}

	auto diff = ::GetTickCount() - atomic_read(start_t);
	auto t = diff + atomic_read(w_offset) + atomic_read(sync_offset); 
	
	//if (!playbackOptions.auto_enable_forwarder && t + 1000 > _audio_output_stream->ConvertBytesCountToMiliseconds(_sentBytes) + atomic_read(w_offset)) // require buffering
	//{
	//	return atomic_read(_last_out_time);
	//}

	::InterlockedExchange(&_last_out_time, t);
	return t;
}

std::size_t SyncronisedStreamManager::remaining_ms()
{
	int track_ms = _current_track_lenght > 0 ? _current_track_lenght : (_current_track_lenght = _player.getTrackLenght());
	if (track_ms <= 0)
		return 0;

	if (last_pause)
		return atomic_read(w_offset) + atomic_read(sync_offset);

	int played = playbackOptions.auto_enable_forwarder && client == nullptr // if is auto enabled, and not client, then return the written RAW bytes
					? ConvertBytesToMiliseconds(atomic_read(raw_written_bytes)) + atomic_read(w_offset)
					: ::GetTickCount() - atomic_read(start_t) + atomic_read(w_offset) + atomic_read(sync_offset); 

	return static_cast<std::size_t>(std::max(track_ms - played, 0));
}

void SyncronisedStreamManager::close()
{
	last_pause = false;

	::InterlockedExchange(&raw_bytes_per_second, 0);
	_current_track_lenght = 0;
	::InterlockedExchange(&sync_offset, 0);
	::InterlockedExchange(&start_t, 0);
	::InterlockedExchange(&w_offset, 0);

	_audio_output_stream->Close();
	
	{
		boost::mutex::scoped_lock lock(_write_buffer_mutex);
		_write_buffer.clear();
	}

	execute_guard_section(std::bind(&MpdClient::stop, &_mpd_client));
}

void SyncronisedStreamManager::quit()
{
	_audio_output_stream->Close();
	
	if (raw_bytes_per_second > 0)
		stop();
}

bool have_same_address(const asio::ip::tcp::socket *client1, const asio::ip::tcp::socket *client2)
{
	if (!client1 || !client2)
		return false;

	boost::system::error_code ec;
	asio::ip::tcp::endpoint remote_endpoint1 = client1->remote_endpoint(ec);
	if (ec)
		return false;
	asio::ip::tcp::endpoint remote_endpoint2 = client2->remote_endpoint(ec);
	if (ec)
		return false;

	return remote_endpoint1.address().to_string() == remote_endpoint2.address().to_string();
}


void SyncronisedStreamManager::handle_new_connection(asio::ip::tcp::socket *client, const std::string &request_headers)
{
	if (this->client != nullptr && !have_same_address(client, this->client.get()))
	{
		client->close();
		delete client;
		return;
	}

	if (playbackOptions.auto_enable_forwarder)
		playbackOptions.forwarder.EnableOutput(false);

	set_written_bytes(0);

	{
		boost::mutex::scoped_lock lock(_write_buffer_mutex);

		const auto first_array = _write_buffer.array_one();
		const auto second_array = _write_buffer.array_two();

		try
		{
			std::size_t w1 = asio::write(*client, asio::buffer(first_array.first, first_array.second)); 
			std::size_t w2 = asio::write(*client, asio::buffer(second_array.first, second_array.second)); 

			set_written_bytes(w1 + w2);
		}
		catch(const boost::system::system_error &)
		{
			//We were unable to write to the socket. I don't know what i should do in that case
		}
	}

	::InterlockedExchange(&start_t, ::GetTickCount());
	
	this->client.reset(client);
}

void SyncronisedStreamManager::handle_disconnect(asio::ip::tcp::socket *client)
{
	if (this->client.get() != client)
		return;

	if (playbackOptions.auto_enable_forwarder)
		playbackOptions.forwarder.EnableOutput(true);

	this->client.reset();
}

void SyncronisedStreamManager::output_time_sync_callback(const system::error_code &error)
{
	if (error == boost::asio::error::operation_aborted)
		return; // operation canceled

	if (_current_track_lenght == 0)
		_current_track_lenght = _player.getTrackLenght();

	int delay = 0;

	if (error || last_pause)
		goto queue_timer;
	
	try
	{
		// if winamp is not playing then we stop
		if (raw_bytes_per_second == 0)
			return;

		// we try to don't call the sync function on the last second of the track and cancel the timer
		if (_current_track_lenght > 0 && _current_track_lenght - _last_out_time <= 1000)
			return;

		auto start_ = ::GetTickCount();
		mpd_status status = _mpd_client.get_status();

		if (status.playback_status == mpd_player_status::playing)
		{
			delay = (::GetTickCount() - start_) / 2; // split the delay in two: request and response

			// because mpd is get stucked we must force to connect again
			if (last_mpd_status.playback_status == mpd_player_status::playing && last_mpd_status.elapsed_time == status.elapsed_time && client == nullptr)
			{
				_mpd_client.re_play();
				delay = 0;
			}

			bool poor_precision = status.elapsed_time > 0 && (status.elapsed_time % 1000) == 0;

			// We should syncronise, only if the GetOutputTime of seconds != elapsed_time
			if (poor_precision)
			{
				int elapsed = std::max(status.elapsed_time - 1000, 0);// - delay;
				int elapsed_from_last_sync = (last_pause ? atomic_read(w_offset) : start_ - atomic_read(start_t)) + atomic_read(sync_offset);
			
				if (std::ceil(elapsed_from_last_sync / 1000) != std::ceil(elapsed / 1000))
				{
					::InterlockedExchange(&sync_offset, std::max(elapsed, 0));
					::InterlockedExchange(&start_t, ::GetTickCount());
					Global::DebugWrite(_T("reset\n"));
				}
			}
			else
			{
				int elapsed = std::max(status.elapsed_time - 300, 0) - delay;

				::InterlockedExchange(&sync_offset, std::max(elapsed, 0));
				::InterlockedExchange(&start_t, ::GetTickCount());
				Global::DebugWrite(_T("reset\n"));
			}
		}
		else
		{
			if (!last_pause)
				play();
		}

		last_mpd_status = status;
	}
	catch(const mpd_client_exception &)
	{
		_mpd_client.async_connect(std::bind(&SyncronisedStreamManager::connect_handler, this, std::placeholders::_1, std::placeholders::_2));
	}

queue_timer:
	std::size_t timer_ss = delay <= 1 ? 1 : (delay <= 50 ? 2 : 3);

	output_sync_timer.expires_from_now(boost::posix_time::seconds(timer_ss));
	output_sync_timer.async_wait(std::bind(&SyncronisedStreamManager::output_time_sync_callback, this, std::placeholders::_1));
}
