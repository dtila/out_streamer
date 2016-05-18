#pragma once

struct Player abstract
{
	virtual HWND window() const = 0;
	virtual void play() const = 0;
	virtual void pause() const = 0;
	virtual void stop() const = 0;
	virtual void restart() const = 0;
	virtual void startNext() const = 0;
	virtual void startPrev() const = 0;
	virtual int getVolume() const = 0;
	virtual void setVolume(int volume) const = 0;
	virtual void increaseVolume() const = 0;
	virtual void decreaseVolume() const = 0;
	virtual void toggleMute() const = 0;
	virtual void toggleShuffle() const = 0;

	virtual int getTrackLenght() const = 0;
};

