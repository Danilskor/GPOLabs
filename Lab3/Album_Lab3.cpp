#include "Album_Lab3.h"

cAlbum::cAlbum()
{
	this->SetSong(nullptr, 0);
}

void cAlbum::SetName(string name)
{
	this->_name = name;
}

void cAlbum::SetYear(int year)
{
	struct tm* timeInfo;
	if (year < 1 || year > 2020)
	{
		throw exception("Год выпуска вльбома должен быть от 0 до 2020");
	}
	this->_year = year;
}

void cAlbum::SetSong(cSong* song, int songCounter)
{
	this->_song = new cSong[songCounter];
	this->_songsCount = songCounter;
	for (int i = 0; i < songCounter; i++)
	{
		this->_song[i] = song[i];
	}
}

cAlbum::cAlbum(string name, int year, cSong* song, int songCount)
{
	this->SetName(name);
	this->SetYear(year);
	this->SetSong(song, songCount);
}

string cAlbum::GetName()
{
	return this->_name;
}

int cAlbum::GetYeat()
{
	return this->_year;
}

cSong* cAlbum::GetSong()
{
	return this->_song;
}

int cAlbum::GetSongCounter()
{
	return this->_songsCount;
}

cSong* cAlbum::FindSong(string songName)
{
	for (int i = 0; i < this->_songsCount; i++)
	{
		if (this->GetSong()[i].GetName() == songName)
		{
			return &this->GetSong()[i];
		}
	}
	return nullptr;
}

cAlbum::~cAlbum()
{
	delete[] this->_song;
}
