#pragma once
#include "stdafx.h"

#define MPD_PING_TIMER_SECONDS 25
//#define MPD_USE_ASYNC_METHODS

struct playlist_entry;
struct mpd_status;
class mpd_client_exception;

class MpdClient
{
	typedef std::function<void (const char *)> async_write_command_delegate;
	typedef std::function<void (const boost::system::error_code &error, void *)> async_connect_delegate;

	std::string _host;
	int _port, _volume;
	float _server_version;

	boost::asio::ip::tcp::socket _socket;
	boost::asio::deadline_timer _ping_timer;
	
	void on_error();
	void on_connected();

	void async_connection_read();
	void handle_client_ping(const boost::system::error_code &);
	void parse_status(mpd_status& status, const std::string& command, const std::string &value);
	float read_server_version(const char * version);

	void write_command(std::string, std::string &command_response, const std::string command_delimiter);
	bool write_ok_command(const std::string &);

	void handle_async_connect(async_connect_delegate callback, void *state, const boost::system::error_code &);
	void handle_async_read_client_version(async_connect_delegate callback, void *state, boost::asio::streambuf *read_buff, std::size_t transferred, const boost::system::error_code &);
	void handle_async_connection_read(asio::streambuf *read_buff, const boost::system::error_code &, const std::size_t transferred);

	void async_write_command(const std::string &, async_write_command_delegate delegate);
	void handle_async_write_command(char *buff, async_write_command_delegate, const boost::system::error_code &, std::size_t transferred);
	void async_read_command_response(async_write_command_delegate response_callback);
	void handle_async_read_command_response(asio::streambuf *, async_write_command_delegate response_callback, const boost::system::error_code &, std::size_t transferred);

	bool write_command(std::string);
	bool _set_volume();
public:
	MpdClient(std::basic_string<TCHAR> host, int port, asio::io_service &io_service);
	~MpdClient();

	float server_version() const;
	void connect();
	void async_connect(async_connect_delegate callback = nullptr, void *state = nullptr);
	
	void disconnect();
	bool is_connected();

	bool play();
	bool pause();
	bool next();
	bool stop();
	bool re_play();

	bool playlist_add(LPCSTR item);
	bool playlist_clear();
	bool playlist_load(LPCSTR playlist);
	bool playlist_save(LPCSTR playlist);
	std::vector<playlist_entry> playlist();
	
	mpd_status get_status();

	bool ping();
	bool set_volume(int);

	std::string get_local_address();
};

struct playlist_entry
{
	int id;
	std::string name;
	int position;
};

enum class mpd_client_error_reason
{
	disconnected, error
};

class mpd_client_exception : public std::exception
{
	std::string message;
	mpd_client_error_reason reason;
public:
	mpd_client_exception(const std::string &, mpd_client_error_reason reason);
	const char* what() const throw();
	mpd_client_error_reason get_reason() const;
};


enum class mpd_player_status
{
	stopped, paused, playing
};

struct mpd_status
{
	mpd_player_status playback_status;
	// The playler volume. From 0 to 100.
	int volume;
	// The elapsed time in miliseconds
	int elapsed_time;
	// The total time in seconds
	int total_time;
	// The playlist id
	int playlist_id;
};
