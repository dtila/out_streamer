#include "stdafx.h"
#include "out_streamer.h"
#include "resource.h"

#include <Mp3OutputStream.h>
#include <WavOutputStream.h>
#include <HttpServer.h>
#include <OutForwarder.h>
#include "Settings.h"
#include "MpdClient.h"
#include "SyncronisedStreamManager.h"
#include "DummyStreamManager.h"
#include "WinampPlayer.h"


const int PrebufferTimeMinValue = 300;
const int PrebufferTimeMaxValue = 10000;
const int IOCPThreadCount = 1;

int conversion_factor;
int bits_per_sample, num_channels;
float pan_factor;
unsigned PrebufferBytesCount;

std::unique_ptr<WinampPlayer> _winamp_player;
std::unique_ptr<StreamManager> streamManager;
std::unique_ptr<HttpServer> streamer;
std::unique_ptr<OutForwarder> forwarder;
std::unique_ptr<MpdClient> mpdClient;

asio::io_service io_service;
asio::io_service::work io_service_work(io_service);
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
		WCHAR buff[0x400] = {};
		HWND mpdComboHwnd = ::GetDlgItem(hWnd, IDC_MPDOutFormat);

		for(int i=0 ;i<_countof(Mp3OutputStreamConstants::Presets) ; i++)
		{
			::swprintf_s(buff, _T("MP3 %d kbps"), Mp3OutputStreamConstants::Presets[i]);

			LONG_PTR index = ComboBox_AddString(mpdComboHwnd, buff);
			ComboBox_SetItemData(mpdComboHwnd, i, &i);
		}

		::SendMessage(::GetDlgItem(hWnd, IDC_OutputBuffer), TBM_SETRANGEMIN, FALSE,  PrebufferTimeMinValue);
		::SendMessage(::GetDlgItem(hWnd, IDC_OutputBuffer), TBM_SETRANGEMAX, FALSE,  PrebufferTimeMaxValue);


		// Load settings
		const Settings &settings = Global::Settings;

#ifdef STREAMER_PAYD_VERSION
		Button_SetCheck(::GetDlgItem(hWnd, IDC_ForwarderEnable), settings.forward_output_sound);
		ComboBox_SetCurSel(mpdComboHwnd, settings.encoder_preset);
#else
		ComboBox_SetCurSel(mpdComboHwnd, 0);
#endif
		::SetWindowText(::GetDlgItem(hWnd, IDC_MPDHost), settings.router_host.c_str());
		
		::swprintf_s(buff, _T("%d"), settings.router_port);
		Edit_SetText(::GetDlgItem(hWnd, IDC_MPDPort), buff);

		::SendMessage(::GetDlgItem(hWnd, IDC_OutputBuffer), TBM_SETPOS, TRUE,  settings.output_buffer_lenght);
		
		::swprintf_s(buff, _T("%d ms"), settings.output_buffer_lenght);
		::SetWindowText(::GetDlgItem(hWnd, IDC_OutputBufferValue), buff); 
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
			Settings &settings = Global::Settings;

#ifdef STREAMER_PAYD_VERSION
			Global::Settings.encoder_preset = ComboBox_GetCurSel(mpdComboHwnd);
			Global::Settings.forward_output_sound = Button_GetCheck(::GetDlgItem(hWnd, IDC_ForwarderEnable)) == TRUE;
#endif
			
			TCHAR buff[0x100] = {};
			::GetWindowText(::GetDlgItem(hWnd, IDC_MPDHost), buff, _countof(buff));
			Global::Settings.router_host = buff;
		
			::GetWindowText(::GetDlgItem(hWnd, IDC_MPDPort), buff, _countof(buff));
			::swscanf_s(buff, _T("%d"), &Global::Settings.router_port);

			settings.output_buffer_lenght = static_cast<int>(::SendMessage(::GetDlgItem(hWnd, IDC_OutputBuffer), TBM_GETPOS, 0, 0));

			Global::Settings.write();
		}

		case IDCANCEL:
			return EndDialog(hWnd, TRUE);
		}
		break;
	case WM_HSCROLL:
		if (LOWORD(wParam) == SB_THUMBTRACK)
		{
			TCHAR buff[10] = {};
			Global::Settings.output_buffer_lenght = HIWORD(wParam);
			::swprintf_s(buff, _T("%d ms"), Global::Settings.output_buffer_lenght);
			::SetWindowText(::GetDlgItem(hWnd, IDC_OutputBufferValue), buff); 
		}
		break;
	case WM_QUIT:
		return EndDialog(hWnd, TRUE);

	}

	return FALSE;
}

