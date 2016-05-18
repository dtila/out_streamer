#pragma once
#include "global.h"

struct Encoder
{
	enum Enum {	WavOut,	Mp3 };
};

struct Settings
{
	Settings();
	~Settings();

	void read();
	void write();

#ifdef STREAMER_PAYD_VERSION
	Encoder::Enum encoder;
	int encoder_preset;
	bool forward_output_sound;
	time_t last_update_check;
#endif
	std::basic_string<TCHAR> router_host;
	int router_port;
	int output_buffer_lenght;
};