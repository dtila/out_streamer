#pragma once
#include "StreamManager.h"
#include "AllignedNew.h"

class MpdClient;
struct IAudioOutputStream;
class OutForwarder;
	
__declspec(align(32))
class DummyStreamManager : public StreamManager, public AlignedNew<DummyStreamManager>
{
protected:
	volatile unsigned int raw_bytes_per_second;
	int prebuffer_time;
	volatile DWORD start_t, w_offset, sync_offset, raw_written_bytes;
	bool last_pause;

	MpdClient &_mpd_client;
	std::unique_ptr<asio::ip::tcp::socket> client;

	boost::mutex _write_buffer_mutex;
	boost::circular_buffer<BYTE> _write_buffer;

	bool setup_mpd_playlist() const;
	void handle_new_connection(asio::ip::tcp::socket *client, const std::string &request_headers);
	void handle_disconnect(asio::ip::tcp::socket *client);
	bool execute_guard_section(std::function<bool ()> mpd_command) const;
	void connect_handler(const boost::system::error_code &error, void *);

	inline unsigned ConvertBytesToMiliseconds(unsigned bytesCount);
	inline unsigned ConvertMilisecondsToBytesCount(unsigned miliseconds);

public:
	DummyStreamManager(std::unique_ptr<IAudioOutputStream> audio_output_stream, MpdClient &client, struct Player& player, int prebuffer_time);
	~DummyStreamManager();

	std::function<void (bool) > OnCommandSucceeded;

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