void Plugin_Config(HWND hwnd)
{
#ifdef STREAMER_PAYD_VERSION
	::DialogBoxParam(hInstance, MAKEINTRESOURCE(IDD_CONFIG_DIALOG), hwnd, ConfigurationDialogProc, NULL);
#else
	::DialogBoxParam(hInstance, MAKEINTRESOURCE(IDD_FREE_CONFIG_DIALOG), hwnd, ConfigurationDialogProc, NULL);
#endif
}

void Plugin_About(HWND hwnd)
{
	::MessageBoxA(hwnd, Plugin::about().c_str(), "About", MB_ICONINFORMATION);
}

void Plugin_Init()
{
	static_assert(IOCPThreadCount > 0, "Specify a positive number of threads");

	for(int i=0 ; i<IOCPThreadCount ; i++)
		::CloseHandle(::CreateThread(nullptr, 0, &IOServiceRunThread, nullptr, 0, nullptr));

	io_sync_mutex = ::CreateEvent(nullptr, FALSE, FALSE, NULL);
	forwarder.reset(new OutForwarder(_T("out_ds.dll")));
	mpdClient.reset(new MpdClient(Global::Settings.router_host.c_str(), Global::Settings.router_port, io_service));
	
#ifdef STREAMER_PAYD_VERSION
	//Global::Settings.output_buffer_lenght = 10000;
	SyncronisedStreamManager::Options playbackOptions = { Global::Settings.output_buffer_lenght, *forwarder.get(), Global::Settings.forward_output_sound };

	//streamManager.reset(new DummyStreamManager(std::unique_ptr<IAudioOutputStream>(new Mp3OutputStream()), *mpdClient, playbackOptions.prebuffer_time));
	streamManager.reset(new SyncronisedStreamManager(std::unique_ptr<IAudioOutputStream>(new Mp3OutputStream()), *mpdClient, *_winamp_player, io_service, playbackOptions));
	//streamManager.reset(new SyncronisedStreamManager(std::unique_ptr<IAudioOutputStream>(new WavOutputStream()), *mpdClient, *_winamp_player, io_service, playbackOptions));
#else
	Global::Settings.output_buffer_lenght = 2000;

	streamManager.reset(new DummyStreamManager(std::unique_ptr<IAudioOutputStream>(new Mp3OutputStream()), *mpdClient, Global::Settings.output_buffer_lenght));
#endif

	streamer.reset(new HttpServer(*streamManager, io_service));

	forwarder->Init();

	if (! streamer->Start() )
		Global::DebugWrite(_T("Server not started !!!"));
	Global::ListeningPort = streamer->GetListeningPort();

	streamManager->initialize();

#ifndef STREAMER_PAYD_VERSION
	forwarder->EnableOutput(false);
#endif

	Plugin::check_for_update_async(io_service);
}

void Plugin_Quit()
{
	forwarder->Quit();
	streamManager->quit();

	streamer.release();
	forwarder.release();
	mpdClient.release();
	streamManager.release();

	io_service.stop();
	//::WaitForSingleObject(io_sync_mutex, INFINITE);
}

#include <LoadingDialog.h>

int Plugin_Open(int samplerate, int numchannels, int bitspersamp, int bufferlenms, int prebufferms)
{
	conversion_factor = (samplerate * bitspersamp * numchannels) / 8;
	num_channels = numchannels;
	bits_per_sample = bitspersamp;

	int output_delay_time = Global::Settings.output_buffer_lenght; 
	PrebufferBytesCount = ConvertMilisecondsToBytesCount(output_delay_time);
	
	forwarder->Open(samplerate, numchannels, bitspersamp, bufferlenms, prebufferms);
	return streamManager->open(samplerate, numchannels, bitspersamp);
}

void Plugin_Close()
{
	OutputDebugString(_T("PLugin_Close start"));
	forwarder->Close();
	streamManager->close();
	OutputDebugString(_T("PLugin_Close end"));
}

int Plugin_Write(char *buf, int len)
{
	auto result = forwarder->Write(buf, len);
	
	if (pan_factor != 0)
	{
		int lenght = len / num_channels;
		
		if (bits_per_sample == 16)
		{
			auto stereo = reinterpret_cast<short *>(buf);
		
			int i = pan_factor < 0 ? 1 : 0;
			float abs_pan = 1.0f - abs(pan_factor);

			for(; i<lenght; i+=num_channels)
				stereo[i] = static_cast<short>(stereo[i] * abs_pan);
		}
	}

	return streamManager->write((PBYTE)buf, len) ? 0 : 1;
}

