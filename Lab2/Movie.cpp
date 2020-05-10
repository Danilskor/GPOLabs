#include "Movie.h"
#include "Enums/Enum.h"

Movie* MakeMovie(string name, int DurationMinutes, int year,
	Genre genre, double rating)
{
	Movie* movie = new Movie;
	movie->Name = name;
	movie->Genre = genre;
	movie->DurationMinutes = DurationMinutes;
	movie->Rating = rating;
	movie->Year = year;
	return movie;
}

Movie* CopyMovie(Movie* movie)
{
	Movie* copiedMovie = new Movie;
	copiedMovie->Name = movie->Name;
	copiedMovie->Genre = movie->Genre;
	copiedMovie->Year = movie->Year;
	copiedMovie->Rating = movie->Rating;
	copiedMovie->DurationMinutes = movie->DurationMinutes;
	return copiedMovie;
}