#include "stdafx.h"
#include "out_streamer.h"
#include "resource.h"
#include "config.h"

#include <Mp3OutputStream.h>
#include <WavOutputStream.h>
#include <HttpServer.h>
#include <OutForwarder.h>
#include "Settings.h"
#include "MpdClient.h"
#include "DefaultStreamManager.h"


#define PrebufferTime 2000
#define IOCPThreadCount 1


int srate, numchan, bps;
volatile unsigned writtenbytes, w_offset;
static int last_pause = 0;
unsigned start_t, PrebufferBytesCount;

std::unique_ptr<IAudioOutputStream> outputStream;
std::unique_ptr<StreamManager> streamManager;
std::unique_ptr<HttpServer> streamer;
std::unique_ptr<OutForwarder> forwarder;
std::unique_ptr<MpdClient> mpdClient;
asio::io_service io_service;
std::unique_ptr<asio::io_service::work> io_service_work;
HANDLE io_sync_mutex;

DWORD CALLBACK IOServiceRunThread(void *state)
{
	io_service.run();
	::SetEvent(io_sync_mutex);
	return 0;
}


INT_PTR CALLBACK ConfigurationDialogProc(__in HWND hWnd, __in  UINT uMsg, __in  WPARAM wParam, __in  LPARAM lParam)
{
	switch(uMsg)
	{
	case WM_INITDIALOG:
	{
		HWND mpdComboHwnd = ::GetDlgItem(hWnd, IDC_MPDOutFormat);

#ifdef STREAMER_PAYD_VERSION
		TCHAR *value[] = { _T("WAVE Out"), _T("MP3 92 kbps"), _T("MP3 128 kbps"), _T("MP3 192 kbps"), _T("MP3 256 kbps"), _T("MP3 320 kbps") };
#else
		TCHAR *value[] = { _T("WAVE Out"), _T("MP3 64 kbps") };
#endif
		for(int i = 0 ; i<_countof(value) ; i++)
		{
			LONG_PTR index = ComboBox_AddString(mpdComboHwnd, value[i]);
			ComboBox_SetItemData(mpdComboHwnd, i, &i);
		}
		
		// Load settings
		Settings &settings = Global::Settings;
		wchar_t buff[0x400] = {};
		Button_SetCheck(::GetDlgItem(hWnd, IDC_ForwarderEnable), settings.forward_output_sound);
		SetWindowTextA(::GetDlgItem(hWnd, IDC_MPDHost), settings.router_host.c_str());
		
		swprintf_s(buff, _T("%d"), settings.router_port);
		Edit_SetText(::GetDlgItem(hWnd, IDC_MPDPort), buff);

		//ComboBox_SetCurSel(mpdComboHwnd, settings.PresetType);

	}break;

	case WM_COMMAND:
		switch(LOWORD(wParam))
		{
		case IDC_ForwarderAboutBtn:
			forwarder->About(hWnd);
			break;

		case IDC_ForwarderConfigBtn:
			forwarder->Config(hWnd);
			break;

		case IDOK:
		{
			HWND mpdComboHwnd = ::GetDlgItem(hWnd, IDC_MPDOutFormat);
			//Global::Settings. = ComboBox_GetCurSel(mpdComboHwnd);
			Global::Settings.write();
		}

		case IDCANCEL:
			return EndDialog(hWnd, TRUE);
		}
		break;

	case WM_QUIT:
		return EndDialog(hWnd, TRUE);
	}

	return FALSE;
}


void Plugin_Config(HWND hwnd)
{
	if(hInstance != nullptr)
	{
		::DialogBoxParam(hInstance, MAKEINTRESOURCE(IDD_CONFIG_DIALOG), hwnd, ConfigurationDialogProc, NULL);
	}
}

// Plugin configuration
void Plugin_About(HWND hwnd)
{
	MessageBox(hwnd, _T("About"), _T("My title"), MB_ICONWARNING);
	forwarder->About(hwnd);
}

