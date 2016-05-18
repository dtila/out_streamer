#include "StdAfx.h"
#include "FadeStreamManager.h"
#include "MpdClient.h"
#include "IAudioOutputStream.h"
/*

FadeStreamManager::FadeStreamManager(IAudioOutputStream &outputStream, MpdClient &client) : StreamManager(outputStream),_mpd_client(client)
{
	::InitializeCriticalSection(&_cs);

	_write_buffer.resize(10 * 0x400);
}


FadeStreamManager::~FadeStreamManager()
{
	for each(auto client in _connected_clients)
	{
		if (client.first->is_open())
		{
			client.first->shutdown(asio::ip::tcp::socket::shutdown_both);
			client.first->close();
		}
	}

	::DeleteCriticalSection(&_cs);
}

void FadeStreamManager::initialize()
{	
	std::function<void (void *)> connected = [this](void *)
	{
		char buff[0x100] = {};
		
		sprintf_s(buff, "http://%s:%d/live", _mpd_client.get_local_address().c_str(), Global::ListeningPort);
		_mpd_client.playlist_add(buff);
		sprintf_s(buff, "http://%s:%d/fade", _mpd_client.get_local_address().c_str(), Global::ListeningPort);
		_mpd_client.playlist_add(buff);
	};

	_mpd_client.async_connect(connected);
}

void FadeStreamManager::open()
{
	reset_written_bytes();
	play();
}

void FadeStreamManager::play()
{
	_mpd_client.play();
}

void FadeStreamManager::stop()
{
	_mpd_client.stop();
}

void FadeStreamManager::pause(bool pause)
{
	if(pause)
		_mpd_client.pause();
	else
		_mpd_client.play();
}

void FadeStreamManager::set_volume(int volume)
{
	_mpd_client.set_volume(volume);
}

void FadeStreamManager::flush()
{
	_mpd_client.re_play();
	reset_written_bytes();
}

void FadeStreamManager::write(PBYTE buff, int count)
{
	for each(auto it in this->_connected_clients)
	{
		if (it.first != nullptr)
			async_write_stream_content(it, buff, count);
	}
	
	scoped_critical_section cs(_cs);
	_write_buffer.insert(_write_buffer.end(), buff, buff + count);
}

void FadeStreamManager::close()
{
	_mpd_client.stop();
	_write_buffer.clear();
}

void FadeStreamManager::quit()
{
	stop();
}


void FadeStreamManager::handle_new_connection(asio::ip::tcp::socket *client, const std::string &request_headers)
{
	bool is_from_live;

}

void FadeStreamManager::handle_disconnect(asio::ip::tcp::socket *client)
{
	for(auto it = std::begin(_connected_clients) ; it != std::end(_connected_clients) ; ++it)
		if (*it == client)
		{
			*it = nullptr;
			break;
		}
}
*/