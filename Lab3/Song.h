#pragma once

#include <string>
#include "Genre.h"

using namespace std;

class Song
{
private:
	int _durationSeconds;
	string _name;
	Genre _genre;

public:
	Song(int durationSeconds, string name, Genre genre);
	Song();

	int GetDurationSeconds();
	string GetName();
	Genre GetGenre();

	void SetDurationSeconds(int durationSeconds);
	void SetName(string name);
	void SetGenre(Genre genre);
};

