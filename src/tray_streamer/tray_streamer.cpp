#include "stdafx.h"
#include "tray_streamer.h"

#include <Mp3OutputStream.h>
#include <WavOutputStream.h>
#include <HttpServer.h>
#include <OutForwarder.h>
#include "Settings.h"
#include "MpdClient.h"
#include "DefaultStreamManager.h"

#define REFTIMES_PER_SEC  10000000
#define REFTIMES_PER_MILLISEC  10000

#define MAX_LOADSTRING 100

HINSTANCE hInst;								// current instance
TCHAR szTitle[MAX_LOADSTRING];					// The title bar text
TCHAR szWindowClass[MAX_LOADSTRING];			// the main window class name
DWORD recordThreadId;

int srate, numchan, bps;
volatile unsigned writtenbytes, w_offset;
static int last_pause = 0;
int start_t, PrebufferBytesCount;

HHOOK keyboardHook;
std::unique_ptr<IAudioOutputStream> outputStream;
std::unique_ptr<StreamManager> streamManager;
std::unique_ptr<HttpServer> streamer;
std::unique_ptr<MpdClient> mpdClient;
asio::io_service io_service;
std::unique_ptr<asio::io_service::work> io_service_work;
void wait_function(boost::system::error_code );



DWORD WINAPI RecordThread_WASAPI(LPVOID lpThreadParameter);
DWORD WINAPI RecordThread_DS(LPVOID lpThreadParameter);
ATOM				MyRegisterClass(HINSTANCE hInstance);
LRESULT CALLBACK	WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK	About(HWND, UINT, WPARAM, LPARAM);
void OutputStream_WriteCallback(int raw_data_count, char * buffer, int lenght);
LRESULT CALLBACK KeyboardProc(__in  int code, __in  WPARAM wParam, __in  LPARAM lParam);

int APIENTRY _tWinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPTSTR    lpCmdLine,
                     int       nCmdShow)
{
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);

	//io_service_work.reset(new asio::io_service::work(io_service));
	//outputStream.reset(new Mp3OutputStream(OutputStream_WriteCallback));
	outputStream.reset(new WavOutputStream(OutputStream_WriteCallback));
	mpdClient.reset(new MpdClient(Global::Settings.router_host.c_str(), Global::Settings.router_port, io_service));
	streamManager.reset(new DefaultStreamManager(*outputStream, *mpdClient));
	streamer.reset(new HttpServer(*streamManager, io_service));

	mpdClient->connect();
	auto x = mpdClient->get_status();

	::OutputDebugString(streamer->Start() ? _T("Server start ... ") : _T("Server not started"));
	Global::ListeningPort = streamer->GetListeningPort();

	streamManager->initialize();

	keyboardHook = ::SetWindowsHookEx(WH_KEYBOARD_LL, &KeyboardProc, hInstance, 0);
	
	// Initialise WASAPI
	CoInitializeEx(NULL, COINIT::COINIT_APARTMENTTHREADED);
	/*CComPtr<IMMDeviceEnumerator> pEnumerator;
	HRESULT hr = pEnumerator.CoCreateInstance(__uuidof(MMDeviceEnumerator));
	if (FAILED(hr))
		return 0;
    CComPtr<IMMDevice> pDevice;
	hr = pEnumerator->GetDefaultAudioEndpoint(eCapture, eConsole, &pDevice);
	if (FAILED(hr))
		return 2;
	CComPtr<IAudioClient> pAudioClient;
	hr = pDevice->Activate(__uuidof(IAudioClient), CLSCTX_ALL, NULL, (void **)&pAudioClient);
	*/
	
	::CloseHandle(::CreateThread(NULL, 0, &RecordThread_DS, nullptr, 0, &recordThreadId));

	MSG msg;
	HACCEL hAccelTable;

	LoadString(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
	LoadString(hInstance, IDC_TRAY_STREAMER, szWindowClass, MAX_LOADSTRING);
	MyRegisterClass(hInstance);

	hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_TRAY_STREAMER));

	asio::deadline_timer stop_timer(io_service);
	stop_timer.expires_from_now(boost::posix_time::seconds(8));
	stop_timer.async_wait(wait_function);
	io_service.run();
	return (int) msg.wParam;


	DWORD counter = 0;
	while (counter++ < 3000000)
	{
		if (!::PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
		{
			io_service.run();
			continue;
		}


		if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
	}

	PostThreadMessage(recordThreadId, WM_QUIT, 0, 0);
	Sleep(1000);
	return (int) msg.wParam;
}

void wait_function(boost::system::error_code)
{
	PostThreadMessage(recordThreadId, WM_QUIT, 0, 0);
}

ATOM MyRegisterClass(HINSTANCE hInstance)
{
	WNDCLASSEX wcex;

	wcex.cbSize = sizeof(WNDCLASSEX);

	wcex.style			= CS_HREDRAW | CS_VREDRAW;
	wcex.lpfnWndProc	= WndProc;
	wcex.cbClsExtra		= 0;
	wcex.cbWndExtra		= 0;
	wcex.hInstance		= hInstance;
	wcex.hIcon			= LoadIcon(hInstance, MAKEINTRESOURCE(IDI_TRAY_STREAMER));
	wcex.hCursor		= LoadCursor(NULL, IDC_ARROW);
	wcex.hbrBackground	= (HBRUSH)(COLOR_WINDOW+1);
	wcex.lpszMenuName	= MAKEINTRESOURCE(IDC_TRAY_STREAMER);
	wcex.lpszClassName	= szWindowClass;
	wcex.hIconSm		= LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

	return RegisterClassEx(&wcex);
}

