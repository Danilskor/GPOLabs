#include "Song_Lab3.h"
#include <exception>

using std::exception;

cSong::cSong(int durationSeconds, string name, cGenre genre)
{
	this->SetDurationSeconds(durationSeconds);
	this->SetName(name);
	this->SetGenre(genre);
}

cSong::cSong()
{
}

int cSong::GetDurationSeconds()
{
	return this->_durationSeconds;
}

string cSong::GetName()
{
	return this->_name;
}

cGenre cSong::GetGenre()
{
	return this->_genre;
}

void cSong::SetDurationSeconds(int durationSeconds)
{
	if (durationSeconds <= 0)
	{
		throw exception("Duration must be more than 0.");
	}
	this->_durationSeconds = durationSeconds;
}

void cSong::SetName(string name)
{
	this->_name = name;
}

void cSong::SetGenre(cGenre genre)
{
	this->_genre = genre;
}
