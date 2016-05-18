#pragma once
#include "stdafx.h"
#include "IAudioOutputStream.h"
#include "IHttpStreamResponse.h"
#include <lame.h>

//#define Mp3OutputStream_Buffering

namespace Mp3OutputStreamConstants
{
# ifdef STREAMER_PAYD_VERSION
const int Presets[] = {32, 64, 128, 192, 256, 320};
#else
const int Presets[] = {64};
# endif
}

class Mp3OutputStream : public IAudioOutputStream, public IHttpResponseStream
{
	unsigned bytes_per_second;
	int bytes_per_sample;

	lame_global_flags * global_fags;

#ifdef Mp3OutputStream_Buffering
	PBYTE m_inBuffer;
	int m_inBufferPos, m_inBufferLenght;
#endif
	PBYTE m_outBuffer;
	int m_outBufferLenght;

	int InternalEncode(PBYTE buffer, int index, int count);
public:
	Mp3OutputStream();
	~Mp3OutputStream();
	
	// IOutputStream interface
	std::size_t ConvertBytesCountToMiliseconds(std::size_t bytes_count) const;
	std::size_t ConvertMilisecondsToBytesCount(std::size_t ms_time) const;
	PBYTE GetHeader(int &count);
	
	bool Initialize(int samplerate, int numchannels, int bitspersamp);
	int Write(PBYTE bytes, int lenght, PBYTE & p_written);
	int Flush(PBYTE& p_written);
	void Close();

	 // IHttpResponseStream
	std::vector<std::pair<std::string, std::string>> GetResponseHeaders() const;
};

