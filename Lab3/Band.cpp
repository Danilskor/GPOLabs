#include "Band.h"

void Band::SetName(string name)
{
	this->_name = name;
}

void Band::SetDescription(string description)
{
	this->_description = description;
}
// TODO: именование переменных
void Band::SetAlbums(Album* albums, int albumsCount)
{
	if (this->_albums != nullptr)
	{
		delete[] this->_albums;
	}
	this->_albums = new Album[albumsCount];
	for (int i = 0; i < albumsCount; i++)
	{
		this->_albums[i] = albums[i];
	}
	this->_albumsCount = albumsCount;
}
// TODO: именование переменных
Band::Band(string name, string description, Album* albums, int albumsCount)
{
	this->SetName(name);
	this->SetDescription(description);
	this->SetAlbums(albums, albumsCount);
}

string Band::GetName()
{
	return this->_name;
}

string Band::GetDescription()
{
	return this->_description;
}
// TODO: альбом или альбомы?
Album* Band::GetAlbums()
{
	return this->_albums;
}
// TODO: именование
int Band::GetAlbumsCount()
{
	return this->_albumsCount;
}

Song* Band::FindSongName(string name)
{
	Song* songs = nullptr;
	for (int i = 0; i < this->_albumsCount; i++)
	{
		songs = this->_albums[i].FindSongs(name);
		if (songs != nullptr)
		{
			return songs;
		}
	}
	return songs;
}
// TODO: имя чего? Альбома или песни?
Album* Band::FindAlbumName(string name)
{
	for (int i = 0; i < this->_albumsCount; i++)
	{
		if (this->_albums[i].FindSongs(name) != nullptr)
		{
			return &this->_albums[i];
		}
	}
	return nullptr;
}

Song** Band::GetAllSongs(int& songsCount) // TODO: множ.
{
	songsCount = 0;
	for (int i = 0; i < this->_albumsCount; i++)
	{
		songsCount += this->_albums[i].GetSongsCount();// TODO: +=
	}

	Song** allSongs = new Song*[songsCount];
	int j = 0;
	for (int i = 0; i < this->_albumsCount; i++)
	{
		int l = 0;
		while (l != this->_albums[i].GetSongsCount())
		{
			allSongs[j] = &this->_albums[i].GetSongs()[l];
			l++;
			j++;
		}
	}
	return allSongs;
}
// TODO: именование не соответствует действию
Song** Band::GetAllGenreSongs(int& songsCount, Genre genre)
{
	songsCount = 0;
	for (int i = 0; i < this->_albumsCount; i++)
	{
		for (int j = 0; j < this->_albums[i].GetSongsCount(); j++)
		{
			if (this->_albums[i].GetSongs()[j].GetGenre() == genre)
			{
				songsCount++;
			}
		}
	}

	Song** allGenreSongs = new Song * [songsCount];
	int j = 0;
	for (int i = 0; i < this->_albumsCount; i++)
	{
		int l = 0;
		while (l != this->_albums[i].GetSongsCount())
		{
			if (this->_albums[i].GetSongs()[l].GetGenre() == genre)
			{
				allGenreSongs[j] = &this->_albums[i].GetSongs()[l];
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

