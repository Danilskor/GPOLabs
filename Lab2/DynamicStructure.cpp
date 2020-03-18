#include "Movie.h"
#include "DynamicStructure.h"

using namespace std;

//2.2.6.1
void DemoDynamicFlight()
{
	Flight* flight = new Flight;
	flight->Departure = "Москва";
	flight->Destination = "Санкт-Петербург";
	flight->FlightTimeMinutes = 45;
	cout << "Рейс " << flight->Departure << " - " << flight->Destination <<
		", находится в полёте " << flight->FlightTimeMinutes << endl;
	delete flight;
}

//2.2.6.2
void DemoDynamicFlights()
{
	// TODO: если массив, то в множественном числе
	Flight* flights = new Flight[4];
	flights[0].Departure = "Москва";
	flights[0].Destination = "Санкт-Петербург";
	flights[0].FlightTimeMinutes = 45;

	flights[1].Departure = "Томск";
	flights[1].Destination = "Москва";
	flights[1].FlightTimeMinutes = 190;

	flights[2].Departure = "Берлин";
	flights[2].Destination = "Лондон";
	flights[2].FlightTimeMinutes = 105;

	flights[3].Departure = "Москва";
	flights[3].Destination = "Барселона";
	flights[3].FlightTimeMinutes = 100;

	for (int i = 0; i < 4; i++)
	{
		cout << "Рейс " << i << ' ' << flights[i].Departure <<
			" - " << flights[i].Destination << " находится в полёте " <<
			flights[i].FlightTimeMinutes << endl;
	}
	FindShortestFlight(flights, 4);
	delete[] flights;
}

//2.2.6.3
void FindShortestFlight(Flight* flights, int count)
{
	Flight shortestFlight;
	shortestFlight.Departure = flights[0].Departure;
	shortestFlight.Destination = flights[0].Destination;
	shortestFlight.FlightTimeMinutes = flights[0].FlightTimeMinutes;
	for (int i = 0; i < count; i++)
	{
		if (flights[i].FlightTimeMinutes < shortestFlight.FlightTimeMinutes)
		{
			shortestFlight.Departure = flights[i].Departure;
			shortestFlight.Destination = flights[i].Destination;
			shortestFlight.FlightTimeMinutes = flights[i].FlightTimeMinutes;
		}
	}
	cout << "Самый короткий рейс " << shortestFlight.Departure << " - " <<
		shortestFlight.Destination << ", находится в полете " <<
		shortestFlight.FlightTimeMinutes << endl;
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
	delete[] movies;
	// TODO: утечка памяти
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