#pragma once
#include <windows.h>
#include "Player.h"

class WinampPlayer : public Player
{
public:
	explicit WinampPlayer(HWND&);

	HWND window() const;

	void play() const;
	void pause() const;
	void stop() const;
	void restart() const;
	void startNext() const;
	void startPrev() const;
	int getVolume() const ;
	void setVolume(int volume) const;
	void increaseVolume() const;
	void decreaseVolume() const;
	void toggleMute() const;
	void toggleShuffle() const;

	int getTrackLenght() const;
private:
	void freeServices();
	void initServices();

	class api_service         * _apiService;
	class api_memmgr          * _memMgmtService;
	class svc_albumArtProvider* _albumArtService;
	class waServiceFactory    * _memMgmtServiceFactory;
	class waServiceFactory    * _albumArtServiceFactory;

	HWND& _playerWindow;
};
