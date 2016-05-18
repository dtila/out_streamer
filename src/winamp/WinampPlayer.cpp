#include "stdafx.h"
#include "WinampPlayer.h"
#include <windows.h>


#define Platform_h

#include <mm_h.h>
#include <mm_i.c>
#include <wa_ipc.h>
#include <wasabi\api_memmgr.h>
#include <wasabi\api_service.h>
#include <wasabi\svc_albumArtProvider.h>
#include <wasabi\waservicefactory.h>

WinampPlayer::WinampPlayer(HWND& playerWindow) :
	_apiService(NULL),
	_memMgmtService(NULL),
	_albumArtService(NULL),
	_memMgmtServiceFactory(NULL),
	_albumArtServiceFactory(NULL),
	_playerWindow(playerWindow)
{
}


HWND WinampPlayer::window() const
{
	return _playerWindow;
}


void WinampPlayer::play() const
{
	// send play message to player window
	LRESULT result = SendMessage(_playerWindow, WM_COMMAND, 40045, 0);
	assert(result == 0);
}


void WinampPlayer::pause() const
{
	// send pause message to player window
	LRESULT result = SendMessage(_playerWindow, WM_COMMAND, 40046, 0);
	assert(result == 0);
}


void WinampPlayer::stop() const
{
	// send stop message to player window
	LRESULT result = SendMessage(_playerWindow, WM_COMMAND, 40047, 0);
	assert(result == 0);
}


void WinampPlayer::restart() const
{
	LRESULT status = SendMessage(_playerWindow, WM_WA_IPC, 0, IPC_ISPLAYING);
	// check if player is playing
	if (status > 0)
	{
		// send reset playback position message to player window
		LRESULT result = SendMessage(_playerWindow, WM_WA_IPC, 0, IPC_JUMPTOTIME);
		assert(result == 0);
	}
	// also check if player is paused
	if (status == 3)
	{
		// resume playback
		play();
	}
}


void WinampPlayer::startNext() const
{
	// send skip to next track message to player window
	LRESULT result = SendMessage(_playerWindow, WM_COMMAND, 40048, 0);
	assert(result == 0);
}


void WinampPlayer::startPrev() const
{
	// send skip to previous track message to player window
	LRESULT result = SendMessage(_playerWindow, WM_COMMAND, 40044, 0);
	assert(result == 0);
}

int WinampPlayer::getVolume() const
{
	return IPC_GETVOLUME(_playerWindow);
}

void WinampPlayer::setVolume(int volume) const
{
	assert (volume >= 0 && volume <= 255);
	::SendMessage(_playerWindow, WM_WA_IPC, volume, IPC_SETVOLUME);
}

void WinampPlayer::increaseVolume() const
{
	// send volume up message to player window (twice)
	LRESULT result = SendMessage(_playerWindow, WM_COMMAND, 40058, 0);
	assert(result == 0);
	result = SendMessage(_playerWindow, WM_COMMAND, 40058, 0);
	assert(result == 0);
}


void WinampPlayer::decreaseVolume() const
{
	// send volume down message to player window (twice)
	LRESULT result = SendMessage(_playerWindow, WM_COMMAND, 40059, 0);
	assert(result == 0);
	result = SendMessage(_playerWindow, WM_COMMAND, 40059, 0);
	assert(result == 0);
}


void WinampPlayer::toggleMute() const
{
	static uint8_t previousVolume = 0;

	// send get volume message to player window
	LRESULT result = SendMessage(_playerWindow, WM_WA_IPC,
		static_cast<WPARAM>(-666), IPC_SETVOLUME);
	assert(result >= 0 && result <= 255);

	if (result == 0 && previousVolume > 0)
	{
		// send set volume message to player window
		result = SendMessage(_playerWindow, WM_WA_IPC,
			static_cast<WPARAM>(previousVolume), IPC_SETVOLUME);
		assert(result == 0);

		previousVolume = 0;
	}
	else
	{
		// send set volume message to player window
		result = SendMessage(_playerWindow, WM_WA_IPC, 0, IPC_SETVOLUME);
		assert(result == 0);
	}
}


void WinampPlayer::toggleShuffle() const
{
	// send get shuffle state message to player window
	LRESULT result = SendMessage(_playerWindow, WM_WA_IPC, 0, IPC_GET_SHUFFLE);
	// send set shuffle state message to player window
	result = SendMessage(_playerWindow, WM_WA_IPC, !result, IPC_SET_SHUFFLE);
	assert(result == 0);
}


//------------------------------------------------------------------------------


void WinampPlayer::freeServices()
{
	if (_apiService != NULL)
	{
		if (_albumArtServiceFactory != NULL)
		{
			if (_albumArtService != NULL)
			{
				_albumArtServiceFactory->releaseInterface(_albumArtService);
				_albumArtService = NULL;
			}

			_apiService->service_release(_albumArtServiceFactory);
			_albumArtServiceFactory = NULL;
		}

		if (_memMgmtServiceFactory != NULL)
		{
			if (_memMgmtService != NULL)
			{
				_memMgmtServiceFactory->releaseInterface(_memMgmtService);
				_memMgmtService = NULL;
			}

			_apiService->service_release(_memMgmtServiceFactory);
			_memMgmtServiceFactory = NULL;
		}

		_apiService = NULL;
	}
}


