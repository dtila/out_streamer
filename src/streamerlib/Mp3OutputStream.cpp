#include "StdAfx.h"
#include "Mp3OutputStream.h"
#include "Registry.h"
#include "Settings.h"

bool LameEncodeChunk(lame_global_flags * gf, int nsamples, PBYTE inbuffer, PBYTE &outbuffer, int outBufferSize, int &encoded_bytes)
{
	int samples = nsamples / lame_get_num_channels(gf);

	if ( 1 == lame_get_num_channels( gf ) )
	{
		encoded_bytes = lame_encode_buffer(gf, (short *)inbuffer, (short *)inbuffer, samples, outbuffer, outBufferSize);
	}
	else
	{
		encoded_bytes = lame_encode_buffer_interleaved(gf, (short *)inbuffer, samples, outbuffer, outBufferSize);
	}

	if(encoded_bytes < 0)
	{
		encoded_bytes = 0;
		return false;
	}

	return true;
}

inline bool LameEncodeChunk(lame_global_flags * gf, PBYTE inBuffer, int index, int count, int bytes_per_sample, PBYTE& outbuffer, int outBufferSize, int &encoded_bytes)
{
	return LameEncodeChunk(gf, count / bytes_per_sample, inBuffer + index, outbuffer, outBufferSize, encoded_bytes);
}

bool LameFlush(lame_global_flags * gf, PBYTE mp3, int &out)
{
	auto written = lame_encode_flush_nogap(gf, mp3, 0);
	if(written < 0)
	{
		out = 0;
		return false;
	}

	out = written;
	return true;
}

/************** Mp3 Encoder implementation ************
******************************************************/

Mp3OutputStream::Mp3OutputStream() : global_fags(), bytes_per_sample(), bytes_per_second()
#ifdef Mp3OutputStream_Buffering
	m_inBuffer(), m_inBufferLenght(), m_inBufferPos(),
#endif
	,m_outBuffer(), m_outBufferLenght()
{
}

Mp3OutputStream::~Mp3OutputStream()
{
	Close();

#ifdef Mp3OutputStream_Buffering
	delete [] m_inBuffer;
#endif	

	delete [] m_outBuffer;
}
	
bool Mp3OutputStream::Initialize(int samplerate, int numchannels, int bitspersamp)
{
	global_fags = lame_init();
	if(global_fags == nullptr)
		return false;
	
	//lame_set_errorf(global_fags, lame_debugger);
	lame_set_analysis(global_fags, 0);

	lame_set_in_samplerate(global_fags, samplerate);
	lame_set_bWriteVbrTag( global_fags, 0 );
	lame_set_error_protection( global_fags, 0 );
	lame_set_extension( global_fags, 0 );
	lame_set_original( global_fags, 0 );
	lame_set_VBR(global_fags, vbr_off);

	lame_set_num_channels(global_fags, numchannels);
	lame_set_mode( global_fags, STEREO);

	lame_set_out_samplerate(global_fags, 44100);
	// 9 = LQP_LOW_QUALITY
	// 2 = LQP_HIGH_QUALITY:
	// 0 = LQP_VERYHIGH_QUALITY
	//lame_set_quality(global_fags, 0 );
	//lame_set_preset( global_fags, STANDARD_FAST);

	Settings& s = Global::Settings;
	
#ifdef STREAMER_PAYD_VERSION
	lame_set_brate(global_fags, std::min(Mp3OutputStreamConstants::Presets[s.encoder_preset], 320));
#else
	lame_set_brate(global_fags, 64);
#endif
	
	if(lame_init_params(global_fags) != 0)
	{
		OutputDebugString(_T("lame_init_params failed"));
		lame_close(global_fags);
		global_fags = nullptr;
		return false;
	}
	
	bytes_per_second = lame_get_brate(global_fags) / 8;

#ifdef Mp3OutputStream_Buffering
	if ( 0 == lame_get_version( global_fags ) )
	{
		// For MPEG-II, only 576 samples per frame per channel
		m_inBufferLenght = 576 * lame_get_num_channels( global_fags );
	}
	else
	{
		// For MPEG-I, 1152 samples per frame per channel
		m_inBufferLenght = 1152 * lame_get_num_channels( global_fags );
	}


	// delete buffers
	if(m_inBuffer != nullptr)
		delete [] m_inBuffer;
	m_inBuffer = new BYTE[m_inBufferLenght * 2];
#endif

	m_outBufferLenght = static_cast<int>( ( 1.25 * ( samplerate / numchannels ) + 7200 ) * 2.0);
	
	if(m_outBuffer != nullptr)
		delete [] m_outBuffer;
	m_outBuffer = new BYTE[m_outBufferLenght];

	bytes_per_sample = bitspersamp / 8;
	return true;
}

