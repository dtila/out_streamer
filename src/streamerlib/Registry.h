#pragma once
#include "stdafx.h"
#include <boost\date_time\gregorian\gregorian.hpp>


class Registry
{
	HKEY _hkey;

public:
	Registry();
	~Registry();

	bool open(HKEY hkey, LPCTSTR subkey);

	void write(LPCTSTR value_name, int value);
	void write(LPCTSTR value_name, long long value);
	void write(LPCTSTR value_name, std::wstring value);
	void write(LPCWSTR value_name, std::string value);
	void write(LPCTSTR value_name, bool value);

	int read(LPCTSTR value_name, int defaultValue);
	long long read(LPCTSTR value_name, long long defaultValue);
	std::basic_string<TCHAR> read(LPCTSTR value_name, std::basic_string<TCHAR> defaultValue);
	bool read(LPCTSTR value_name, bool defaultValue);
};

