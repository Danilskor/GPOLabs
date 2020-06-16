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
	void SetAlbum(Album* albums, int authorsNumber);// TODO: неправильные имена переменных - обоих!

	Band(string name, string description, Album* albums, int authorsNumber); // TODO: неправильное название переменной

	string GetName();
	string GetDescription();
	Album* GetAlbum();
	int GetAlbumsCount(); // TODO: нет такого поля!

	Song* FindSong(string name);
	Album* FindAlbumSong(string name);

	Song** GetAllSongs(int& songCount); // TODO: неправильное название переменной
	Song** GetAllGenreSongs(int& songCount, Genre genre); // TODO: неправильное название переменной

	~Band();
};

