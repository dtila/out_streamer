#include "StdAfx.h"
#include "MpdClient.h"

std::string command_end_delimiter = "\n";

MpdClient::MpdClient(std::basic_string<TCHAR> host, int port, asio::io_service &io_service) : _volume(), _server_version(), 
	_host(std::begin(host), std::end(host)),
	_port(port), 
	_socket(io_service),
	_ping_timer(io_service, boost::posix_time::seconds(MPD_PING_TIMER_SECONDS))
{
	//async_read_event = ::CreateEvent(NULL, TRUE, FALSE, NULL);
}

MpdClient::~MpdClient()
{
	//if (async_read_event != nullptr)
	//	::CloseHandle(async_read_event);
}

float MpdClient::server_version() const
{
	if (_server_version == 0)
		throw mpd_client_exception("server is not connected", mpd_client_error_reason::disconnected);
	return _server_version;
}

bool MpdClient::is_connected()
{
	try
	{
		return ping();
	}
	catch(const mpd_client_exception &)
	{
		return false;
	}
}

void MpdClient::disconnect()
{
	//stop();
	boost::system::error_code err;
	_socket.shutdown(boost::asio::socket_base::shutdown_type::shutdown_both, err);
	_socket.close(err);
}

void MpdClient::on_error()
{
}

void MpdClient::on_connected()
{
	async_connection_read();
		
	this->_ping_timer.expires_from_now(boost::posix_time::seconds(MPD_PING_TIMER_SECONDS));
	this->_ping_timer.async_wait(std::bind(&MpdClient::handle_client_ping, this, std::placeholders::_1));
}

void MpdClient::async_connection_read()
{
	/*{
		::memset(&async_read_result, 0, sizeof async_read_result);
	}

	auto read_buff = new asio::streambuf;
	asio::async_read(_socket, *read_buff, 
		std::bind(&MpdClient::handle_async_connection_read, this, read_buff, std::placeholders::_1, std::placeholders::_2));*/
}


void MpdClient::handle_async_connection_read(asio::streambuf *read_buff, const boost::system::error_code & error, const std::size_t transferred)
{
	/*auto buff = asio::buffer_cast<const char *>(read_buff->data());

	if (error)
	{
		{
			boost::mutex::scoped_lock scope(async_read_mutex);
			async_read_result.error = error;
		}

		// notify completion
		::SetEvent(async_read_event);
		delete read_buff;
		on_error();
	}
	else
	{
		if (boost::ends_with(buff, async_read_result.expected_command_delimtier.c_str()))
		{
			{
				boost::mutex::scoped_lock scope(async_read_mutex);
				async_read_result.error = error;
				async_read_result.read_response = buff;
			}

			// notify completion
			::SetEvent(async_read_event);
			delete read_buff;
		}
		else
		{
			// read some again
			asio::async_read(_socket, *read_buff,
				std::bind(&MpdClient::handle_async_connection_read, this, read_buff, std::placeholders::_1, std::placeholders::_2));
		}
	}*/
}


void MpdClient::handle_client_ping(const system::error_code &error)
{
	try
	{
		//ping();
	}
	catch(const mpd_client_exception &)
	{
		//async_connect();
	}
	
	this->_ping_timer.expires_from_now(boost::posix_time::seconds(MPD_PING_TIMER_SECONDS));
	this->_ping_timer.async_wait(std::bind(&MpdClient::handle_client_ping, this, std::placeholders::_1));
}

bool MpdClient::play()
{
	return write_ok_command("play");
}

bool MpdClient::pause()
{
	return write_ok_command("pause");
}

bool MpdClient::stop()
{
	return write_ok_command("stop");
}

bool MpdClient::re_play()
{
	//return write_command("seek 0 0");
	return stop() & play(); // use bit operators to avoid short circuit evaluation
}

bool MpdClient::ping()
{
	return write_ok_command("ping");
}

bool MpdClient::playlist_add(LPCSTR item)
{
	std::stringstream ss;
	ss << "add \"" << item << "\"";

	return write_ok_command(ss.str());
}

bool MpdClient::playlist_clear()
{
	return write_ok_command("clear");
}

bool MpdClient::playlist_save(LPCSTR playlist)
{
	std::stringstream ss;
	ss << "save \"" << playlist << "\"";
	
	return write_ok_command(ss.str());
}