void Plugin_Init()
{
	static_assert(IOCPThreadCount > 0, "Specify a positive number of threads");

	for(int i=0 ; i<IOCPThreadCount ; i++)
		::CloseHandle(::CreateThread(nullptr, 0, &IOServiceRunThread, nullptr, 0, nullptr));

	io_sync_mutex = ::CreateEvent(nullptr, TRUE, FALSE, NULL);
	io_service_work.reset(new asio::io_service::work(io_service));
	outputStream.reset(new Mp3OutputStream(OutputStream_WriteCallback));
	//outputStream.reset(new WavOutputStream(OutputStream_WriteCallback));
	mpdClient.reset(new MpdClient(Global::Settings.router_host.c_str(), Global::Settings.router_port, io_service));
	streamManager.reset(new DefaultStreamManager(*outputStream, *mpdClient));
	streamer.reset(new HttpServer(*streamManager, io_service));
	forwarder.reset(new OutForwarder(_T("out_ds.dll")));

	forwarder->Init();

	::OutputDebugString(streamer->Start() ? _T("Server start ... ") : _T("Server not started"));
	Global::ListeningPort = streamer->GetListeningPort();

	streamManager->initialize();
}

void Plugin_Quit()
{
	forwarder->Quit();
	outputStream->Close();
	streamManager->quit();

	outputStream.release();
	streamer.release();
	forwarder.release();
	mpdClient.release();

	io_service.stop();
	::WaitForSingleObject(io_sync_mutex, INFINITE);
}

int Plugin_Open(int samplerate, int numchannels, int bitspersamp, int bufferlenms, int prebufferms)
{
	start_t = GetTickCount();
	w_offset = 0;
	writtenbytes = 0;
	numchan = numchannels;
	srate = samplerate;
	bps = bitspersamp;

	PrebufferBytesCount = ConvertMilisecondsToBytesCount(PrebufferTime);
	
	//forwarder->SetOutputDelay(BytesPerSecondCount);// 1 second
	forwarder->Open(samplerate, numchannels, bitspersamp, bufferlenms, prebufferms);
	outputStream->Initialize(samplerate, numchannels, bitspersamp);

	streamManager->open();	//mpdClient->play();

	return 0;
}

void Plugin_Close()
{
	::OutputDebugString(_T("Close"));

	last_pause = 0;
	forwarder->Close();
	outputStream->Close();	
	streamManager->close();//mpdClient->stop();
}

void OutputStream_WriteCallback(int raw_data_count, char * buffer, int lenght)
{
	streamManager->write((PBYTE)buffer, lenght);
}

int Plugin_Write(char *buf, int len)
{
	auto w = forwarder->Write(buf, len);
	outputStream->Write((PBYTE)buf, len);
	::InterlockedExchangeAdd(&writtenbytes, len);

	Global::DebugWrite("Plugin_Write: writtenbytes: %ld, writtentime: %d\n", writtenbytes, ConvertBytesToMiliseconds(writtenbytes));
	
	return 0; //  success
}

int Plugin_CanWrite()
{
	auto cw = forwarder->CanWrite();

	if (last_pause)
	{
		//Global::DebugWrite("Plugin_CanWrite: last_pause\n");
		return 0;
	}
	// This method uses time as reference
	/*auto writtenTime = Plugin_GetRealWrittenTime();
	auto outTime = Plugin_GetRealOutputTime();
	
	if (writtenTime < outTime + PrebufferTime)
		return 65536;
	return 0;//*/
		
	// This method uses writtenbytes as representative
	int time = Plugin_GetRealOutputTime();
	auto expected_bytes = ConvertMilisecondsToBytesCount(time) + PrebufferBytesCount;
	auto to_write = expected_bytes - writtenbytes - ConvertMilisecondsToBytesCount(w_offset);

	if (to_write > 0)
	{
		Global::DebugWrite("Plugin_CanWrite: Plugin_GetRealOutputTime: %d ms, RESULT: %d\n", time, to_write);
		return to_write;
	}
	return 0;

	if (writtenbytes < expected_bytes)
	{
		Global::DebugWrite("Plugin_CanWrite: Plugin_GetRealOutputTime: %d, RESULT: %d\n", time, expected_bytes - writtenbytes);
		return expected_bytes - writtenbytes;
	}

	Global::DebugWrite("Plugin_CanWrite: 0\n");
	return 0;
}