void WinampPlayer::initServices()
{
	_apiService = reinterpret_cast<api_service*>(
		SendMessage(_playerWindow, WM_WA_IPC, 0, IPC_GET_API_SERVICE));
	if (_apiService == reinterpret_cast<api_service*>(1))
	{
		// service interface not supported
		_apiService = NULL;
	}
	else if (_apiService != NULL)
	{
		_memMgmtServiceFactory =
			_apiService->service_getServiceByGuid(memMgrApiServiceGuid);
		if (_memMgmtServiceFactory == NULL)
		{
			freeServices();
			return;
		}

		_memMgmtService =
			reinterpret_cast<api_memmgr*>(_memMgmtServiceFactory->getInterface());
		if (_memMgmtService == NULL)
		{
			freeServices();
			return;
		}

		_albumArtServiceFactory =
			_apiService->service_enumService(svc_albumArtProvider::getServiceType(), 0);
		if (_albumArtServiceFactory == NULL)
		{
			freeServices();
			return;
		}

		_albumArtService =
			reinterpret_cast<svc_albumArtProvider*>(_albumArtServiceFactory->getInterface());
		if (_albumArtService == NULL)
		{
			freeServices();
			return;
		}
	}
}


//------------------------------------------------------------------------------


static std::string TranscodeToUTF8(const wchar_t* const wideCharString)
{
	assert(wideCharString != NULL);

	const int length = WideCharToMultiByte(CP_UTF8, 0, wideCharString, -1,
		NULL, 0, NULL, NULL);
	assert(length > 0);

	std::vector<char> multiByteString(length > 0 ? length : 1);

	const int result = WideCharToMultiByte(CP_UTF8, 0, wideCharString, -1,
		&multiByteString[0], multiByteString.size(), NULL, NULL);
	assert(length == result);

	return std::string(&multiByteString[0]);
}


static void GetBasicFileInfoW(time_t& length, const wchar_t* const filePath, HWND window)
{
	basicFileInfoStructW fileInfo;
	fileInfo.filename = filePath;
	fileInfo.quickCheck = 0;
	fileInfo.title = NULL;
	fileInfo.titlelen = 0;
	fileInfo.length = 0;

	SendMessage(window, WM_WA_IPC, (WPARAM) &fileInfo, IPC_GET_BASIC_FILE_INFOW);
	if (fileInfo.length > 0)
	{
		length = static_cast<time_t>(fileInfo.length) * 1000;
	}
}


static void GetExtendedFileInfoW(std::string& infoString, const wchar_t* const infoType,
	const wchar_t* const filePath, HWND window)
{
	wchar_t wideCharString[128] = {L'\0'};

	extendedFileInfoStructW fileInfo;
	fileInfo.filename = filePath;
	fileInfo.metadata = infoType;
	fileInfo.ret = wideCharString;
	fileInfo.retlen = (sizeof(wideCharString) / sizeof(wchar_t)) - 1;

	SendMessage(window, WM_WA_IPC, (WPARAM) &fileInfo, IPC_GET_EXTENDED_FILE_INFOW);
	if (fileInfo.ret[0] != L'\0')
	{
		infoString = TranscodeToUTF8(fileInfo.ret);
	}
}

int WinampPlayer::getTrackLenght() const
{
	return ::SendMessage(_playerWindow, WM_WA_IPC, 2, IPC_GETOUTPUTTIME);
}


