#include "Lab3_execute.h"

using std::cout;

void Lab3()
{
	DemoBook();
	system("pause");

	DemoRectangleWithPoint();
	system("pause");

	DemoFlightWithTime();
	system("pause");

	DemoRoute();
	system("pause");

	DemoBand();
}

void DemoBook()
{
	string name;
	int year;
	int numberOfAuthors;
	int pages;
	string* authors;
	int arraysSize = 1;
	Book* books = new Book[arraysSize];

	for (int i = 0; i < arraysSize; i++)
	{
		cout << "Книга №" << i + 1 << endl;
		ReadBookFromConsole(name, year, pages, numberOfAuthors, authors);
		Book newBook(name, year, pages, authors, numberOfAuthors);
		books[i] = newBook;
	}

	for (int i = 0; i < arraysSize; i++)
	{
		WriteBookInConsole(books[i]);
	}

	cout << endl << "Для поиска книги, введите имя автора: ";
	cin.clear();

	string* author = new string;
	getline(cin, *author);
	Book* book = FindBookByAuthor(books, arraysSize, *author);

	if (book != nullptr)
	{
		cout << "Книга автора: ";
		WriteBookInConsole(*book);
	}
	else
	{
		cout << "Нет книги с таким автором.";
	}

	delete[] books;
	delete author;
}

void WriteBookInConsole(Book& book)
{
	for (int i = 0; i < book.GetAutorsCount() - 1; i++)
	{
		cout << book.GetAuthors()[i] << ", ";
	}
	cout << book.GetAuthors()[book.GetAutorsCount() - 1] << " ";
	cout << book.GetName() << ". ";
	cout << book.GetYear() << ". ";
	cout << "- " << book.GetPages() << "c." << endl;
}

void ReadBookFromConsole(string& name, int& year, int& pages, int&
	authorsCount, string*& authors)
{
	cout << "Введите название книги:";
	cin.clear();
	getline(cin, name);

	cout <<"Введите год издания:";
	year = ReadValueInRange(1, 2020);

	cout <<"Введите количество страниц:";
	pages = ReadValueInRange(1, SHRT_MAX);

	cout <<"Введите количество авторов:";
	authorsCount = ReadValueInRange(1, 10);
	authors = new string[authorsCount];

	for (int i = 0; i < authorsCount; i++)
	{
		cin.clear();
		cout << "Введите автора №" << i + 1 << ":";
		getline(cin, authors[i]);
	}
	cout << endl;
}

Book* FindBookByAuthor(Book* books, int booksCount, string author)
{
	Book* book;
	for (int i = 0; i < booksCount; i++)
	{
		if ((book = books[i].FindAuthor(author)) != nullptr)
		{
			return book;
		}
	}
	return nullptr;
}

void DemoRectangleWithPoint()
{
	int rectangelArraySize = 5;
	Rectangle* rectangles = new Rectangle[rectangelArraySize];
	rectangles[0] = Rectangle(3.1, 5.4, &Point(66.6, -3));
	rectangles[1] = Rectangle(12.1, 14.6, &Point(77.7, -77.7));
	rectangles[2] = Rectangle(2.8, 2.9, &Point(0, 0));
	rectangles[3] = Rectangle(3.9, 9.3, &Point(-23.2, 32.3));
	rectangles[4] = Rectangle(100, 10, &Point(0.1, 0.1));

	for (int i = 0; i < rectangelArraySize; i++)
	{
		cout << "X = " << rectangles[i].GetCentre()->GetX() << "; Y = " <<
			rectangles[i].GetCentre()->GetY() << "; Длина = " <<
			rectangles[i].GetLength() << "; Высота = " <<
			rectangles[i].GetWidth() << endl;
	}

	double sumX = 0;
	double sumY = 0;
	for (int i = 0; i < rectangelArraySize; i++)
	{
		sumX = sumX + rectangles[i].GetCentre()->GetX();
		sumY = sumY + rectangles[i].GetCentre()->GetY();
	}
	cout << "Xcenter = " << sumX / 5 << "; Ycenter = " << sumY / 5;

	delete[] rectangles;
}