//  WM_COMMAND	- process the application menu
//  WM_PAINT	- Paint the main window
//  WM_DESTROY	- post a quit message and return
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	int wmId, wmEvent;
	PAINTSTRUCT ps;
	HDC hdc;

	switch (message)
	{
	case WM_CREATE:
		SetTimer(hWnd, 0, 2000, nullptr);
		break;
	case WM_COMMAND:
		wmId    = LOWORD(wParam);
		wmEvent = HIWORD(wParam);
		// Parse the menu selections:
		switch (wmId)
		{
		case IDM_ABOUT:
			DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
			break;
		case IDM_EXIT:
			DestroyWindow(hWnd);
			break;
		default:
			return DefWindowProc(hWnd, message, wParam, lParam);
		}
		break;
	case WM_PAINT:
		hdc = BeginPaint(hWnd, &ps);
		// TODO: Add any drawing code here...
		EndPaint(hWnd, &ps);
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	case WM_TIMER:
		PostThreadMessage(recordThreadId, WM_QUIT, 0, 0);
		break;
	default:
		return DefWindowProc(hWnd, message, wParam, lParam);
	}
	return 0;
}

// Message handler for about box.
INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
	UNREFERENCED_PARAMETER(lParam);
	switch (message)
	{
	case WM_INITDIALOG:
		return (INT_PTR)TRUE;

	case WM_COMMAND:
		if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
		{
			EndDialog(hDlg, LOWORD(wParam));
			return (INT_PTR)TRUE;
		}
		break;
	}
	return (INT_PTR)FALSE;
}

LRESULT CALLBACK KeyboardProc(int code, WPARAM wParam, LPARAM lParam)
{
	if (code < 0)
		return CallNextHookEx(keyboardHook, code, wParam, lParam);
	
	KBDLLHOOKSTRUCT *hookStruct = reinterpret_cast<KBDLLHOOKSTRUCT *>(lParam);
	if (code == HC_ACTION)
	{
		if (hookStruct->vkCode == 0x5A)
		{
			::DebugBreak();
		}
	}

	return CallNextHookEx(keyboardHook, code, wParam, lParam);
}

void OutputStream_WriteCallback(int raw_data_count, char * buffer, int lenght)
{
	streamManager->write((PBYTE)buffer, lenght);
}

DWORD WINAPI RecordThread_WASAPI(LPVOID lpThreadParameter)
{
	CComPtr<IAudioClient> pAudioClient = reinterpret_cast<IAudioClient *>(lpThreadParameter);
	CComPtr<IAudioCaptureClient> pCaptureClient;
	UINT32 bufferFrameCount;
	WAVEFORMATEX *wex = {0};

	HRESULT hr = pAudioClient->GetMixFormat(&wex);
	//wex->wBitsPerSample = 16;
	//wex->nSamplesPerSec = 44100;
	//wex->nBlockAlign = wex->nChannels * wex->wBitsPerSample / 8;
    //wex->nAvgBytesPerSec = wex->nSamplesPerSec * wex->nBlockAlign;//*/
	//wex->wFormatTag = 0;

	hr = pAudioClient->Initialize(AUDCLNT_SHAREMODE_SHARED, 0, REFTIMES_PER_SEC, 0, wex, NULL);
	hr = pAudioClient->GetBufferSize(&bufferFrameCount);
	hr = pAudioClient->GetService(__uuidof(IAudioCaptureClient), (void **)&pCaptureClient);
	auto hnsActualDuration = (double)REFTIMES_PER_SEC * bufferFrameCount / wex->nSamplesPerSec;

	MSG msg;
    UINT32 packetLength = 0;
	BYTE *pData;
    UINT32 numFramesAvailable;
    DWORD flags;

    hr = pAudioClient->Start();  // Start recording.
	outputStream->Initialize(wex->nSamplesPerSec, wex->nChannels, wex->wBitsPerSample);
	streamManager->open();

	// Each loop fills about half of the shared buffer.
    while (true)
    {
		if (::PeekMessage(&msg, NULL, 0, 0, PM_REMOVE) && msg.message == WM_QUIT)
			break;
	
        // Sleep for half the buffer duration.
        Sleep(hnsActualDuration / REFTIMES_PER_MILLISEC / 4);

        hr = pCaptureClient->GetNextPacketSize(&packetLength);
        //EXIT_ON_ERROR(hr)

        while (packetLength != 0)
        {
            // Get the available data in the shared buffer.
            hr = pCaptureClient->GetBuffer(&pData, &numFramesAvailable, &flags, NULL, NULL);

            if (flags & AUDCLNT_BUFFERFLAGS_SILENT)
            {
                pData = NULL;  // Tell CopyData to write silence.
            }

            // Copy the available capture data to the audio sink.
			outputStream->Write(pData, numFramesAvailable);
            //EXIT_ON_ERROR(hr)

            hr = pCaptureClient->ReleaseBuffer(numFramesAvailable);
            //EXIT_ON_ERROR(hr)

            hr = pCaptureClient->GetNextPacketSize(&packetLength);
            //EXIT_ON_ERROR(hr)
        }
    }

    hr = pAudioClient->Stop();  // Stop recording.
	outputStream->Close();
	streamManager->close();

exit:
	::CoTaskMemFree(wex);
	return 1;
}

DWORD WINAPI RecordThread_DS(LPVOID lpThreadParameter)
{
	/*CComPtr<IDirectSoundCapture8> dsc = nullptr;
	HRESULT result = ::DirectSoundCaptureCreate8(&DSDEVID_DefaultCapture, &dsc, NULL);
	
	result = dsc->Initialize(NULL);
	*///dsc->CreateCaptureBuffer(

	return 0;
}