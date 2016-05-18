#include "StdAfx.h"
#include "HttpServer.h"
#include "Settings.h"
#include "IAudioOutputStream.h"
#include "StreamManager.h"
#include "IHttpStreamResponse.h"

HttpServer::HttpServer(StreamManager &streamManager, asio::io_service &io_service) : _port(), 
	_io_service(io_service), 
	_stream_manager(streamManager),
	_acceptor(_io_service)
	//_http_stream(_http_response)
{
}
	
HttpServer::~HttpServer()
{
	Stop();
}

bool HttpServer::Start()
{
	_port = 0;

	boost::system::error_code error;
	_acceptor.open(asio::ip::tcp::v4(), error);

	for each(int port in Global::ListeningPorts) 
	{
		try
		{
			_acceptor.bind(asio::ip::tcp::endpoint(asio::ip::address_v4::any(), port), error);
			if (error)
				continue;
			_acceptor.listen(asio::socket_base::max_connections, error);
			this->_port = port;
			break;
		}
		catch(const boost::system::system_error & ex)
		{
			Global::DebugWrite(_T("Unable to bind on port %d: "), port, ex.what());
		}
	}
	
	//if(_port == 0)
	//	throw new std::exception("Could not start the HttpServer, missing available port");

	auto client = new asio::ip::tcp::socket(_io_service);
	_acceptor.async_accept(*client, std::bind(&HttpServer::handle_accept, this, client, std::placeholders::_1));

	return _port > 0;
}

void HttpServer::Stop()
{
	_acceptor.close();
}

void HttpServer::handle_accept(asio::ip::tcp::socket *client, const boost::system::error_code& error)
{
	if (error)
	{
		delete client;
		if (!_acceptor.is_open())
			return;
		HandleError();
		return;
	}

	auto new_client = new asio::ip::tcp::socket(_io_service);
	_acceptor.async_accept(*new_client, boost::bind(&HttpServer::handle_accept, this, new_client, asio::placeholders::error));
	
	auto read_buffer = new asio::basic_streambuf<>();
	asio::async_read_until(*client, *read_buffer, "\r\n\r\n",
		std::bind(&HttpServer::handle_async_read_headers, this, client, read_buffer, std::placeholders::_2, std::placeholders::_1));
}

void HttpServer::handle_async_read_headers(asio::ip::tcp::socket *client, asio::basic_streambuf<> *buffer, std::size_t transferred, const boost::system::error_code &error)
{
	std::unique_ptr<asio::streambuf> scope_buffer(buffer);

	if(error)
	{
		delete client;
		HandleError();
		return;
	}
	
	auto request_headers = asio::buffer_cast<const char *>(buffer->data());
	async_write_http_headers(client, std::string(request_headers, request_headers + transferred));
}

void HttpServer::async_write_http_headers(asio::ip::tcp::socket *client, std::string request_headers)
{
	std::stringstream ssheaders;
	ssheaders << "Status: HTTP/1.1 200 OK" << std::endl;
	ssheaders << "Server: MPD Broadcaster Plugin" << std::endl;
	ssheaders << "Transfer-Encoding: chunked" << std::endl;
	ssheaders << "Content-Type: audio/wav" << std::endl;

	//for each(auto const kvp in this->_http_stream.GetResponseHeaders())
	//	ssheaders << kvp.first << ": " << kvp.second << std::endl;

	//ssheaders << "Content-Type: " << this->_stream_manager._audio_output_stream->GetStreamingContentType() << std::endl;
	ssheaders << std::endl << std::endl;
	
	auto headers = ssheaders.str();
	auto buff = new char[headers.length()];
	std::copy(std::begin(headers), std::end(headers), stdext::make_checked_array_iterator(buff, headers.length()));

	asio::async_write(*client, asio::buffer(buff, headers.length()), 
		boost::bind(&HttpServer::handle_async_write_http_headers, this, client, request_headers, buff, asio::placeholders::error, asio::placeholders::bytes_transferred));
}

void HttpServer::handle_async_write_http_headers(asio::ip::tcp::socket *client, std::string req_headers, char *write_headers, const boost::system::error_code &error, std::size_t transferred)
{
	std::unique_ptr<char> scoped(write_headers);

	if (error)
	{
		delete client;
		HandleError();
		return;
	}

	_stream_manager.new_connection(client, req_headers);
}

int HttpServer::GetListeningPort() const
{
	return _port;
}

