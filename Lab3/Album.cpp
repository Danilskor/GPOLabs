#include "Album.h"

Album::Album()
{
	this->SetSong(nullptr, 0);
}

void Album::SetName(string name)
{
	this->_name = name;
}

void Album::SetYear(int year)
{
	if (year < 1 || year > GetCurrentYear())
	{
		throw exception("Year must be in range from 1 to currentYear");
	}
	this->_year = year;
}

void Album::SetSong(Song* songs, int songCount) 
{
	this->_songs = songs;
	this->_songsCount = songCount;
}

Album::Album(string name, int year, Song* songs, int songCount)
{
	this->SetName(name);
	this->SetYear(year);
	this->SetSong(songs, songCount);
}

string Album::GetName()
{
	return this->_name;
}

int Album::GetYeat()
{
	return this->_year;
}

Song* Album::GetSong()
{
	return this->_songs;
}

int Album::GetSongCounter()
{
	return this->_songsCount;
}

Song* Album::FindSong(string songName)
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

Album::~Album()
{
	delete[] this->_songs;
}
