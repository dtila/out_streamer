#include "stdafx.h"
#include "auto_update_feature.h"

std::unique_ptr<auto_update_feature> _update_feature_request;

void auto_update_feature::check_for_updates()
{

}

auto_update_feature::auto_update_feature(boost::asio::io_service& io_service, const std::string& server, const std::string& path, check_for_update_response_delegate callback)
: resolver_(io_service), socket_(io_service), callback(callback)
{
	std::ostream request_stream(&request_);
	request_stream << "GET " << path << " HTTP/1.0\r\n";
	request_stream << "Host: " << server << "\r\n";
	request_stream << "Accept: */*\r\n";
	request_stream << "Connection: close\r\n\r\n";

	// Start an asynchronous resolve to translate the server and service names
	// into a list of endpoints.
	boost::asio::ip::tcp::resolver::query query(server, "http");
	resolver_.async_resolve(query,
		boost::bind(&auto_update_feature::handle_resolve, this,
			boost::asio::placeholders::error,
			boost::asio::placeholders::iterator));
}

void auto_update_feature::handle_resolve(const boost::system::error_code& err, boost::asio::ip::tcp::resolver::iterator endpoint_iterator)
{
	if (!err)
	{
	  // Attempt a connection to each endpoint in the list until we
	  // successfully establish a connection.
	  boost::asio::async_connect(socket_, endpoint_iterator,
		  boost::bind(&auto_update_feature::handle_connect, this,
			boost::asio::placeholders::error));
	}
	else
	{
		Global::DebugWrite(_T("auto_update_feature::handle_resolve error: %s"), err.message());
	}
}

void auto_update_feature::handle_connect(const boost::system::error_code& err)
{
	if (!err)
	{
		// The connection was successful. Send the request.
		boost::asio::async_write(socket_, request_,
			boost::bind(&auto_update_feature::handle_write_request, this,
			boost::asio::placeholders::error));
	}
	else
	{
		Global::DebugWrite(_T("auto_update_feature::handle_connect error: %s"), err.message());
	}
}

void auto_update_feature::handle_write_request(const boost::system::error_code& err)
{
	if (!err)
	{
		// Read the response status line. The response_ streambuf will
		// automatically grow to accommodate the entire line. The growth may be
		// limited by passing a maximum size to the streambuf constructor.
		boost::asio::async_read_until(socket_, response_, "\r\n",
			boost::bind(&auto_update_feature::handle_read_status_line, this,
			boost::asio::placeholders::error));
	}
	else
	{
		Global::DebugWrite(_T("auto_update_feature::handle_write_request error: %s"), err.message());
	}
}

void auto_update_feature::handle_read_status_line(const boost::system::error_code& err)
{
	if (!err)
	{
		// Check that response is OK.
		std::istream response_stream(&response_);
		std::string http_version;
		response_stream >> http_version;
		unsigned int status_code;
		response_stream >> status_code;
		std::string status_message;
		std::getline(response_stream, status_message);
		if (!response_stream || http_version.substr(0, 5) != "HTTP/")
		{
			Global::DebugWrite(_T("auto_update_feature::handle_read_status_line invalid response"));
			return;
		}
			
		if (status_code != 200)
		{
			Global::DebugWrite(_T("auto_update_feature::handle_read_status_line status_code: %d %s"), status_code, err.message());
			return;
		}

		// Read the response headers, which are terminated by a blank line.
		boost::asio::async_read_until(socket_, response_, "\r\n\r\n",
			boost::bind(&auto_update_feature::handle_read_headers, this,
			boost::asio::placeholders::error));
	}
	else
	{
		Global::DebugWrite(_T("auto_update_feature::handle_read_status_line error: %s"), err.message());
	}
}

void auto_update_feature::handle_read_headers(const boost::system::error_code& err)
{
	if (!err)
	{
		// Process the response headers.
		std::istream response_stream(&response_);
		std::string header;
		while (std::getline(response_stream, header) && header != "\r")
			std::cout << header << "\n";
		std::cout << "\n";

		// Write whatever content we already have to output.
		if (response_.size() > 0 && callback != nullptr)
			callback(boost::asio::buffer_cast<const char *>(response_.data()));

	    // Start reading remaining data until EOF.
		boost::asio::async_read(socket_, response_,
			boost::asio::transfer_at_least(1),
			boost::bind(&auto_update_feature::handle_read_content, this,
			boost::asio::placeholders::error));
	}
	else
	{
		Global::DebugWrite(_T("auto_update_feature::handle_read_headers error: %s"), err.message());
	}
}

void auto_update_feature::handle_read_content(const boost::system::error_code& err)
{
	if (!err)
	{
		// Write all of the data that has been read so far.
		if (callback != nullptr)
			callback(boost::asio::buffer_cast<const char *>(response_.data()));

		// Continue reading remaining data until EOF.
		boost::asio::async_read(socket_, response_,
			boost::asio::transfer_at_least(1),
			boost::bind(&auto_update_feature::handle_read_content, this,
			boost::asio::placeholders::error));
	}
	else if (err != boost::asio::error::eof)
	{
		Global::DebugWrite(_T("auto_update_feature::handle_read_content error: %s"), err.message());
	}
}
