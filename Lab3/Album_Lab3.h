#pragma once
#include "Song_Lab3.h"
#include <exception>
#include <ctime>

using namespace std;

class cAlbum
{
private:
	string _name;
	int _year;
	int _songsCount;
	cSong* _song;

public:
	cAlbum();

	void SetName(string name);
	void SetYear(int year);
	void SetSong(cSong* song, int songsCount);

	cAlbum(string name, int year, cSong* song, int songsCount);

	string GetName();
	int GetYeat();
	int GetSongCounter();
	cSong* GetSong();

	cSong* FindSong(string songName);

	~cAlbum();
};

