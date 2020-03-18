#pragma once

#include <iostream>
#include <string>
#include "Enums/Enum.h"

using namespace std;

struct Movie
{
	string Name;
	int DurationMinutes;
	int Year;
	Genre Genre;
	double Rating;

};

Movie* MakeMovie(string name, int DurationMinutes, int year,
	Genre genre, double rating);
Movie* CopyMovie(Movie* movie);
void DemoMovie();