std::size_t Mp3OutputStream::ConvertBytesCountToMiliseconds(std::size_t bytes_count) const
{
	return bytes_count / bytes_per_second;
	//return ::MulDiv(bytes_count, 1000, bytes_per_second);
}

std::size_t Mp3OutputStream::ConvertMilisecondsToBytesCount(std::size_t ms_time) const
{
	return ms_time * bytes_per_second;
	//return ::MulDiv(ms_time, bytes_per_second, 1000);
}

int Mp3OutputStream::InternalEncode(PBYTE buffer, int index, int count)
{
	int raw_audio_lenght = count, encoded = 0;
	bool lame_result;

#ifndef Mp3OutputStream_Buffering
	if (!(lame_result = LameEncodeChunk(global_fags, buffer, index, count, bytes_per_sample, m_outBuffer, m_outBufferLenght, encoded)))
	{
		encoded = -1;
		Global::DebugWrite(_T("Lame_encDll.EncodeChunk failed with the error code {0}"), lame_result);
	}
#else
	while (count > 0)
	{
		if (m_inBufferPos > 0)
		{
			auto toCopy = std::min(count, m_inBufferLenght - m_inBufferPos);
			std::copy(buffer + index, buffer + index + toCopy, m_inBuffer + m_inBufferPos);
			m_inBufferPos += toCopy;
			index += toCopy;
			count -= toCopy;
			if (m_inBufferPos >= m_inBufferLenght)
			{
				m_inBufferPos = 0;
				if ((lame_result = LameEncodeChunk(global_fags, m_inBuffer, 0, bytes_per_sample, m_inBufferLenght, m_outBuffer, encoded)))
				{
					if (lame_result && WriteCallback && encoded > 0)
					{
						WriteCallback(m_inBufferLenght, (char*) m_outBuffer, encoded);
					}
				}
				else
				{
					::OutputDebugString(_T("Lame_encDll.EncodeChunk failed with the error code {0}"));
				}
			}
		}
		else
		{
			if (count >= m_inBufferLenght)
			{
				if ((lame_result = LameEncodeChunk(global_fags, (PBYTE)buffer, index, m_inBufferLenght, bytes_per_sample, m_outBuffer, encoded)))
				{
					if (lame_result && WriteCallback && encoded > 0)
					{
						WriteCallback(m_inBufferLenght - index, (char*) m_outBuffer, encoded);
					}
				}
				else
				{
					::OutputDebugString(_T("Lame_encDll.EncodeChunk failed with the error code {0}"));
				}
				count -= m_inBufferLenght;
				index += m_inBufferLenght;
			}
			else
			{
				std::copy(buffer + index, buffer + index + count, m_inBuffer);
				m_inBufferPos = count;
				index += count;
				count = 0;
			}
		}
	}
#endif

	return encoded;
}

PBYTE Mp3OutputStream::GetHeader(int &count)
{
	count = 0;
	return nullptr;
}

int Mp3OutputStream::Write(PBYTE bytes, int lenght, PBYTE & p_written)
{
	p_written = m_outBuffer;
	return InternalEncode(bytes, 0, lenght);
}

int Mp3OutputStream::Flush(PBYTE& p_written)
{
	int encoded = 0;

#ifdef Mp3OutputStream_Buffering
	if (m_inBufferPos > 0)
	{
		if (LameEncodeChunk(global_fags, m_inBuffer, 0, m_inBufferPos, bytes_per_sample, m_outBuffer, encoded))
		{
			if (encoded > 0 && writeCallback)
			{
				writeCallback(m_inBufferPos, (char *)m_outBuffer, encoded);
			}
		}
	}
#endif

	if (LameFlush(global_fags, m_outBuffer, encoded))
	{
		p_written = m_outBuffer;
		return encoded;
	}
	return -1;

#ifdef Mp3OutputStream_Buffering
	m_inBufferPos = 0;
#endif
}

void Mp3OutputStream::Close()
{
	if (global_fags == nullptr)
		return;

	bytes_per_second = 0;

	lame_close(global_fags);
	global_fags = nullptr;
#if Mp3OutputStream_Buffering
	m_inBufferPos = 0;
#endif
}

std::vector<std::pair<std::string, std::string>> Mp3OutputStream::GetResponseHeaders() const
{
	std::vector<std::pair<std::string, std::string>> headers;
	//headers.pop_back(std::make_pair(std::string(""), std::string("")));
	return headers;
}