void DemoFlightWithTime()
{
	int flightsArraySize = 5;
	Flight* flights = new Flight[flightsArraySize];

	flights[0] = Flight(rand() % 1000000, "Междуреченск", "Томск",
		&Time(2020, 9, 28, 16, 5), &Time(2020, 9, 28, 20, 5));

	flights[1] = Flight(rand() % 1000000, "Томск", "Междуреченск",
		&Time(2020, 9, 28, 20, 5), &Time(2020, 9, 29, 0, 5));

	flights[2] = Flight(rand() % 1000000, "Новокузнецк", "Москва",
		&Time(2020, 11, 10, 11, 16), &Time(2020, 7, 22, 22, 10));

	flights[3] = Flight(rand() % 1000000, "Новосибирск", "Тверь",
		&Time(2020, 1, 2, 3, 4), &Time(2020, 9, 8, 7, 6));

	flights[4] = Flight(rand() % 1000000, "Омск", "Омск",
		&Time(2020, 6, 6, 6, 6), &Time(2020, 7, 7, 7, 7));

	for (int i = 0; i < flightsArraySize; i++)
	{
		WriteFlightToConsole(&flights[i]);
		cout << endl;
	}
	cout << endl;

	cout << "Рейс ";
	WriteFlightToConsole(&flights[1]);
	cout << " время полёта: ";
	WriteTimeToConsole(&GetFlightTimeMinutes(&flights[1]));
	cout << endl;

	delete[] flights;
}

void WriteFlightToConsole(Flight* flight)
{
	cout << flight->GetNumber() << " " <<
		flight->GetDeparturePoint() << " - "
		<< flight->GetArrivalPoint() << " вылет ";
	WriteTimeToConsole(flight->GetDepartureTime());
	cout << " прибытие ";
	WriteTimeToConsole(flight->GetArrivalTime());
}

void WriteTimeToConsole(Time* time)
{
	cout << time->GetDay() << '.' << time->GetMonth() << '.' <<
		time->GetYear() << ' ' << time->GetHour() << ':' << time->GetMinute();
}

Time GetFlightTimeMinutes(Flight* flight)
{
	Time timeInFlight(0, 0, 0, 0, 0);

	int days = flight->GetArrivalTime()->GetDay() -
		flight->GetDepartureTime()->GetDay();

	int hours = flight->GetArrivalTime()->GetHour() -
		flight->GetDepartureTime()->GetHour();

	int minutes = flight->GetArrivalTime()->GetMinute() -
		flight->GetDepartureTime()->GetMinute();

	if (days != 0)
	{
		hours = MAX_HOUR + hours;
		minutes = MAX_MINUTES - minutes;
		if (minutes >= MAX_MINUTES)
		{
			hours++;
			minutes = minutes - 60;
		}
		if (hours >= MAX_HOUR)
		{
			days = 1;
			hours = hours - MAX_HOUR;
			timeInFlight.SetDay(days);
			timeInFlight.SetHour(hours);
			timeInFlight.SetMinute(minutes);
			return timeInFlight;
		}
		timeInFlight.SetHour(hours);
		timeInFlight.SetMinute(minutes);
		return timeInFlight;
	}
	else
	{
		timeInFlight.SetHour(hours);
		timeInFlight.SetMinute(minutes);
		return timeInFlight;
	}
}

void DemoRoute()
{
	int number;
	int timeAverageMinutes;
	int frequencyMinutes;
	int stopsCount;
	string* stops;
	int arraysSize = 3;
	Route* routes = new Route[arraysSize];

	for (int i = 0; i < arraysSize; i++)
	{
		cout << "Рейс №" << i + 1 << endl;
		ReadRouteFromConsole(number, timeAverageMinutes, frequencyMinutes, stops,
			stopsCount);
		Route newRoute(number, timeAverageMinutes, frequencyMinutes, stops,
			stopsCount);
		routes[i] = newRoute;
	}

	for (int i = 0; i < arraysSize; i++)
	{
		WriteRouteInCounsole(routes[i]);
	}

	cout << endl << "Введите название остановки: ";
	string name;
	cin.clear();

	getline(cin, name);
	Route* route = FindRouteByStop(routes, arraysSize, name);

	if (route != nullptr)
	{
		cout << "Рейс с данной остановкой: ";
		WriteRouteInCounsole(*route);
	}
	else
	{
		cout << "Нет рейса с такой остановкой." << endl;
	}

	delete[] routes;
}

void WriteRouteInCounsole(Route& route)
{
	for (int i = 0; i < route.GetStopsCount() - 1; i++)
	{
		cout << route.GetStops()[i] << " - ";
	}
	cout << route.GetStops()[route.GetStopsCount() - 1] << ". ";
	cout << "№" << route.GetNumber() << " продолжительность " << route.GetTimeAverageMinutes() <<
		" мин. " << " частота: " << route.GetFrequencyMinutes() <<
		" мин." << endl;
}