int Plugin_IsPlaying()
{
	::OutputDebugString(_T("IsPlaying\n"));

	auto ip = forwarder->IsPlaying();
	return 0;
}

int Plugin_Pause(int pause)
{
	streamManager->pause(pause == 1);
	forwarder->Pause(pause);

	int t = last_pause;
	if (!last_pause && pause)
	{
		streamManager->reset_written_bytes();
		w_offset += ::GetTickCount() - start_t; 
		//w_offset += PrebufferTime;
		InterlockedExchange(&writtenbytes, 0);
	}

	if (last_pause && !pause)
	{
		start_t = ::GetTickCount();
		//w_offset -= PrebufferTime; 
		//writtenbytes += PrebufferBytesCount;
	}

	last_pause = pause;
	return t;
}

void Plugin_SetVolume(int volume)
{
	::OutputDebugString(_T("Plugin_SetVolume\n"));

	forwarder->SetVolume(volume);
	streamManager->set_volume(volume);	//mpdClient->set_volume(volume);
}

void Plugin_SetPan(int pan)
{
	::OutputDebugString(_T("Plugin_SetPan\n"));

	forwarder->SetPan(pan);
}

void Plugin_Flush(int t)
{
	 ::OutputDebugString(_T("Plugin_Flush\n"));

	 forwarder->Flush(t);
	 outputStream->Flush();
		 
	 w_offset = t;
	 start_t = ::GetTickCount();
	 ::InterlockedExchange(&writtenbytes, 0);

	 streamManager->flush(); //mpdClient->re_play();
}

int Plugin_GetRealOutputTime()
{
	if (last_pause)
		return w_offset;
	
	return ::GetTickCount() - start_t + w_offset;
}
	
int Plugin_GetOutputTime()
{
	auto ot = forwarder->GetOutputTime();
	//return Plugin_GetWrittenTime() - PrebufferTime;
	
	auto time = Plugin_GetRealOutputTime();
	Global::DebugWrite("Plugin_GetOutputTime: %ld ms, %ld bytes\n", time, writtenbytes);
	return time;
}

int Plugin_GetRealWrittenTime()
{
	return ConvertBytesToMiliseconds(writtenbytes) + w_offset;
}

int Plugin_GetWrittenTime()
{
	auto wt = forwarder->GetWrittenTime();
	return Plugin_GetOutputTime();
	if (last_pause)
		return w_offset;
	
	// Because we don't have control of written bytes, the written time should be equal to OutputTime plus a constant
	// which is the time for decoding first frames
	// That constant (representing a time), should be added as a delay for output on computer
	int writtentime = Plugin_GetRealWrittenTime();
	Global::DebugWrite("Plugin_GetWrittenTime: %ld ms\n", writtentime);
	return writtentime;
}

Out_Module out = {
	OUT_VER,
	"MPD Broadcaster Output Plug-In v0.9",
	
	128932,
	0, // hmainwindow
	0, // hdllinstance
	Plugin_Config,
	Plugin_About,
	Plugin_Init,
	Plugin_Quit,
	Plugin_Open,
	Plugin_Close,
	Plugin_Write,
	Plugin_CanWrite,
	Plugin_IsPlaying,
	Plugin_Pause,
	Plugin_SetVolume,
	Plugin_SetPan,
	Plugin_Flush,
	Plugin_GetOutputTime,
	Plugin_GetWrittenTime
};

extern "C"
{
	__declspec( dllexport ) Out_Module * winampGetOutModule()
	{
		return &out;
	}
}

// Utils
inline unsigned ConvertBytesToMiliseconds(unsigned bytesCount)
{
	return MulDiv(bytesCount, 1000, srate * bps * numchan / 8);
}

inline unsigned ConvertMilisecondsToBytesCount(unsigned miliseconds)
{
	return MulDiv(miliseconds, srate * bps * numchan / 8, 1000);
}
