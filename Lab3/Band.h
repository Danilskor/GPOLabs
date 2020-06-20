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

	void SetName(string name);
	void SetDescription(string description);
	void SetAlbums(Album* albums, int albumsCount);

	Band(string name, string description, Album* albums, int albumsCount); // TODO: не number, а count как поле

	string GetName();
	string GetDescription();
	Album* GetAlbums();
	int GetAlbumsCount();

	Song* FindSongName(string name);
	Album* FindAlbumName(string name);

	Song** GetAllSongs(int& songsCount);
	Song** GetAllGenreSongs(int& songsCount, Genre genre);

	~Band();
};

