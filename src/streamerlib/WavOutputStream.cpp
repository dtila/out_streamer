#include "StdAfx.h"
#include "WavOutputStream.h"

//#define WAVFILE_ONE_CHUNCK

#pragma pack(push, 1)
struct WavHeader
{
    DWORD		    szRIFF;  // RIFF
    DWORD            lRIFFSize;  
    DWORD			szWave;  //WAVE
    DWORD		    szFmt;		//fmt
    DWORD            lFmtSize;  
	WORD        wFormatTag;         /* format type */
    WORD        nChannels;          /* number of channels (i.e. mono, stereo...) */
    DWORD       nSamplesPerSec;     /* sample rate */
    DWORD       nAvgBytesPerSec;    /* - byte rate for buffer estimation */
    WORD        nBlockAlign;        /* block size of data */
    WORD        wBitsPerSample;     /* number of bits per sample of mono data */

#ifdef WAVFILE_ONE_CHUNCK
	DWORD szDATA;
	DWORD dataSize;
#endif
};  
#pragma pack(pop)

WavOutputStream::WavOutputStream() 
	: _header(new BYTE[sizeof WavHeader]), _writeBuffer(), _writeBufferSize(), wavSize(), bytes_per_second()
{
}

WavOutputStream::~WavOutputStream()
{
	delete _header;
}

unsigned WavOutputStream::GetWrittenOutputTime(unsigned written_bytes) const
{
	return 0;
}

bool WavOutputStream::Initialize(int samplerate, int numchannels, int bitspersamp)
{
	bytes_per_second = samplerate * bitspersamp / 8 * numchannels;

	WavHeader swaveheader = {0};
	swaveheader.szRIFF = MAKEFOURCC('R', 'I', 'F', 'F');
    swaveheader.lRIFFSize = 1024 * 1024 + 36;
	swaveheader.szWave = MAKEFOURCC('W', 'A', 'V', 'E');

    swaveheader.szFmt = MAKEFOURCC('f', 'm', 't', ' ');
    swaveheader.lFmtSize = 16;        
    swaveheader.wFormatTag = WAVE_FORMAT_PCM;
    swaveheader.nChannels = numchannels;
    swaveheader.nSamplesPerSec = samplerate;
	swaveheader.nAvgBytesPerSec = samplerate * numchannels * bitspersamp / 8; // byte rate
    swaveheader.nBlockAlign = numchannels * bitspersamp / 8;
	swaveheader.wBitsPerSample = bitspersamp;

#ifdef WAVFILE_ONE_CHUNCK
	swaveheader.szDATA = MAKEFOURCC('d', 'a', 't', 'a');
	swaveheader.dataSize = swaveheader.lRIFFSize - 36; // will be filled in later when the file is closed
#endif
	std::memcpy(_header, &swaveheader, sizeof WavHeader);

	wavSize = 0;
	fopen_s(&file, "C:\\data.wav", "wb");
	fwrite(&swaveheader, 1, sizeof WavHeader, file);
	return true;
}

std::string WavOutputStream::GetStreamingContentType() const
{
	return "audio/wav";
}

PBYTE WavOutputStream::GetHeader(int &count)
{
	if (_header	== nullptr)
	{
		HandleError();
	}

	count = sizeof WavHeader;
	return _header;
}

int WavOutputStream::Write(PBYTE bytes, int lenght, PBYTE & p_written)
{
	if (_writeBufferSize < static_cast<DWORD>(lenght))
	{
		if (_writeBuffer != nullptr)
			delete[] _writeBuffer;
		
		_writeBuffer = new BYTE[lenght + 8];
		_writeBufferSize = lenght;
	}

	wavSize += lenght;

#ifdef WAVFILE_ONE_CHUNCK
	fwrite(bytes, 1, lenght, file);
#else
	DWORD chunckID = MAKEFOURCC('d', 'a', 't', 'a');
	DWORD chunckSize = static_cast<DWORD>(lenght);// + 8;
	::fwrite(&chunckID, 1, sizeof chunckID, file);
	::fwrite(&chunckSize, 1, sizeof chunckSize, file);
	::fwrite(bytes, 1, lenght, file);
#endif

	p_written = bytes;
	return lenght;
}

int WavOutputStream::Flush(PBYTE& p_written)
{
	return 0;
}

void WavOutputStream::Close()
{
	fflush(file);

#ifdef WAVFILE_ONE_CHUNCK
	/*fseek(file, 40, SEEK_SET);	
	fwrite(&wavSize, 1, 4, file);//*/

	/*fseek(file, 4, SEEK_SET);	
	wavSize += 36;
	fwrite(&wavSize, 1, 4, file);//*/
#endif

	fclose(file);
}

std::size_t WavOutputStream::ConvertBytesCountToMiliseconds(std::size_t bytes_count) const
{
	//return bytes_count / bytes_per_second;
	return ::MulDiv(bytes_count, 1000, bytes_per_second);
}

std::size_t WavOutputStream::ConvertMilisecondsToBytesCount(std::size_t ms_time) const
{
	//return ms_time * bytes_per_second;
	return ::MulDiv(ms_time, bytes_per_second, 1000);
}