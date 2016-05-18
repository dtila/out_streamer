#pragma once
#include "stdafx.h"

class HttpStream;
struct IAudioOutputStream;
class StreamManager;
struct IHttpResponseStream;

class HttpServer
{
	int _port;
	StreamManager &_stream_manager;
	//IHttpResponseStream &_http_stream;

	asio::io_service &_io_service;
	asio::ip::tcp::acceptor _acceptor;

	void async_write_http_headers(asio::ip::tcp::socket *, std::string);

	void handle_accept(asio::ip::tcp::socket *, const boost::system::error_code& error);
	void handle_async_read_headers(asio::ip::tcp::socket *, asio::basic_streambuf<> *buffer, std::size_t transferred, const boost::system::error_code &error);
	void handle_async_write_http_headers(asio::ip::tcp::socket *, std::string, char *write_headers, const boost::system::error_code &error, std::size_t transferred);
public:
	HttpServer(StreamManager &streamManager, asio::io_service &io_service);
	~HttpServer();
	
	bool Start();
	void Stop();
	int GetListeningPort() const;
};