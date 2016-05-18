// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
#define NOMINMAX

#define _USING_V110_SDK71_ 

#include <windows.h>
#include <WindowsX.h>
#include <Commctrl.h>

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // some CString constructors will be explicit

#include <atlbase.h>
#include <atlstr.h>

#include <assert.h>
#include <sstream>
#include <string>
#include <streambuf>
#include <vector>
#include <concurrent_queue.h>
#include <concurrent_vector.h>
#include <functional>
#include <algorithm>
#include <regex>

#include <Mmdeviceapi.h>
#include <Audioclient.h>

#include <boost\noncopyable.hpp>
#include <boost\asio.hpp>
#include <boost\circular_buffer.hpp>
#include <boost\bind.hpp>
#include <boost\algorithm\string\predicate.hpp>
#include <boost\range.hpp>
#include <boost\thread.hpp>
using namespace boost;

#include "global.h"


