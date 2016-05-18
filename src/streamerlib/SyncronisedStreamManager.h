#pragma once
#include "DummyStreamManager.h"
#include "MpdClient.h"

__declspec(align(32))
class SyncronisedStreamManager : public DummyStreamManager
{
	asio::io_service &io_service;
	BYTE *_write_async_buffer;
	struct mpd_status last_mpd_status;
	int _current_track_lenght;
	volatile DWORD _last_out_time;
	// The number of encoded bytes sent to the server
	volatile DWORD _sentBytes;

public:
	struct Options
	{
		int prebuffer_time;
		OutForwarder &forwarder;
		bool auto_enable_forwarder;
	};

private:
	Options playbackOptions;
	asio::deadline_timer output_sync_timer;

	void start_async_send_chunks();
	void async_send_chunks_handler(const system::error_code &, std::size_t transferred);
	
	void output_time_sync_callback(const system::error_code &error);
	void handle_new_connection(asio::ip::tcp::socket *client, const std::string &request_headers);
	void handle_disconnect(asio::ip::tcp::socket *client);
	bool execute_guard_section(std::function<bool ()> mpd_command);
	void connect_handler(const boost::system::error_code &error, void *);
public:
	SyncronisedStreamManager(std::unique_ptr<IAudioOutputStream> audio_output_stream, MpdClient &client, struct Player& player, asio::io_service& io_service, Options playbackOptions);
	~SyncronisedStreamManager();

	// StreamManager interface
	void initialize();
	int open(int samplerate, int numchannels, int bitspersamp);
	void play();
	void stop();
	bool pause(bool pause);
	void set_volume(int volume);

	void seek(int seek_time);
	bool write(PBYTE buff, int count);
	void flush();
	void close();
	void quit();

	bool can_write();
	unsigned get_written_time();
	unsigned get_output_time();
	std::size_t remaining_ms();
};
