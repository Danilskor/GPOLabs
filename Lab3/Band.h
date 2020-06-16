#pragma once
#include "Album.h"
// TODO: название файла
// TODO: название класса
class Band
{
private:

	string _name;
	string _description;
	Album* _albums; // TODO: множественное число
	int _albumsCount;

public:

	void SetName(string name);
	void SetDescription(string description);
	void SetAlbums(Album* albums, int albumsCount);// TODO: неправильные имена переменных - обоих!

	Band(string name, string description, Album* albums, int albumsNumber); // TODO: неправильное название переменной

	string GetName();
	string GetDescription();
	Album* GetAlbums();
	int GetAlbumsCount(); // TODO: нет такого поля!

	Song* FindSongName(string name);
	Album* FindAlbumName(string name);

	Song** GetAllSongs(int& songsCount); // TODO: неправильное название переменной
	Song** GetAllGenreSongs(int& songsCount, Genre genre); // TODO: неправильное название переменной

	~Band();
};

