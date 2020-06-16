#pragma once
#include "Song.h"
#include "../CurrentTime.h"
#include <exception>
#include <ctime>
// TODO: название файла не совпадает с именем класса
using namespace std;
// TODO: неправильное название класса - должно быть без приставок
class Album
{
private:
	string _name;
	int _year;
	int _songsCount;
	Song* _songs; // TODO: указатели на массив должны именоваться в множественном числе. Это важно!

public:
	Album();

	void SetName(string name);
	void SetYear(int year);
	void SetSongs(Song* songs, int songsCount);

	Album(string name, int year, Song* songs, int songsCount);

	string GetName();
	int GetYear();
	int GetSongsCount();
	Song* GetSongs();

	Song* FindSongs(string songName);

	~Album();
};

