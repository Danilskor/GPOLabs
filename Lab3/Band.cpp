#include "Band.h"

void Band::SetName(string name)
{
	this->_name = name;
}

void Band::SetDescription(string description)
{
	this->_description = description;
}

void Band::SetAlbum(Album* albums, int authorsCount)
{
	if (this->_albums != nullptr)
	{
		delete[] this->_albums;
	}
	this->_albums = new Album[authorsCount];
	for (int i = 0; i < authorsCount; i++)
	{
		this->_albums[i] = albums[i];
	}
	this->_albumsCount = authorsCount;
}

Band::Band(string name, string description, Album* albums, int authorsCount)
{
	this->SetName(name);
	this->SetDescription(description);
	this->SetAlbum(albums, authorsCount);
}

string Band::GetName()
{
	return this->_name;
}

string Band::GetDescription()
{
	return this->_description;
}

Album* Band::GetAlbum()
{
	return this->_albums;
}

int Band::GetAlbumsCount()
{
	return this->_albumsCount;
}

Song* Band::FindSong(string name)
{
	Song* songs = nullptr;
	for (int i = 0; i < this->_albumsCount; i++)
	{
		songs = this->_albums[i].FindSong(name);
		if (songs != nullptr)
		{
			return songs;
		}
	}
	return songs;
}

Album* Band::FindAlbum(string name)
{
	for (int i = 0; i < this->_albumsCount; i++)
	{
		if (this->_albums[i].FindSong(name) != nullptr)
		{
			return &this->_albums[i];
		}
	}
	return nullptr;
}

Song** Band::GetAllSongs(int& songsCount) 
{
	songsCount = 0;
	for (int i = 0; i < this->_albumsCount; i++)
	{
		songsCount += this->_albums[i].GetSongCounter();
	}

	Song** allSongs = new Song*[songsCount];
	int j = 0;
	for (int i = 0; i < this->_albumsCount; i++)
	{
		int l = 0;
		while (l != this->_albums[i].GetSongCounter())
		{
			allSongs[j] = &this->_albums[i].GetSong()[l];
			l++;
			j++;
		}
	}
	return allSongs;
}

Song** Band::GetAllGenreSongs(int& songCount, Genre genre)
{
	songCount = 0;
	for (int i = 0; i < this->_albumsCount; i++)
	{
		for (int j = 0; j < this->_albums[i].GetSongCounter(); j++)
		{
			if (this->_albums[i].GetSong()[j].GetGenre() == genre)
			{
				songCount++;
			}
		}
	}

	Song** allGenreSongs = new Song * [songCount];
	int j = 0;
	for (int i = 0; i < this->_albumsCount; i++)
	{
		int l = 0;
		while (l != this->_albums[i].GetSongCounter())
		{
			if (this->_albums[i].GetSong()[l].GetGenre() == genre)
			{
				allGenreSongs[j] = &this->_albums[i].GetSong()[l];
				j++;
			}
			l++;
		}
	}
	return allGenreSongs;
}

Band::~Band()
{
	delete[] this->_albums;
}

