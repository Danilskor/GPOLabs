#pragma once
#include "Album_Lab3.h"

class cBand
{
private:

	string _name;
	string _description;
	cAlbum* _album;
	int _albumsCount;

public:

	void SetName(string name);
	void SetDescription(string description);
	void SetAlbum(cAlbum* Album, int numberAuthors);

	cBand(string name, string description, cAlbum* album, int numberAuthors);

	string GetName();
	string GetDescription();
	cAlbum* GetAlbum();
	int GetAuthorsCount();

	cSong* FindSong(string name);
	cAlbum* FindAlbum(string name);

	cSong** GetAllSongs(int& songCount);
	cSong** GetAllSongsGenre(int& songCount, cGenre genre);

	~cBand();
};