void ReadRouteFromConsole(int& number, int& timeAverageMinutes,
	int& frequencyMinutes, string*& stops, int& stopsCount)
{
	cout << "Введите количство рейсов: ";
	number = ReadValueInRange<int>(0, INT_MAX);

	cout << "Введите время рейса в минутах:";
	timeAverageMinutes = ReadValueInRange(1, 60);

	cout << "Введите частоту следования маршрута в минутах:";
	frequencyMinutes = ReadValueInRange(1, 100);

	cout << "Введите количество остановок рейса:";
	stopsCount = ReadValueInRange(1, 10);

	stops = new string[stopsCount];
	for (int i = 0; i < stopsCount; i++)
	{
		cout << "Введите название остановки №" << i + 1 << ": ";
		cin.clear();
		getline(cin, stops[i]);
	}
}

Route* FindRouteByStop(Route* routes, int routesCount, string stopName)
{
	Route* route;
	for (int i = 0; i < routesCount; i++)
	{
		if ((route = routes[i].FindStop(stopName)) != nullptr)
		{
			return route;
		}
	}
	return nullptr;
}

void DemoBand()
{
	int firstSongsArraySize = 3;
	Song* songsFirst = new Song[firstSongsArraySize];

	songsFirst[0] = Song(255, "Say it", Rock);
	songsFirst[1] = Song(234, "Друзья", Pop);
	songsFirst[2] = Song(457, "keep talking", Dubstep);


	int secondSongsArraySize = 4;
	Song* songsSecond = new Song[secondSongsArraySize];

	songsSecond[0] = Song(142, "Mutter", Rock);
	songsSecond[1] = Song(423, "Genesis", Pop);
	songsSecond[2] = Song(453, "Aaa", Jazz);
	songsSecond[3] = Song(453, "Ludens", Rock);


	int thirdSongsArraySize = 5;
	Song* songsThird = new Song[thirdSongsArraySize];

	songsThird[0] = Song(453, "Blure", Blues);
	songsThird[1] = Song(456, "Special Needs", Rock);
	songsThird[2] = Song(356, "Blues", Blues);
	songsThird[3] = Song(321, "Gods", Jazz);
	songsThird[4] = Song(251, "Trip Switch", Dubstep);

	int albumArraySize = 3;
	Album* albums = new Album[3];

	albums[0].SetName("Super");
	albums[0].SetYear(1999);
	albums[0].SetSong(songsFirst, 3);

	albums[1].SetName("Massive");
	albums[1].SetYear(2001);
	albums[1].SetSong(songsSecond, 4);

	albums[2].SetName("Black hole");
	albums[2].SetYear(2019);
	albums[2].SetSong(songsThird, 5);

	Band band("30 yeconds", "Описание", albums, 3);

	WriteBandInfoToConsole(&band);

	int songCount = 0;
	cout << endl << "Все песни:" << endl;
	Song** allSongs = band.GetAllSongs(songCount);
	for (int i = 0; i < songCount; i++)
	{
		WriteSongToConsole(allSongs[i]);
		cout << endl;
	}

	cout << endl << "Рок: " << endl;
	Song** allGenreSongs = band.GetAllGenreSongs(songCount, Rock);
	for (int i = 0; i < songCount; i++)
	{
		WriteSongToConsole(allGenreSongs[i]);
		cout << endl;
	}

	cout << endl << "Поиск трека <<Друзья>>: " << endl;
	WriteSongToConsole(band.FindSong("Друзья"));

	cout << endl << "Поиск альбома с песней <<Друзья>>: " << endl;
	WriteAlbumToConsole(band.FindAlbumSong("Друзья"));
	cout << endl;

	delete[] songsFirst;
	delete[] songsSecond;
	delete[] songsThird;
}

void WriteBandInfoToConsole(Band* band)
{
	cout << "Группа " << band->GetName() << endl;
	for (int i = 0; i < band->GetAlbumsCount(); i++)
	{
		WriteAlbumToConsole(&band->GetAlbum()[i]);
	}
}

void WriteSongToConsole(Song* songs)
{
	cout << "\"" << songs->GetName() << "\"" << " жанр ";
	WriteSongGenreToConsole(songs->GetGenre());
	cout << " продолжительность: " << songs->GetDurationSeconds();
}

void WriteSongsToConsole(Song* songs, int songCount)
{
	for (int i = 0; i < songCount; i++)
	{
		WriteSongToConsole(&songs[i]);
		cout << endl;
	}
}

void WriteAlbumToConsole(Album* albums)
{
	cout << "Альбом ";
	cout << albums->GetName();
	cout << endl;
	WriteSongsToConsole(albums->GetSong(),
		albums->GetSongsCount());
	cout << endl;
}
