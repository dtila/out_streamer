#include "stdafx.h"
#include "Registry.h"


Registry::Registry() : _hkey()
{
}

Registry::~Registry()
{
	if (_hkey != nullptr)
	{
		::RegCloseKey(_hkey);
		_hkey = nullptr;
	}
}

bool Registry::open(HKEY hkey, LPCTSTR subkey)
{
	return ::RegCreateKey(hkey, subkey, &_hkey) == ERROR_SUCCESS;
}

void Registry::write(LPCTSTR value_name, int value)
{
	assert(_hkey != nullptr); 
	
	LONG result = ::RegSetValueEx(_hkey, value_name, 0, REG_DWORD, reinterpret_cast<const BYTE *>(&value), sizeof(value));
	assert(result == ERROR_SUCCESS);
}

void Registry::write(LPCTSTR value_name, long long value)
{
	assert(_hkey != nullptr); 

	LONG result = ::RegSetValueEx(_hkey, value_name, 0, REG_QWORD, reinterpret_cast<const BYTE *>(&value), sizeof(value));
	assert(result == ERROR_SUCCESS);
}

void Registry::write(LPCTSTR value_name, std::wstring value)
{
	assert(_hkey != nullptr); 

	LONG result = ::RegSetValueExW(_hkey, value_name, 0, REG_SZ, reinterpret_cast<const BYTE *>(value.c_str()), value.length() * sizeof(WCHAR));
	assert(result == ERROR_SUCCESS);
}

void Registry::write(LPCTSTR value_name, std::string value)
{
	assert(_hkey != nullptr); 

	std::wstring wvalue(std::begin(value), std::end(value));

	LONG result = ::RegSetValueExW(_hkey, value_name, 0, REG_SZ, reinterpret_cast<const BYTE *>(wvalue.c_str()), wvalue.length() * sizeof(WCHAR));
	assert(result == ERROR_SUCCESS);
}

void Registry::write(LPCTSTR value_name, bool value)
{
	assert(_hkey != nullptr); 

	int intvalue = value;
	LONG result = ::RegSetValueEx(_hkey, value_name, 0, REG_DWORD, reinterpret_cast<const BYTE *>(&intvalue), sizeof(intvalue));
	assert(result == ERROR_SUCCESS);
}

int Registry::read(LPCTSTR value_name, int defaultValue)
{
	if (_hkey == nullptr)
		return defaultValue;
	
	DWORD data_type = 0;
	int data;
	DWORD data_length = sizeof data;
	auto result = ::RegGetValue(_hkey, nullptr, value_name, RRF_RT_DWORD, &data_type, &data, &data_length);

	if(result == ERROR_SUCCESS && data_type == REG_DWORD && data_length == sizeof(int))
		return data;
	return defaultValue;

}

long long Registry::read(LPCTSTR value_name, long long defaultValue)
{
	if (_hkey == nullptr)
		return defaultValue;
	
	DWORD data_type = 0;
	long long data;
	DWORD data_length = sizeof data;
	auto result = ::RegGetValue(_hkey, nullptr, value_name, RRF_RT_QWORD, &data_type, &data, &data_length);

	if(result == ERROR_SUCCESS && data_type == REG_QWORD && data_length == sizeof(long long))
		return data;
	return defaultValue;
}

std::basic_string<TCHAR> Registry::read(LPCTSTR value_name, std::basic_string<TCHAR> defaultValue)
{
	if (_hkey == nullptr)
		return defaultValue;
	
	DWORD data_type = 0;
	TCHAR data[0x400] = {};
	DWORD data_length = sizeof data;
	LONG result = ::RegGetValue(_hkey, nullptr, value_name, RRF_RT_REG_SZ, &data_type, &data, &data_length);

	if(result == ERROR_SUCCESS && data_type == REG_SZ)
		return data;
	return defaultValue;
}

bool Registry::read(LPCTSTR value_name, bool defaultValue)
{
	if (_hkey == nullptr)
		return defaultValue;
	
	DWORD data_type = 0;
	int data = 0;
	DWORD data_length = sizeof data;
	auto result = ::RegGetValue(_hkey, nullptr, value_name, RRF_RT_DWORD, &data_type, &data, &data_length);

	if(result == ERROR_SUCCESS && data_type == REG_DWORD && data_length == sizeof(int))
		return data == 1;
	return defaultValue;
}
