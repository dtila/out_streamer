#pragma once

class HttpServer;
struct IAudioOutputStream;
struct Player;

class StreamManager
{
	void new_connection(asio::ip::tcp::socket *client_socket, const std::string &request_headers);

	void async_write_audio_header(asio::ip::tcp::socket *client_socket, const std::string &request_headers, PBYTE header, int count);
	void handle_async_write_audio_header(asio::ip::tcp::socket *client_socket, std::string, const boost::system::error_code &error, std::size_t transferred);

protected:
	Player& _player;
	unsigned volatile _writtenBytes;
	std::unique_ptr<IAudioOutputStream> _audio_output_stream;

	void async_write_stream_content(asio::ip::tcp::socket *client, BYTE *content, int lenght);
	bool write_stream_content(asio::ip::tcp::socket *client, BYTE *content, int lenght);
	void handle_async_write_stream_content(asio::ip::tcp::socket *client, BYTE *buffer, const boost::system::error_code &error, std::size_t transferred);

	virtual void handle_new_connection(asio::ip::tcp::socket *client, const std::string &request_headers) = 0;
	virtual void handle_disconnect(asio::ip::tcp::socket *client) = 0;

	StreamManager(std::unique_ptr<IAudioOutputStream> audio_output_stream, Player& player);
public:
	virtual ~StreamManager();

	virtual void initialize() = 0;
	virtual int open(int samplerate, int numchannels, int bitspersamp) = 0;
	virtual void play() = 0;
	virtual void stop() = 0;
	virtual bool pause(bool pause) = 0;
	virtual void set_volume(int volume) = 0;

	virtual void seek(int seek_time) = 0;
	virtual bool write(PBYTE buff, int count) = 0;
	virtual void flush() = 0;
	virtual void close() = 0;
	virtual void quit() = 0;

	void set_written_bytes(unsigned value);

	virtual bool can_write() = 0;

	virtual unsigned get_written_bytes();
	virtual unsigned get_written_time();
	virtual unsigned get_output_time() = 0;
	virtual std::size_t remaining_ms() = 0;

	friend class HttpServer;
};