int Plugin_CanWrite()
{
	auto cw = forwarder->CanWrite();
	//if (last_pause)
	//	return 0;
	
	if (!streamManager->can_write())
		return 0;

	/*auto old_time = static_cast<unsigned>(::GetTickCount() - ::InterlockedCompareExchange(&start_t, start_t, start_t) + w_offset);
	auto old_expected_bytes = ConvertMilisecondsToBytesCount(old_time - w_offset) + PrebufferBytesCount;
	auto old_to_write = old_expected_bytes - writtenbytes;*/

	auto time = static_cast<unsigned>(Plugin_GetRealOutputTime());
	auto expected_bytes = ConvertMilisecondsToBytesCount(time) + PrebufferBytesCount;

	//auto expected_bytes = ConvertMilisecondsToBytesCount(time - w_offset) + PrebufferBytesCount;
	auto wb = ConvertMilisecondsToBytesCount(streamManager->get_written_time());
	int to_write = expected_bytes - wb;

	if (to_write > 0)
	{
		Global::DebugWrite(_T("can_write: %d\n"), to_write);
		return to_write;
	}

	return 0;
}

int Plugin_IsPlaying()
{
#ifdef STREAMER_PAYD_VERSION
	streamManager->flush();

	auto ip = forwarder->IsPlaying();
	auto x = streamManager->remaining_ms();

	return x > 0 ? 1 : 0;
#else
	auto ip = forwarder->IsPlaying();
	int time = _winamp_player->getTrackLenght();
	if (time < 0)
		return 0;

	auto out_time = Plugin_GetRealOutputTime();
	return out_time + 700 >= time ? 0 : 1;
#endif
}

int Plugin_Pause(int pause)
{
	auto s = forwarder->Pause(pause);

	return streamManager->pause(pause == 1);
}

void Plugin_SetVolume(int volume)
{
	//forwarder->SetVolume(volume);

	if (volume != -666)
		streamManager->set_volume(volume);
}

void Plugin_SetPan(int pan)
{
	pan_factor = pan / 127.0f;
	forwarder->SetPan(pan);
}

void Plugin_Flush(int t)
{
	Global::DebugWrite(_T("seek\n"));
	forwarder->Flush(t);
	streamManager->seek(t);
}

int Plugin_GetRealOutputTime()
{
	return streamManager->get_output_time();
	//if (last_pause)
	//	return w_offset;

	//return ::GetTickCount() - ::InterlockedCompareExchange(&start_t, start_t, start_t) + w_offset;
}
	
int Plugin_GetRealWrittenTime()
{
	return streamManager->get_written_time();

	/*auto mp3 = streamManager->get_written_time() + w_offset;
	auto out = ConvertBytesToMiliseconds(writtenbytes) + w_offset;

	return mp3;*/
}

int Plugin_GetOutputTime()
{
	auto ot = forwarder->GetOutputTime();
	
	auto time = Plugin_GetRealOutputTime();
	Global::DebugWrite(_T("get_output_time: %u ms\n"), time);
	return time;
}

int Plugin_GetWrittenTime()
{
/*#ifdef DEBUG
	auto out_outtime = forwarder->GetOutputTime();
	auto out_written_time = forwarder->GetWrittenTime();
	
	auto mine_output_time = Plugin_GetRealOutputTime();
	auto mine_writtentime = Plugin_GetRealWrittenTime();
	return mine_writtentime;
#endif*/

	int writtentime = Plugin_GetRealWrittenTime();
	Global::DebugWrite(_T("get_written_time: %u ms\n"), writtentime);
	return writtentime;
}

Out_Module out = {
	OUT_VER,
	const_cast<char *>(Plugin::full_name().c_str()),
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
		_winamp_player.reset(new WinampPlayer(out.hMainWindow));
		return &out;
	}
}

// Utils
inline unsigned ConvertBytesToMiliseconds(unsigned bytesCount)
{
	return ::MulDiv(bytesCount, 1000, conversion_factor);
}

inline unsigned ConvertMilisecondsToBytesCount(unsigned miliseconds)
{
	return ::MulDiv(miliseconds, conversion_factor, 1000);
}
