#pragma once
#include "StreamManager.h"

struct IAudioOutputStream;
class MpdClient;

enum  ClientType
{
	Live,
	Fade
};
/*
class FadeStreamManager : public StreamManager
{
	MpdClient &_mpd_client;
	Concurrency::concurrent_vector<std::pair<asio::ip::tcp::socket *, ClientType>> _connected_clients;
	
	CRITICAL_SECTION _cs;
	boost::circular_buffer_space_optimized<BYTE> _write_buffer;

	void handle_new_connection(asio::ip::tcp::socket *client, const std::string &request_headers);
	void handle_disconnect(asio::ip::tcp::socket *client);
public:
	FadeStreamManager(std::unique_ptr<IAudioOutputStream> outputStream, MpdClient &client);
	~FadeStreamManager(void);

	void initialize();
	int open();
	void play();
	void stop();
	bool pause(bool pause);
	void set_volume(int volume);

	void flush();
	int write(PBYTE buff, int count, PBYTE &out_buff);
	void close();
	void quit();
};
*/
