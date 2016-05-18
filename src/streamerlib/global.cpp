#include "StdAfx.h"
#include "global.h"
#include "Settings.h"
#include <Strsafe.h>
#include <fstream>
#include "auto_update_feature.h"
#include <shellapi.h>
#pragma comment(lib,"shell32.lib")

//#define LOG_FILE _T("C:\\winamp_log.log")

#if defined(DEBUG) && defined(LOG_FILE)
std::basic_ofstream<TCHAR> logFile(LOG_FILE, std::ios_base::out);
#endif

Settings Global::Settings;
int Global::ListeningPort = 0;

namespace Global
{
#ifdef DEBUG
	void DebugWrite(LPCTSTR format, ... )
	{
		TCHAR buffer[124] = {};

		va_list parg;
		va_start(parg, format);
		::vswprintf_s(buffer, format, parg);
		va_end(parg);

#	ifdef LOG_FILE
		logFile << buffer;
#	else
		::OutputDebugString(buffer);
#	endif

	}
#endif

	void ErrorHandler(char *file, int line, char *function)
	{
		DebugWrite(_T("ERROR"));
		//::DebugBreak();
	}
}

std::string float_to_string(const float number)
{
	char buff[10] = {};
	::sprintf_s(buff, "%2.2f", number);
	return buff;
}

float string_to_float(const std::string& number)
{
	float f;
	::sscanf_s(number.c_str(), "%f", &f);
	return f;
}

const float Plugin::version()
{
	return 0.9f;
}

const std::string& Plugin::name()
{
#ifdef STREAMER_PAYD_VERSION
	const static std::string name = "MPD Broadcaster Output plugin";
#else
	const static std::string name = "MPD Broadcaster FREE Output plugin";
#endif

	return name;
}

const std::string& Plugin::full_name()
{
	const static std::string name = Plugin::name() + " v" + float_to_string(Plugin::version());
	return name;
}

const std::string& Plugin::about()
{
	const static std::string about = Plugin::name() + "\n(c) tilutza 2012";
	return about;
}

std::unique_ptr<auto_update_feature> _auto_update_request;


void Plugin::check_for_update_async(asio::io_service& io_service)
{
	auto auto_update_callback = [] (const char *response)
	{
		float version = 0;
		if (::sscanf_s(response, "%f", &version) != 1)
			return;
		
		const std::string message = "An update is available to download. Please use the provided link in the email when you purchased the plugin to download the new version.";

		if (version > Plugin::version())
			::MessageBoxA(NULL, message.c_str(), Plugin::name().c_str(), MB_OK | MB_ICONINFORMATION);

		Global::Settings.last_update_check = ::time(NULL);
		Global::Settings.write();
	};
	
	if (::difftime(time(NULL), Global::Settings.last_update_check) > Global::UpdateCheckDuration)
	{		
		_auto_update_request.reset(new auto_update_feature(io_service, "tilutza.no-ip.org", "/out_streamer/update.php", auto_update_callback));
	}
}