bool MpdClient::playlist_load(LPCSTR playlist)
{
	std::stringstream ss;
	ss << "load \"" << playlist << "\"";
	
	return write_ok_command(ss.str());
}

std::vector<playlist_entry> MpdClient::playlist()
{
	std::vector<playlist_entry> playlist;


	return playlist;
}

mpd_status MpdClient::get_status()
{
	try
	{
		std::string response;
		write_command("status", response, "OK\n");

		mpd_status status = {};

		std::string command_delim = ": ", command_end = "\n";
		bool search_delim = true;
		const char * prev = response.c_str();
		std::string command;

		for(const char * curr = ::strstr(prev, ": "); curr != nullptr; curr = ::strstr(prev, search_delim ? command_delim.c_str() : command_end.c_str()))
		{
			if (search_delim)
				command.assign(prev, curr - prev);
			else
			{
				std::string value(prev, curr - prev);
				parse_status(status, command, value);
			}

			prev = curr + (search_delim ? command_delim : command_end).length();
			search_delim = !search_delim;
		}

		return status;
	}
	catch(const boost::system::system_error& ex)
	{
		throw mpd_client_exception(std::string("Unable to retrieve server playback status: ") + ex.what(), mpd_client_error_reason::error);
	}
}

void MpdClient::parse_status(mpd_status& status, const std::string& command, const std::string &value)
{
	if (command == "volume")
	{
		status.volume = ::atoi(value.c_str());
		return;
	}

	if (command == "state")
	{
		if (value == "stop")
			status.playback_status = mpd_player_status::stopped;
		else
			if (value == "play")
				status.playback_status = mpd_player_status::playing;
			else
				if (value == "pause")
					status.playback_status = mpd_player_status::paused;
		return;
	}

	if (command == "elapsed")
	{
		int elapsed_s = 0, elapsed_ms = 0;
		if (::sscanf_s(value.c_str(), "%d.%d", &elapsed_s, &elapsed_ms) == 2)
		{
			status.elapsed_time = (elapsed_s * 1000) + elapsed_ms;
		}
		return;
	}

	if (command == "time")
	{
		int elapsed_s = 0;
		if (::sscanf_s(value.c_str(), "%d:%d", &elapsed_s, &status.total_time) == 2)
			if (status.elapsed_time == 0)
				status.elapsed_time = elapsed_s * 1000;
		return;
	}

	if (command == "playlist" && ::sscanf_s(value.c_str(), "%d", &status.playlist_id) == 1)
	{
		return;
	}
}

bool MpdClient::_set_volume()
{
	int normalized = _volume * 100 / 255;

	std::stringstream ss;
	ss << "setvol " << normalized;
	return write_ok_command(ss.str());
}

// Volume is between 0 and 255
bool MpdClient::set_volume(int volume)
{
	if(/*this->_volume == volume || */volume == -666)
		return true;

	_volume = volume;
	return _set_volume();
}

std::string MpdClient::get_local_address()
{
	return _socket.local_endpoint().address().to_string();
}


void MpdClient::connect()
{
	system::error_code error;
	_socket.connect(asio::ip::tcp::endpoint(asio::ip::address::from_string(this->_host), this->_port), error); 
	if(error)
		throw mpd_client_exception("Unable to connect to specified host", mpd_client_error_reason::disconnected);

	asio::basic_streambuf<> buff;
	std::size_t read = asio::read_until(_socket, buff, command_end_delimiter, error);
	if (error)
	{
		disconnect();
		throw mpd_client_exception("Unable to read the version number of the server", mpd_client_error_reason::error);
	}

	this->_server_version = read_server_version(asio::buffer_cast<const char *>(buff.data()));
	on_connected();
}

void MpdClient::write_command(std::string command, std::string &command_response, const std::string command_delimiter)
{
	try
	{
		if (_server_version == 0.0)
			throw mpd_client_exception(std::string("Unable to write '" + command + "' command: connection not established with the server"), mpd_client_error_reason::disconnected);

		asio::basic_streambuf<> read_stream;
		command.append(command_end_delimiter);

		asio::write(_socket, asio::buffer(command));
		asio::read_until(_socket, read_stream, command_delimiter);

		this->_ping_timer.expires_from_now(boost::posix_time::seconds(MPD_PING_TIMER_SECONDS));

		auto read_string = asio::buffer_cast<const char *>(read_stream.data());
		command_response.append(read_string);
	}
	catch(const boost::system::system_error &e)
	{
		on_error();
		throw mpd_client_exception(std::string("Unable to write the command '" + command + "': " + e.what()), mpd_client_error_reason::disconnected);
	}
}

