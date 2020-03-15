#pragma once

#include "Flight.h"
#include "Movie.h"

//2.2.6
void DemoDynamicFlight();
void DemoDynamicFlights();
void FindShortestFlight(Flight* flights, int count);

//2.2.9
void DemoMovieWithGenre();
int CountMoviesByGenre(Movie* movies, int count, Genre findedGenre);
Movie* FindBestGenreMovie(Movie* movies, int count, Genre findedGenre);