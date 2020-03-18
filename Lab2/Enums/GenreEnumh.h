#pragma once

enum Genre
{
	Comedy,
	Drama,
	Thriller,
	Action,
	Horror,
	BlockBuster
};

Genre ReadGenre();
void WriteGenre(Genre genre);