/*
time_t WinampPlayer::getPlaybackMetadata(std::string& title, std::string& album,
	std::string& artist, std::vector<byte> & artworkData, std::string& artworkType) const
{
	time_t length = 0;
	title.clear(), album.clear(), artist.clear();
	artworkData.resize(0), artworkType.assign("image/none");

	const wchar_t* const filePath = reinterpret_cast<const wchar_t*>(
		SendMessage(_playerWindow, WM_WA_IPC, 0, IPC_GET_PLAYING_FILENAME));
	if (filePath != NULL && filePath[0] != L'\0')
	{
		GetBasicFileInfoW(length, filePath, _playerWindow);
		GetExtendedFileInfoW(title, L"Title", filePath, _playerWindow);
		GetExtendedFileInfoW(album, L"Album", filePath, _playerWindow);
		GetExtendedFileInfoW(artist, L"Artist", filePath, _playerWindow);
	}

	if (length == 0)
	{
		// try an alternate API for getting track length
		LRESULT result = SendMessage(_playerWindow, WM_WA_IPC, 2, IPC_GETOUTPUTTIME);
		if (result > 0)
		{
			length = static_cast<time_t>(result);
		}
	}

	if (title.empty())
	{
		// try an alternate API for getting track title
		const wchar_t* const wideCharTitle = reinterpret_cast<const wchar_t*>(
			SendMessage(_playerWindow, WM_WA_IPC, 0, IPC_GET_PLAYING_TITLE));
		if (wideCharTitle != NULL && wideCharTitle[0] != L'\0')
		{
			title = TranscodeToUTF8(wideCharTitle);
		}
	}

	if (_albumArtService == NULL)
	{
		// try to initialize player service interfaces
		const_cast<WinampPlayer*>(this)->initServices();
	}
	if (_albumArtService != NULL && _memMgmtService != NULL)
	{
		void*    imageData = 0;
		size_t   imageSize = 0;
		wchar_t* imageType = 0;

		const int returnCode = _albumArtService->GetAlbumArtData(
			filePath, L"cover", &imageData, &imageSize, &imageType);
		if (returnCode == 0 && imageData != NULL && imageSize > 0 && imageType != NULL)
		{
			artworkData.resize(imageSize);
			std::memcpy(&artworkData[0], imageData, imageSize);

			_memMgmtService->sysFree(imageData);

			artworkType = "image/" + TranscodeToUTF8(imageType);

			_memMgmtService->sysFree(imageType);
		}
	}

	if ((length == 0 || title.empty()) && FindWindow(L"TFMainWindow", NULL))
	{
		// try MediaMonkey's COM API for getting track metadata

		ISDBApplication * sdbApplication  = NULL;
		ISDBPlayer      * sdbPlayer       = NULL;
		ISDBSongData    * sdbSongData     = NULL;
		ISDBAlbumArtList* sdbAlbumArtList = NULL;
		ISDBAlbumArtItem* sdbAlbumArtItem = NULL;
		ISDBImage       * sdbImage        = NULL;

		BSTR imageType = NULL;
		BSTR songTitle = NULL;
		BSTR songAlbum = NULL;
		BSTR songArtist = NULL;

		int result = CoInitialize(NULL);
		try
		{
			result = CoCreateInstance(CLSID_SDBApplication, NULL,
				CLSCTX_LOCAL_SERVER, IID_ISDBApplication, (LPVOID*) &sdbApplication);
			if (result != S_OK) throw result;

			result = sdbApplication->get_Player(&sdbPlayer);
			if (result != S_OK) throw result;

			result = sdbPlayer->get_CurrentSong(&sdbSongData);
			if (result != S_OK) throw result;

			long songLength = 0;
			result = sdbSongData->get_SongLength(&songLength);
			if (result == S_OK && songLength > 0)
				length = songLength;

			result = sdbSongData->get_Title(&songTitle);
			if (result == S_OK && songTitle != NULL && songTitle[0] != L'\0')
				title = TranscodeToUTF8(songTitle);

			result = sdbSongData->get_AlbumName(&songAlbum);
			if (result == S_OK && songAlbum != NULL && songAlbum[0] != L'\0')
				album = TranscodeToUTF8(songAlbum);

			result = sdbSongData->get_ArtistName(&songArtist);
			if (result == S_OK && songArtist != NULL && songArtist[0] != L'\0')
				artist = TranscodeToUTF8(songArtist);

			result = sdbSongData->get_AlbumArt(&sdbAlbumArtList);
			if (result != S_OK) throw result;

			long imageCount = 0;
			result = sdbAlbumArtList->get_Count(&imageCount);
			if (result == S_OK && imageCount > 0)
			{
				result = sdbAlbumArtList->get_Item(0, &sdbAlbumArtItem);
				if (result != S_OK) throw result;

				result = sdbAlbumArtItem->get_Image(&sdbImage);
				if (result != S_OK) throw result;

				long imageData = 0;
				result = sdbImage->get_ImageData(&imageData);
				if (result != S_OK) throw result;

				long imageSize = 0;
				result = sdbImage->get_ImageDataLen(&imageSize);
				if (result != S_OK) throw result;

				result = sdbImage->get_ImageFormat(&imageType);
				if (result == S_OK && imageType != NULL && imageType[0] != L'\0')
				{
					artworkType = TranscodeToUTF8(imageType);

					artworkData.resize(imageSize);
					std::memcpy(&artworkData[0], (void*) imageData, imageSize);
				}
			}
		}
		CATCH_ALL

		if (imageType != NULL)
			SysFreeString(imageType);

		if (songTitle != NULL)
			SysFreeString(songTitle);

		if (songAlbum != NULL)
			SysFreeString(songAlbum);

		if (songArtist != NULL)
			SysFreeString(songArtist);

		if (sdbImage != NULL)
			sdbImage->Release();

		if (sdbAlbumArtItem != NULL)
			sdbAlbumArtItem->Release();

		if (sdbAlbumArtList != NULL)
			sdbAlbumArtList->Release();

		if (sdbSongData != NULL)
			sdbSongData->Release();

		if (sdbPlayer != NULL)
			sdbPlayer->Release();

		if (sdbApplication != NULL)
			sdbApplication->Release();

		CoUninitialize();
	}

	return length;
}
*/