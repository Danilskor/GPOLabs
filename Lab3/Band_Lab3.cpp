#include "Band_Lab3.h"

void cBand::SetName(string name)
{
	this->_name = name;
}

void cBand::SetDescription(string description)
{
	this->_description = description;
}
// TODO: именование переменных
void cBand::SetAlbum(cAlbum* album, int authorsCount)
{
	if (this->_album != nullptr)
	{
		delete[] this->_album;
	}
	this->_album = new cAlbum[authorsCount];
	for (int i = 0; i < authorsCount; i++)
	{
		this->_album[i] = album[i];
	}
	this->_albumsCount = authorsCount;
}
// TODO: именование переменных
cBand::cBand(string name, string description, cAlbum* album, int authorsCount)
{
	this->SetName(name);
	this->SetDescription(description);
	this->SetAlbum(album, authorsCount);
}

string cBand::GetName()
{
	return this->_name;
}

string cBand::GetDescription()
{
	return this->_description;
}
// TODO: альбом или альбомы?
cAlbum* cBand::GetAlbum()
{
	return this->_album;
}
// TODO: именование
int cBand::GetAuthorsCount()
{
	return this->_albumsCount;
}

cSong* cBand::FindSong(string name)
{
	cSong* song = nullptr;
	for (int i = 0; i < this->_albumsCount; i++)
	{
		song = this->_album[i].FindSong(name);
		if (song != nullptr)
		{
			return song;
		}
	}
	return song;
}
// TODO: имя чего? Альбома или песни?
cAlbum* cBand::FindAlbum(string name)
{
	for (int i = 0; i < this->_albumsCount; i++)
	{
		if (this->_album[i].FindSong(name) != nullptr)
		{
			return &this->_album[i];
		}
	}
	return nullptr;
}

cSong** cBand::GetAllSongs(int& songCount) // TODO: множ.
{
	songCount = 0;
	for (int i = 0; i < this->_albumsCount; i++)
	{
		songCount = songCount + this->_album[i].GetSongCounter();// TODO: +=
	}

	cSong** allSongs = new cSong*[songCount];
	int j = 0;
	for (int i = 0; i < this->_albumsCount; i++)
	{
		int l = 0;
		while (l != this->_album[i].GetSongCounter())
		{
			allSongs[j] = &this->_album[i].GetSong()[l];
			l++;
			j++;
		}
	}
	return allSongs;
}
// TODO: именование не соответствует действию
cSong** cBand::GetAllSongsGenre(int& songCount, cGenre genre)
{
	songCount = 0;
	for (int i = 0; i < this->_albumsCount; i++)
	{
		for (int j = 0; j < this->_album[i].GetSongCounter(); j++)
		{
			if (this->_album[i].GetSong()[j].GetGenre() == genre)
			{
				songCount++;
			}
		}
	}

	cSong** allGenreSongs = new cSong * [songCount];
	int j = 0;
	for (int i = 0; i < this->_albumsCount; i++)
	{
		int l = 0;
		while (l != this->_album[i].GetSongCounter())
		{
			if (this->_album[i].GetSong()[l].GetGenre() == genre)
			{
				allGenreSongs[j] = &this->_album[i].GetSong()[l];
				j++;
			}
			l++;
		}
	}
	return allGenreSongs;
}

cBand::~cBand()
{
	delete[] this->_album;
}

