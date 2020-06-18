#include "Album.h"

Album::Album()
{
	this->SetSongs(nullptr, 0);
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

void Album::SetSongs(Song* songs, int songsCount)
{
	this->_songs = new Song[songsCount];
	this->_songsCount = songsCount;
	for (int i = 0; i < songsCount; i++)
	{
		this->_songs[i] = songs[i];
	}
}

Album::Album(string name, int year, Song* songs, int songsCount)
{
	this->SetName(name);
	this->SetYear(year);
	this->SetSongs(songs, songsCount);
}

string Album::GetName()
{
	return this->_name;
}

int Album::GetYear()
{
	return this->_year;
}

Song* Album::GetSongs()
{
	return this->_songs;
}

int Album::GetSongsCount()
{
	return this->_songsCount;
}

Song* Album::FindSongs(string songName)
{
	for (int i = 0; i < this->_songsCount; i++)
	{
		if (this->GetSongs()[i].GetName() == songName)
		{
			return &this->GetSongs()[i];
		}
	}
	return nullptr;
}

Album::~Album()
{
	delete[] this->_songs;
}
