#include "Song.h"
#include <exception>

using std::exception;

Song::Song(int durationSeconds, string name, Genre genre)
{
	this->SetDurationSeconds(durationSeconds);
	this->SetName(name);
	this->SetGenre(genre);
}

Song::Song()
{
}

int Song::GetDurationSeconds()
{
	return this->_durationSeconds;
}

string Song::GetName()
{
	return this->_name;
}

Genre Song::GetGenre()
{
	return this->_genre;
}

void Song::SetDurationSeconds(int durationSeconds)
{
	if (durationSeconds <= 0)
	{
		throw exception("Duration must be more than 0.");
	}
	this->_durationSeconds = durationSeconds;
}

void Song::SetName(string name)
{
	this->_name = name;
}

void Song::SetGenre(Genre genre)
{
	this->_genre = genre;
}
