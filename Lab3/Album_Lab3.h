#pragma once
#include "Song_Lab3.h"
#include <exception>
#include <ctime>
// TODO: название файла не совпадает с именем класса
using namespace std;
// TODO: неправильное название класса - должно быть без приставок
class cAlbum
{
private:
	string _name;
	int _year;
	int _songsCount;
	cSong* _song; // TODO: указатели на массив должны именоваться в множественном числе. Это важно!

public:
	cAlbum();

	void SetName(string name);
	void SetYear(int year);
	void SetSong(cSong* song, int songsCount);

	cAlbum(string name, int year, cSong* song, int songsCount);

	string GetName();
	int GetYeat();
	int GetSongCounter();
	cSong* GetSong();

	cSong* FindSong(string songName);

	~cAlbum();
};

