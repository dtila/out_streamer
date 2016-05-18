#pragma once
#include <string>
#include "auto_update_feature.h"

#define STREAMER_PAYD_VERSION

#define SETTINGS_REGISTRY_ROOT HKEY_CURRENT_USER
#define SETTINGS_REGISTRY_PATH _T("Software\\Winamp\\MPD Streamer")


struct Settings;
namespace Global
{
	const std::string UpdateWebsiteAddress = "http://tilutza.no-ip.org";
	const int UpdateCheckDuration = 10 * 86400; // 10 days in seconds
	const int ListeningPorts[] = { 6686, 6872, 4975, 8239, 9274 };
	
	extern int ListeningPort;
	extern ::Settings Settings;


	void ErrorHandler(char * file, int line, char *function);

#ifdef DEBUG
	void DebugWrite(LPCTSTR format, ... );
#else
	inline void empty() {}
	#define DebugWrite(...) empty()
#endif
}


namespace Plugin
{
	const float version();
	const std::string& name();
	const std::string& full_name();
	const std::string& about();

	void check_for_update_async(asio::io_service& io_service);
}

#define HandleError() Global::ErrorHandler(__FILE__, __LINE__, __FUNCTION__)
