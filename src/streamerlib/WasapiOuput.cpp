#include "StdAfx.h"
#include "WasapiOuput.h"

#pragma comment(lib, "ole32.lib")

//http://msdn.microsoft.com/en-us/library/windows/desktop/dd316756(v=vs.85).aspx

#define EXIT_ON_ERROR(hres)  \
              if (FAILED(hres)) { goto Exit; }

#define SAFE_RELEASE(punk)  \
              if ((punk) != NULL)  \
                { (punk)->Release(); (punk) = NULL; }

WasapiOuput::WasapiOuput() : pAudioInterface()
{
	/*HRESULT hresult;

	IMMDeviceEnumerator *pDeviceEnumerator = nullptr;
	hresult = ::CoCreateInstance(CLSID_MMDeviceEnumerator, NULL, CLSCTX_ALL,IID_IMMDeviceEnumerator,(void**)&pDeviceEnumerator);
	if (FAILED(hresult))
		goto Exit;

	IMMDevice *pDevice = nullptr;
	hresult = pDeviceEnumerator->GetDefaultAudioEndpoint(eRender, eMultimedia, &pDevice);

	if (FAILED(hresult))
		goto Exit;

	hresult = pDevice->Activate(IID_IAudioClient, CLSCTX_ALL, NULL, (void**)&pAudioInterface);

Exit:
	0;
	*/
}


WasapiOuput::~WasapiOuput(void)
{
}


bool WasapiOuput::Initialize(int samplerate, int numchannels, int bitspersamp)
{
	return true;
}

PBYTE WasapiOuput::GetHeader(int &count)
{
	count = 0;
	return nullptr;
}

int WasapiOuput::Write(PBYTE bytes, int lenght)
{
	return 0;
}

int WasapiOuput::Flush(PBYTE& p_written)
{
	return 0;
}

void WasapiOuput::Close()
{
}