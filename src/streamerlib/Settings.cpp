#include "StdAfx.h"
#include "Settings.h"
#include "Registry.h"


#define ForwardOutputSoundString _T("forward")
#define PresetTypeString _T("preset")
#define RouterHostString _T("rhost")
#define RouterPortString _T("rport")
#define EncoderPreset _T("ep")
#define OutputBufferLenght _T("ob")
#define LastUpdateDateString _T("lu")



Settings::Settings()
{
	read();
}

Settings::~Settings()
{
	//write();
}

void Settings::read()
{
	Registry registry;
	if (!registry.open(SETTINGS_REGISTRY_ROOT, SETTINGS_REGISTRY_PATH))
		return;

#ifdef STREAMER_PAYD_VERSION
	encoder = Encoder::Enum(registry.read(PresetTypeString, int(Encoder::Mp3)));
	forward_output_sound = registry.read(ForwardOutputSoundString, true);
	encoder_preset = registry.read(EncoderPreset, 0);
	last_update_check = registry.read(LastUpdateDateString, time(NULL));
#endif
	router_host = registry.read(RouterHostString, std::basic_string<TCHAR>(_T("192.168.1.1")));
	router_port = registry.read(RouterPortString, 6600);
	output_buffer_lenght = registry.read(OutputBufferLenght, 2000);
}

void Settings::write()
{
	Registry registry;
	if (!registry.open(SETTINGS_REGISTRY_ROOT, SETTINGS_REGISTRY_PATH))
		return;

#ifdef STREAMER_PAYD_VERSION
	registry.write(ForwardOutputSoundString, forward_output_sound);
	registry.write(PresetTypeString, this->encoder);
	registry.write(EncoderPreset, encoder_preset);
	registry.write(LastUpdateDateString, last_update_check);
#endif
	registry.write(RouterHostString, router_host);
	registry.write(RouterPortString, router_port);
	registry.write(OutputBufferLenght, output_buffer_lenght);

}