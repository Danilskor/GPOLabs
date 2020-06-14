#pragma once
#include "Song.h"
#include "../Common/CurrentTime.h"
#include <exception>
#include <ctime>

using namespace std;

class Album
{
private:
	string _name;
	int _year;
	int _songsCount;
	Song* _songs; 

public:
	Album();

	void SetName(string name);
	void SetYear(int year);
	void SetSong(Song* songs, int songsCount);

	Album(string name, int year, Song* songs, int songsCount);

	string GetName();
	int GetYeat();
	int GetSongCounter();
	Song* GetSong();

	Song* FindSong(string songName);

	~Album();
};

