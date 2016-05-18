#pragma once
#include "IAudioOutputStream.h"


class WasapiOuput : public IAudioOutputStream
{
	IAudioClient *pAudioInterface;

public:
	WasapiOuput(void);
	~WasapiOuput(void);

	// IAudioOutputStream interface
	bool Initialize(int samplerate, int numchannels, int bitspersamp);
	PBYTE GetHeader(int &count);
	int Write(PBYTE bytes, int lenght);
	int Flush(PBYTE& p_written);
	void Close();
};