bool MpdClient::write_ok_command(const std::string & command)
{
	std::string command_response;
	write_command(command, command_response, "\n");
	return command_response.compare("OK\n") == 0;
}

void MpdClient::async_connect(async_connect_delegate callback, void *state)
{
	try
	{
		if (!_socket.is_open())
			goto connect_step;

		ping();
	}
	catch(const mpd_client_exception &)
	{
		disconnect();
		goto connect_step;
	}

	
	if (callback)
		callback(boost::system::error_code(), state);
	return;

connect_step:
	::Sleep(1);
	_socket.async_connect(asio::ip::tcp::endpoint(asio::ip::address::from_string(this->_host), this->_port), 
		std::bind(&MpdClient::handle_async_connect, this, callback, state, std::placeholders::_1));
}

void MpdClient::handle_async_connect(async_connect_delegate callback, void *state, const boost::system::error_code &error)
{
	if(error)
	{
		this->on_error();
		if (callback)
			callback(error, state);
		return;
	}

	auto buff = new asio::streambuf;
	asio::async_read_until(_socket, *buff, command_end_delimiter, 
		boost::bind(&MpdClient::handle_async_read_client_version, this, callback, state, buff, asio::placeholders::bytes_transferred, asio::placeholders::error));
}

void MpdClient::handle_async_read_client_version(async_connect_delegate callback, void *state, asio::streambuf *read_buff, std::size_t transferred, const boost::system::error_code &error)
{
	std::unique_ptr<asio::streambuf> scoped_buff(read_buff);

	if (error)
	{
		this->on_error();
		disconnect();
	}
	else
	{
		this->_server_version = read_server_version(asio::buffer_cast<const char *>(read_buff->data()));
		if(_server_version == 0)
		{
			disconnect();
			return;
		}

		on_connected();
	}

	if (callback)
		callback(error, state);
}

void MpdClient::async_write_command(const std::string &command, async_write_command_delegate command_response_delegate)
{
	// This is comment becase i added async_read to find when the connection is closed
	/*auto command_copy = new char[command.length()];
	std::copy(std::begin(command), std::end(command), command_copy);

	asio::async_write(_socket, asio::buffer(command_copy, command.length()), 
		std::bind(&MpdClient::handle_async_write_command, this, command_copy, command_response_delegate, std::placeholders::_1, std::placeholders::_2));*/
}

void MpdClient::handle_async_write_command(char *buff, async_write_command_delegate response_delegate, const system::error_code &error, std::size_t transferred)
{
	std::unique_ptr<char> scoped_buff(buff);

	if (error)
	{
		on_error();
		return;
	}

	async_read_command_response(response_delegate);
}

void MpdClient::async_read_command_response(async_write_command_delegate response_callback)
{
	auto read_buff = new asio::streambuf;
	asio::async_read_until(_socket, *read_buff, command_end_delimiter, 
		std::bind(&MpdClient::handle_async_read_command_response, this, read_buff, response_callback, std::placeholders::_1, std::placeholders::_2));
}

void MpdClient::handle_async_read_command_response(asio::streambuf *buff, async_write_command_delegate response_callback, const system::error_code &error, std::size_t transferred)
{
	std::unique_ptr<asio::streambuf> scoped_buff(buff);

	auto plain_buffer = asio::buffer_cast<const char *>(scoped_buff->data());

	if(error)
	{
		this->on_error();
		return;
	}

	this->_ping_timer.expires_from_now(boost::posix_time::seconds(MPD_PING_TIMER_SECONDS));

	if (response_callback != nullptr)
		response_callback(plain_buffer);
}

float MpdClient::read_server_version(const char * version)
{
	int v1 = 0, v2 = 0, v3 = 0;
	if (::sscanf_s(version, "OK MPD %d.%d.%d", &v1, &v2, &v3) != 3)
		return 0;

	return v1 + (v2 / 100.0f) + (v3 / 1000.0f);
}


/* Exception */
mpd_client_exception::mpd_client_exception(const std::string &message,  mpd_client_error_reason reason) 
	: message(message), reason(reason)
{
}

const char * mpd_client_exception::what() const throw()
{
   	return message.c_str();
};

mpd_client_error_reason mpd_client_exception::get_reason() const
{
	return this->reason;
}