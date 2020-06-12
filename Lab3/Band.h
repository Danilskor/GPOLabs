#pragma once

#include "Album.h"

class Band
{
private:

	string _name;
	string _description;
	Album* _albums;
	int _albumsCount;

public:
	Band(string name, string description, Album* albums, int authorsNumber);

	void SetName(string name);
	void SetDescription(string description);
	void SetAlbum(Album* albums, int authorsNumber);

	string GetName();
	string GetDescription();
	Album* GetAlbum();
	int GetAlbumsCount();

	Song* FindSong(string name);
	Album* FindAlbum(string name);

	Song** GetAllSongs(int& songCount); 
	Song** GetAllGenreSongs(int& songCount, Genre genre); 

	~Band();
};

