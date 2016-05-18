#pragma once
#include "stdafx.h"

struct __declspec(novtable) IAudioOutputStream
{
	virtual std::size_t ConvertBytesCountToMiliseconds(std::size_t bytes_count) const;
	virtual std::size_t ConvertMilisecondsToBytesCount(std::size_t ms_time) const;
	virtual PBYTE GetHeader(int &lenght);

	/*
	* Initialize the stream using out parameters and the Out write callback
	*/
	virtual bool Initialize(int samplerate, int numchannels, int bitspersamp);

	/**
	 * Write RAW chunk of bytes on the output stream
	   @param p_written: The buffer that contains the bytes wrote
	   return: Number of bytes wrote
	 */
	virtual int Write(PBYTE bytes, int lenght, PBYTE& p_written);

	/**
	 * Flush the bytes into stream
	 */
	virtual int Flush(PBYTE& p_written);

	/**
	 * Close the output stream
	 */
	virtual void Close();
};

