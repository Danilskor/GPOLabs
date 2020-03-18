#include "Movie.h"
#include "DynamicStructure.h"

using namespace std;

//2.2.6.1
void DemoDynamicFlight()
{
	Flight* flight = new Flight;
	flight->Departure = "Ìîñêâà";
	flight->Destination = "Ñàíêò-Ïåòåðáóðã";
	flight->FlightTimeMinutes = 45;
	cout << "Ðåéñ " << flight->Departure << " - " << flight->Destination <<
		", íàõîäèòñÿ â ïîë¸òå " << flight->FlightTimeMinutes << endl;
	delete flight;
}

//2.2.6.2
void DemoDynamicFlights()
{
	// TODO: если массив, то в множественном числе
	Flight* flight = new Flight[4];
	flight[0].Departure = "Ìîñêâà";
	flight[0].Destination = "Ñàíêò-Ïåòåðáóðã";
	flight[0].FlightTimeMinutes = 45;

	flight[1].Departure = "Òîìñê";
	flight[1].Destination = "Ìîñêâà";
	flight[1].FlightTimeMinutes = 190;

	flight[2].Departure = "Áåðëèí";
	flight[2].Destination = "Ëîíäîí";
	flight[2].FlightTimeMinutes = 105;

	flight[3].Departure = "Ìîñêâà";
	flight[3].Destination = "Áàðñåëîíà";
	flight[3].FlightTimeMinutes = 100;

	for (int i = 0; i < 4; i++)
	{
		cout << "Ðåéñ " << i << ' ' << flight[i].Departure <<
			" - " << flight[i].Destination << " íàõîäèòñÿ â ïîë¸òå " <<
			flight[i].FlightTimeMinutes << endl;
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
	cout << "Ñàìûé êîðîòêèé ðåéñ " << shortestFlight.Departure << " - " <<
		shortestFlight.Destination << ", íàõîäèòñÿ â ïîëåòå " <<
		shortestFlight.FlightTimeMinutes << endl;
}

void DemoMovieWithGenre()
{
	Movie* movie1 = new Movie;
	movie1->Genre = Horror;
	movie1->Rating = 5.2;
	movie1->Name = "Îíî";
	movie1->Year = 2000;
	movie1->DurationMinutes = 166;

	Movie* movie = MakeMovie("Îíî", 64, 1365, Action, 3.2);

	Movie* movies = new Movie[10];
	movies[0] = *MakeMovie("ß", 123, 2020, Comedy, 0.1);
	movies[1] = *MakeMovie("Íå", 159, 2036, Thriller, 2.3);
	movies[2] = *MakeMovie("Çíàþ", 20, 2020, Horror, 5.0);
	movies[3] = *MakeMovie("Òàê", 90, 2028, BlockBuster, 3.2);
	movies[4] = *MakeMovie("Ìíîãî", 50, 2078, Action, 10.0);
	movies[5] = *MakeMovie("Ôèëüìîâ", 94, 1999, Action, 7.6);
	movies[6] = *MakeMovie("Çà÷åì", 36, 1520, Horror, 7.77);
	movies[7] = *MakeMovie("Èõ", 987, 2013, Comedy, 3.33);
	movies[8] = *MakeMovie("Äåñÿòü", 143, 2020, Comedy, 2.72);
	movies[9] = *MakeMovie("Øòóê?", 211, 2007, Comedy, 6.66);

	cout << "Êîëè÷åñòâî êîìåäèéíûõ ôèëüìîâ " << CountMoviesByGenre(movies, 10, Comedy) << endl;

	Movie* bestGenreMovie = FindBestGenreMovie(movies, 10, Horror);
	cout << "Ëó÷øèé õîððîð: " << bestGenreMovie->Name << ",  ";
	WriteGenre(bestGenreMovie->Genre);
	cout  << ", " << bestGenreMovie->Year << ", ïðîäîëæèòåëüíîñòü " << bestGenreMovie->DurationMinutes <<
		", ðåéòèíã " << bestGenreMovie->Rating << endl;
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