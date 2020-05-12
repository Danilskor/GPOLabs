#pragma once

#include "Genre_Lab3.h"
#include <string>

using namespace std;
// TODO: имя файла
// TODO: имя класса
class cSong
{
private:
	int _durationSeconds;
	string _name;
	cGenre _genre;

public:
	cSong(int durationSeconds, string name, cGenre genre);
	cSong();

	int GetDurationSeconds();
	string GetName();
	cGenre GetGenre();

	void SetDurationSeconds(int durationSeconds);
	void SetName(string name);
	void SetGenre(cGenre genre);
};

