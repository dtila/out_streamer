#include "StdAfx.h"
#include "StreamManager.h"
#include "IAudioOutputStream.h"

StreamManager::StreamManager(std::unique_ptr<IAudioOutputStream> audio_output_stream, Player& player) 
	: _audio_output_stream(std::move(audio_output_stream)), _writtenBytes(), _player(player)
{
}

StreamManager::~StreamManager()
{
}

void StreamManager::new_connection(asio::ip::tcp::socket *client_socket, const std::string &request_headers)
{
	auto header_buffer_lenght = 0;
	auto header_buffer = _audio_output_stream->GetHeader(header_buffer_lenght);

	if (header_buffer_lenght > 0)
	{
		async_write_audio_header(client_socket, request_headers, header_buffer, header_buffer_lenght);
	}
	else
	{
		handle_new_connection(client_socket, request_headers);
	}
}

void StreamManager::async_write_audio_header(asio::ip::tcp::socket *client_socket, const std::string &request_headers, PBYTE header, int count)
{
	asio::async_write(*client_socket, asio::buffer(header, count), 
		std::bind(&StreamManager::handle_async_write_audio_header, this, client_socket, request_headers, std::placeholders::_1, std::placeholders::_2));
}

void StreamManager::handle_async_write_audio_header(asio::ip::tcp::socket *client, std::string request_headers, const boost::system::error_code &error, std::size_t transferred)
{
	if(error || transferred <= 0)
	{
		HandleError();
		return;
	}

	handle_new_connection(client, request_headers);
}

void StreamManager::async_write_stream_content(asio::ip::tcp::socket *client_socket, PBYTE content, int lenght)
{
	auto buff = new BYTE[lenght];
	std::copy(content, content + lenght, stdext::make_checked_array_iterator(buff, lenght));

	asio::async_write(*client_socket, asio::buffer(buff, lenght), 
		std::bind(&StreamManager::handle_async_write_stream_content, this, client_socket, buff, std::placeholders::_1, std::placeholders::_2));
}

void StreamManager::handle_async_write_stream_content(asio::ip::tcp::socket *client_socket, BYTE *buffer, const boost::system::error_code &error, std::size_t transferred)
{
	delete [] buffer;

	if (error)
	{
		handle_disconnect(client_socket);
		return;
	}

	::InterlockedExchangeAdd(&_writtenBytes, transferred);
}

bool StreamManager::write_stream_content(asio::ip::tcp::socket *client, BYTE *content, int lenght)
{
	try
	{
		std::size_t transferred = asio::write(*client, asio::buffer(content, lenght)); 
	
		::InterlockedExchangeAdd(&_writtenBytes, transferred);
		return transferred > 0;
	}
	catch(const boost::system::system_error &)
	{
		handle_disconnect(client);
		return false;
	}
}


void StreamManager::set_written_bytes(unsigned value)
{
	::InterlockedExchange(&_writtenBytes, value);
}

unsigned StreamManager::get_written_bytes()
{
	return atomic_read(_writtenBytes);
}

unsigned StreamManager::get_written_time()
{
	return this->_audio_output_stream->ConvertBytesCountToMiliseconds(_writtenBytes);
}