#include "Album_Lab3.h"

cAlbum::cAlbum()
{
	this->SetSong(nullptr, 0);
}

void cAlbum::SetName(string name)
{
	this->_name = name;
}

void cAlbum::SetYear(int year)
{
	struct tm* timeInfo; // TODO: зачем эта переменная? Доделай определение текущего года
	if (year < 1 || year > 2020)
	{
		throw exception("Ãîä âûïóñêà âëüáîìà äîëæåí áûòü îò 0 äî 2020");
	}
	this->_year = year;
}
// TODO: массивы в множественном числе!
void cAlbum::SetSong(cSong* song, int songCounter) // TODO: Count, а не Counter. Counter - так именуются совсем другие объекты
{
	this->_song = new cSong[songCounter];
	this->_songsCount = songCounter;
	for (int i = 0; i < songCounter; i++)
	{
		this->_song[i] = song[i];
	}
}
// TODO: множ. число
cAlbum::cAlbum(string name, int year, cSong* song, int songCount)
{
	this->SetName(name);
	this->SetYear(year);
	this->SetSong(song, songCount);
}

string cAlbum::GetName()
{
	return this->_name;
}
// TODO: грам. ошибка
int cAlbum::GetYeat()
{
	return this->_year;
}
// TODO: именование
cSong* cAlbum::GetSong()
{
	return this->_song;
}
// TODO: именование
int cAlbum::GetSongCounter()
{
	return this->_songsCount;
}

cSong* cAlbum::FindSong(string songName)
{
	for (int i = 0; i < this->_songsCount; i++)
	{
		if (this->GetSong()[i].GetName() == songName)
		{
			return &this->GetSong()[i];
		}
	}
	return nullptr;
}

cAlbum::~cAlbum()
{
	delete[] this->_song;
}
