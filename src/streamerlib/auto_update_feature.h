#pragma once
#include "stdafx.h"

typedef std::function<void (const char *)> check_for_update_response_delegate;
typedef std::function<void (float)> check_for_update_result_delegate;

class auto_update_feature
{
	boost::asio::ip::tcp::resolver resolver_;
	boost::asio::ip::tcp::socket socket_;
	boost::asio::streambuf request_;
	boost::asio::streambuf response_;
	check_for_update_response_delegate callback;

	void handle_resolve(const boost::system::error_code& err, boost::asio::ip::tcp::resolver::iterator endpoint_iterator);
	void handle_connect(const boost::system::error_code& err);
	void handle_write_request(const boost::system::error_code& err);
	void handle_read_status_line(const boost::system::error_code& err);
	void handle_read_headers(const boost::system::error_code& err);
	void handle_read_content(const boost::system::error_code& err);

public:
	auto_update_feature(boost::asio::io_service& io_service, const std::string& server, const std::string& path, check_for_update_response_delegate callback);
	static void check_for_updates();
};
