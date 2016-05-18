
#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
#define NOMINMAX

#include <windows.h>
#include <WindowsX.h>

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // some CString constructors will be explicit

#include <atlbase.h>

#include <assert.h>
#include <sstream>
#include <string>
#include <streambuf>
#include <vector>
//#include <concurrent_queue.h>
//#include <concurrent_vector.h>
#include <functional>
#include <algorithm>
//#include <regex>
#include <stdlib.h>

#include <Mmdeviceapi.h>
#include <Mmsystem.h>
#include <Audioclient.h>

#include <boost\noncopyable.hpp>
//#include <boost\regex.hpp>
#include <boost\asio.hpp>
#include <boost\circular_buffer.hpp>
#include <boost\bind.hpp>
//#include <boost\algorithm\string\predicate.hpp>
#include <boost\range.hpp>
#include <boost\thread.hpp>
#include <boost\chrono.hpp>
//#include <boost\date_time\gregorian\gregorian.hpp>

using namespace boost;

#include "global.h"

#define atomic_read(value) \
	::InterlockedCompareExchange((&value), (value), (value))