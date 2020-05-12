#pragma once
#include "Album_Lab3.h"
// TODO: название файла
// TODO: название класса
class cBand
{
private:

	string _name;
	string _description;
	cAlbum* _album; // TODO: множественное число
	int _albumsCount;

public:

	void SetName(string name);
	void SetDescription(string description);
	void SetAlbum(cAlbum* Album, int numberAuthors);// TODO: неправильные имена переменных - обоих!

	cBand(string name, string description, cAlbum* album, int numberAuthors); // TODO: неправильное название переменной

	string GetName();
	string GetDescription();
	cAlbum* GetAlbum();
	int GetAuthorsCount(); // TODO: нет такого поля!

	cSong* FindSong(string name);
	cAlbum* FindAlbum(string name);

	cSong** GetAllSongs(int& songCount); // TODO: неправильное название переменной
	cSong** GetAllSongsGenre(int& songCount, cGenre genre); // TODO: неправильное название переменной

	~cBand();
};

