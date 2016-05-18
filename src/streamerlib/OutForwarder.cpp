#include "StdAfx.h"
#include "OutForwarder.h"

OutForwarder::OutForwarder(LPTSTR plugin_name) : _plugin_handle(), _out(), enabled(true)
{
	this->_plugin_handle = ::LoadLibrary(plugin_name);

	if (_plugin_handle != nullptr)
	{
		auto out_function = (getOutputCallbackType)::GetProcAddress(_plugin_handle, "winampGetOutModule");
		if(out_function == nullptr)
			return;

		this->_out = out_function();
	}
}

OutForwarder::~OutForwarder(void)
{
	if (_plugin_handle != nullptr)
	{
		::FreeLibrary(_plugin_handle);
		_plugin_handle = nullptr;
		_out = nullptr;
	}
}

void OutForwarder::EnableOutput(bool enable)
{
	this->enabled = enable;
	SetVolume(this->volume);
}

LPCSTR OutForwarder::GetDisplayName()
{
	if (_out == nullptr)
		return nullptr;
	return _out->description;
}

// Plugin functions
void OutForwarder::Config(HWND hwnd)
{
	if (_out == nullptr)
		return;
	_out->Config(hwnd);
}

void OutForwarder::About(HWND hwnd)
{
	if(_out == nullptr)
		return;
	_out->About(hwnd);
}

void OutForwarder::Init()
{
	if (_out == nullptr)
		return;
	_out->Init();
}

void OutForwarder::Quit()
{
	if (_out == nullptr)
		return;
	_out->Quit();
}

int OutForwarder::Open(int samplerate, int numchannels, int bitspersamp, int bufferlenms, int prebufferms)
{
	if (_out == nullptr)
		return 0;
	return _out->Open(samplerate, numchannels, bitspersamp, bufferlenms, prebufferms);
}

void OutForwarder::Close()
{
	if (_out == nullptr)
		return;
	_out->Close();
}

int OutForwarder::Write(char *buf, int len)
{
	if (_out == nullptr)
		return 0;
	
	return _out->Write(buf, len);
}

int OutForwarder::CanWrite()
{
	if (_out == nullptr)
		return 0;
	return _out->CanWrite();
}

int OutForwarder::IsPlaying()
{
	if (_out == nullptr)
		return 0;
	return _out->IsPlaying();
}

int OutForwarder::Pause(int pause)
{
	if (_out == nullptr)
		return 0;
	return _out->Pause(pause);
}


void OutForwarder::SetVolume(int volume)
{
	if (_out == nullptr || volume < 0)
		return;
	
	this->volume = volume;
	_out->SetVolume(enabled ? volume : 0);
}

void OutForwarder::SetPan(int pan)
{
	if (_out == nullptr)
		return;
	_out->SetPan(pan);
}

void OutForwarder::Flush(int t)
{
	if (_out == nullptr)
		return;
	_out->Flush(t);
}

int OutForwarder::GetOutputTime()
{
	if (_out == nullptr)
		return 0;
	return _out->GetOutputTime();
}

int OutForwarder::GetWrittenTime()
{
	if (_out == nullptr)
		return 0;
	return _out->GetWrittenTime();
}