#include "Genre.h"


void WriteSongGenreToConsole(Genre genre)
{
	switch (genre)
	{
		case 0:
		{
			cout << "Rock";
			break;
		}
		case 1:
		{
			cout << "Dubstep";
			break;
		}
		case 2:
		{
			cout << "Pop";
			break;
		}
		case 3:
		{
			cout << "Jazz";
			break;
		}
		case 4:
		{
			cout << "Blues";
			break;
		}
	}
}