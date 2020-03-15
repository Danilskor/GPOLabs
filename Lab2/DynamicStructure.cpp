#include "Movie.h"
#include "DynamicStructure.h"

using namespace std;

//2.2.6.1
void DemoDynamicFlight()
{
	Flight* flight = new Flight;
	flight->Departure = "Москва";
	flight->Destination = "Санкт-Петербург";
	flight->FlifhtTimeMinutes = 45;
	cout << "Рейс " << flight->Departure << " - " << flight->Destination <<
		", находится в полёте " << flight->FlifhtTimeMinutes << endl;
	delete flight;
}

//2.2.6.2
void DemoDynamicFlights()
{
	Flight* flight = new Flight[4];
	flight[0].Departure = "Москва";
	flight[0].Destination = "Санкт-Петербург";
	flight[0].FlifhtTimeMinutes = 45;

	flight[1].Departure = "Томск";
	flight[1].Destination = "Москва";
	flight[1].FlifhtTimeMinutes = 190;

	flight[2].Departure = "Берлин";
	flight[2].Destination = "Лондон";
	flight[2].FlifhtTimeMinutes = 105;

	flight[3].Departure = "Москва";
	flight[3].Destination = "Барселона";
	flight[3].FlifhtTimeMinutes = 100;

	for (int i = 0; i < 4; i++)
	{
		cout << "Рейс " << i << ' ' << flight[i].Departure <<
			" - " << flight[i].Destination << " находится в полёте " <<
			flight[i].FlifhtTimeMinutes << endl;
	}
	FindShortestFlight(flight, 4);
	delete[] flight;
}

//2.2.6.3
void FindShortestFlight(Flight* flights, int count)
{
	Flight shortestFlight;
	shortestFlight.Departure = flights[0].Departure;
	shortestFlight.Destination = flights[0].Destination;
	shortestFlight.FlifhtTimeMinutes = flights[0].FlifhtTimeMinutes;
	for (int i = 0; i < count; i++)
	{
		if (flights[i].FlifhtTimeMinutes < shortestFlight.FlifhtTimeMinutes)
		{
			shortestFlight.Departure = flights[i].Departure;
			shortestFlight.Destination = flights[i].Destination;
			shortestFlight.FlifhtTimeMinutes = flights[i].FlifhtTimeMinutes;
		}
	}
	cout << "Самый короткий рейс " << shortestFlight.Departure << " - " <<
		shortestFlight.Destination << ", находится в полете " <<
		shortestFlight.FlifhtTimeMinutes << endl;
}

void DemoMovieWithGenre()
{
	Movie* movie1 = new Movie;
	movie1->Genre = Horror;
	movie1->Rating = 5.2;
	movie1->Name = "Оно";
	movie1->Year = 2000;
	movie1->DurationMinutes = 166;

	Movie* movie = MakeMovie("Оно", 64, 1365, Action, 3.2);

	Movie* movies = new Movie[10];
	movies[0] = *MakeMovie("Я", 123, 2020, Comedy, 0.1);
	movies[1] = *MakeMovie("Не", 159, 2036, Thriller, 2.3);
	movies[2] = *MakeMovie("Знаю", 20, 2020, Horror, 5.0);
	movies[3] = *MakeMovie("Так", 90, 2028, BlockBuster, 3.2);
	movies[4] = *MakeMovie("Много", 50, 2078, Action, 10.0);
	movies[5] = *MakeMovie("Фильмов", 94, 1999, Action, 7.6);
	movies[6] = *MakeMovie("Зачем", 36, 1520, Horror, 7.77);
	movies[7] = *MakeMovie("Их", 987, 2013, Comedy, 3.33);
	movies[8] = *MakeMovie("Десять", 143, 2020, Comedy, 2.72);
	movies[9] = *MakeMovie("Штук?", 211, 2007, Comedy, 6.66);

	cout << "Количество комедийных фильмов " << CountMoviesByGenre(movies, 10, Comedy) << endl;

	Movie* bestGenreMovie = FindBestGenreMovie(movies, 10, Horror);
	cout << "Лучший хоррор: " << bestGenreMovie->Name << ",  ";
	WriteGenre(bestGenreMovie->Genre);
	cout  << ", " << bestGenreMovie->Year << ", продолжительность " << bestGenreMovie->DurationMinutes <<
		", рейтинг " << bestGenreMovie->Rating << endl;
	delete movie1;
	delete movie;
}

int CountMoviesByGenre(Movie* movies, int count, Genre findedGenre)
{
	int movieCounter = 0;
	for (int i = 0; i < count; i++)
	{
		if (movies[i].Genre == findedGenre)
		{
			movieCounter++;
		}
	}
	return movieCounter;
}

Movie* FindBestGenreMovie(Movie* movies, int count, Genre findedGenre)
{
	Movie* bestGenreMovie = nullptr;
	double topRating = 0.0;
	for (int i = 0; i < count; i++)
	{
		if (movies[i].Genre == findedGenre && movies[i].Rating > topRating)
		{
			bestGenreMovie = &movies[i];
			topRating = movies[i].Rating;
		}
	}
	return bestGenreMovie;
}