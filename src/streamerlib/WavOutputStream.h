#pragma once
#include "IAudioOutputStream.h"

class WavOutputStream :	public IAudioOutputStream
{
	PBYTE _header;
	PBYTE _writeBuffer;
	DWORD _writeBufferSize;

	FILE *file;
	DWORD wavSize;
	int bytes_per_second;
public:
	WavOutputStream();
	~WavOutputStream();

// IOutputStream interface
	unsigned GetWrittenOutputTime(unsigned written_bytes) const;
	std::string GetStreamingContentType() const;
	PBYTE GetHeader(int &);

	bool Initialize(int samplerate, int numchannels, int bitspersamp);
	int Write(PBYTE bytes, int lenght, PBYTE & p_written);
	int Flush(PBYTE& p_written);
	void Close();

	std::size_t ConvertBytesCountToMiliseconds(std::size_t bytes_count) const;
	std::size_t ConvertMilisecondsToBytesCount(std::size_t ms_time) const;
};

