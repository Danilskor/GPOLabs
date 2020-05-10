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
		Book newBook(name, year, pages, numberOfAuthors, authors);
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
	cRectangle* rectangles = new cRectangle[rectangelArraySize];
	rectangles[0] = cRectangle(3.1, 5.4, &Point(66.6, -3));
	rectangles[1] = cRectangle(12.1, 14.6, &Point(77.7, -77.7));
	rectangles[2] = cRectangle(2.8, 2.9, &Point(0, 0));
	rectangles[3] = cRectangle(3.9, 9.3, &Point(-23.2, 32.3));
	rectangles[4] = cRectangle(100, 10, &Point(0.1, 0.1));

	for (int i = 0; i < rectangelArraySize; i++)
	{
		cout << "X = " << rectangles[i].GetCentre()->GetX() << "; Y = " <<
			rectangles[i].GetCentre()->GetY() << "; Длина = " <<
			rectangles[i].Getlength() << "; Высота = " <<
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
	cFlight* flights = new cFlight[flightsArraySize];

	flights[0] = cFlight(rand() % 1000000, "Междуреченск", "Томск",
		&cTime(2020, 9, 28, 16, 5), &cTime(2020, 9, 28, 20, 5));

	flights[1] = cFlight(rand() % 1000000, "Томск", "Междуреченск",
		&cTime(2020, 9, 28, 20, 5), &cTime(2020, 9, 29, 0, 5));

	flights[2] = cFlight(rand() % 1000000, "Новокузнецк", "Москва",
		&cTime(2020, 11, 10, 11, 16), &cTime(2020, 7, 22, 22, 10));

	flights[3] = cFlight(rand() % 1000000, "Новосибирск", "Тверь",
		&cTime(2020, 1, 2, 3, 4), &cTime(2020, 9, 8, 7, 6));

	flights[4] = cFlight(rand() % 1000000, "Омск", "Омск",
		&cTime(2020, 6, 6, 6, 6), &cTime(2020, 7, 7, 7, 7));

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

void WriteFlightToConsole(cFlight* flight)
{
	cout << flight->GetNumber() << " " <<
		flight->GetdeparturePoint() << " - "
		<< flight->GetarrivalPoint() << " вылет ";
	WriteTimeToConsole(flight->GetTimeOfDeparture());
	cout << " прибытие ";
	WriteTimeToConsole(flight->GetTimeOFArrival());
}

void WriteTimeToConsole(cTime* time)
{
	cout << time->GetDay() << '.' << time->GetMonth() << '.' <<
		time->GetYear() << ' ' << time->GetHour() << ':' << time->GetMinute();
}

cTime GetFlightTimeMinutes(cFlight* flight)
{
	cTime timeInFlight(0, 0, 0, 0, 0);

	int days = flight->GetTimeOFArrival()->GetDay() -
		flight->GetTimeOfDeparture()->GetDay();

	int hours = flight->GetTimeOFArrival()->GetHour() -
		flight->GetTimeOfDeparture()->GetHour();

	int minutes = flight->GetTimeOFArrival()->GetMinute() -
		flight->GetTimeOfDeparture()->GetMinute();

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
	int timeAveregeMinutes;
	int frequencyMinutes;
	int stopsCount;
	string* stops;
	int arraysSize = 3;
	Route* routes = new Route[arraysSize];

	for (int i = 0; i < arraysSize; i++)
	{
		cout << "Рейс №" << i + 1 << endl;
		ReadRouteFromConsole(number, timeAveregeMinutes, frequencyMinutes, stopsCount,
			stops);
		Route newRoute(number, timeAveregeMinutes, frequencyMinutes, stopsCount,
			stops);
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
	//delete[] stops;
}

void WriteRouteInCounsole(Route& route)
{
	for (int i = 0; i < route.GetStopsCount() - 1; i++)
	{
		cout << route.GetStops()[i] << " - ";
	}
	cout << route.GetStops()[route.GetStopsCount() - 1] << ". ";
	cout << "№" << route.GetNumber() << " продолжительность " << route.GettimeAveregeMinutes() <<
		" мин. " << " частота: " << route.GetFrequencyMinutes() <<
		" мин." << endl;
}

void ReadRouteFromConsole(int& number, int& timeAveregeMinutes,
	int& frequencyMinutes, int& stopsCount, string*& stops)
{
	cout << "Введите количство рейсов: ";
	number = ReadValueInRange<int>(0, INT_MAX);

	cout << "Введите время рейса в минутах:";
	timeAveregeMinutes = ReadValueInRange(1, 60);

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
