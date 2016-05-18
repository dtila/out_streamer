#pragma once
#include "..\winamp\sdk\OUT.H"

class Prebuffer;

class OutForwarder
{
	typedef Out_Module * (*getOutputCallbackType) ();

	HMODULE _plugin_handle;
	Out_Module *_out;
	int volume;
	bool enabled;

public:
	OutForwarder(LPTSTR plugin_name);
	~OutForwarder();

	void EnableOutput(bool enable);
	LPCSTR GetDisplayName();

	// Define plugin functions
	void Config(HWND hwnd);
	void About(HWND hwnd);
	void Init();
	void Quit();

	int Open(int samplerate, int numchannels, int bitspersamp, int bufferlenms, int prebufferms);
	void Close();

	int Write(char *buf, int len);
	int CanWrite();
	int IsPlaying();
	int Pause(int pause);

	void SetVolume(int volume);
	void SetPan(int pan);

	void Flush(int t);
	int GetOutputTime();
	int GetWrittenTime();
};

