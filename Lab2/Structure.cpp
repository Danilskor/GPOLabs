#include "Flight.h"
#include "Movie.h"
#include "Square.h"

using namespace std;

void DemoSquare()
{
	//2.2.3.1
	Square square;
	square.Color = "Красный";
	square.Length = 5;
	square.Width = 9;

	//2.2.3.2
	Square squareInputValue;
	cout << "Введите параметры прямоугольника:" << endl;

	cout << "Введите цвет прямоугольника: ";
	getline(cin, squareInputValue.Color);

	cout << "Введите длину прямоугольника (положительное число): " 
		<< endl << '>';
	cin >> squareInputValue.Length;

	cout << "Введите ширину прямоугольника (положительное число):" 
		<< endl << '>';
	cin >> squareInputValue.Width;

	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	cout << "Цвет прямоугольника: " << squareInputValue.Color 
		<< ", размеры: " << squareInputValue.Length << 'x' 
		<< squareInputValue.Width << endl << endl;

	//2.2.3.3
	Square* arraySquares = new Square[3];
	arraySquares[0].Color = "Белый";
	arraySquares[0].Length = 12;
	arraySquares[0].Width = 3;

	arraySquares[1].Color = "Синий";
	arraySquares[1].Length = 32;
	arraySquares[1].Width = 2;

	arraySquares[2].Color = "Крассный";
	arraySquares[2].Length = 22;
	arraySquares[2].Width = 8;

	for (int i = 0; i < 3; i++)
	{
		cout << "Прямоугольник " << i << " цвет - " << arraySquares[i].Color 
			<<", размер - : " << arraySquares[i].Length << 'x' 
			<< arraySquares[i].Width << endl;
	}
	cout << endl;
	delete[] arraySquares;

	//2.2.4.1
	Square* pointerSquare = &square;
	cout << "Task_2.2.3.1 прямоугольник:" << endl << "Цвет " << pointerSquare->Color 
		<<", размеры " << pointerSquare->Length << 'x' << pointerSquare->Width << endl;
	pointerSquare->Color = "Фиолетовый";
	pointerSquare->Length = 13,5;
	pointerSquare->Width = 11;

	//2.2.4.2
	Square* secondPointer = &square;
	cout << endl << "Адрес первого указателя: " << pointerSquare 
		<< endl << "Адрес второго указателя: " << secondPointer << endl;

	//2.2.5.4
	cout << endl << "Task_2.2.5.4." << endl;
	WriteSquare(square);
	WriteSquare(squareInputValue);
	Exchange(square, squareInputValue);
	cout << "После перестановки:" << endl;
	WriteSquare(square);
	WriteSquare(squareInputValue);
}

void DemoFligth()
{
	//2.2.3.1
	Flight flight;
	flight.Destination = "Тыва";
	flight.Departure = "Лондон";
	flight.FlightTimeMinutes = 255;

	//2.2.3.2
	Flight flightKeyInput;
	cout << endl << "Введите праметры рейса: " << endl;
	cout << "Пункт вылета ";
	getline(cin, flightKeyInput.Departure);
	cout << "Пункт назначения: ";
	getline(cin, flightKeyInput.Destination);
	cout <<"Время полета (в минутах): ";
	cin >> flightKeyInput.FlightTimeMinutes;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cout << "Рейс " << flightKeyInput.Departure <<
		" - " << flightKeyInput.Destination << " находится в полёте " <<
		flightKeyInput.FlightTimeMinutes << " минут(ы)" << endl;

	//2.2.3.3
	Flight* arrayFilghts = new Flight[3];
	arrayFilghts[0].Departure = "Томск";
	arrayFilghts[0].Destination = "Кемерово";
	arrayFilghts[0].FlightTimeMinutes = 200;

	arrayFilghts[1].Departure = "Кемерово";
	arrayFilghts[1].Destination = "Томск";
	arrayFilghts[1].FlightTimeMinutes = 200;

	arrayFilghts[2].Departure = "Новокузнецк";
	arrayFilghts[2].Destination = "Междуреченск";
	arrayFilghts[2].FlightTimeMinutes = 7;

	for (int i = 0; i < 3; i++)
	{
		cout << "Рейс " << i << ' ' << arrayFilghts[i].Departure <<
			" - " << arrayFilghts[i].Destination << " находится в полёте " <<
			arrayFilghts[i].FlightTimeMinutes << " минут(ы)" << endl;
	}
	delete[] arrayFilghts;

	//2.2.4.3
	Flight* pointerFlight = &flight;
	cout << "2.2.3.1 Рейс " << pointerFlight->Departure <<
		" - " << pointerFlight->Destination << " находится в полёте " <<
		pointerFlight->FlightTimeMinutes << " минут(ы)" << endl;
	pointerFlight->Destination = "Астана";
	pointerFlight->Departure = "Нур-Султан";
	pointerFlight->FlightTimeMinutes = 322;

	Flight* secondPointer = &flight;
	cout << endl << "Адрес первого указателя: " << pointerFlight << endl <<
		"Адрес второго указателя: " << secondPointer << endl;
}

void DemoMovie()
{
	//2.2.3.1
	Movie movie;
	movie.Genre = Drama;
	movie.DurationMinutes = 120;
	movie.Name = "Джокер";
	movie.Rating = 5.6;
	movie.Year = 2019;

	//2.2.3.2
	Movie movieKeyboardInput;
	cout << endl << "Введите параметры фильма:" << endl;

	cout << "Введите название: ";
	getline(cin, movieKeyboardInput.Name);

	cout << "Введите год выпуска: ";
	cin >> movieKeyboardInput.Year;

	cout <<"Введите рейтинг: ";
	cin >> movieKeyboardInput.Rating;

	cout << "Введите жанр: ";
	movieKeyboardInput.Genre = ReadGenre();

	cout << "Введите длительность фильма (в минутах): ";
	cin >> movieKeyboardInput.DurationMinutes;

	cout << " Фильм " << movieKeyboardInput.Name << ", ";
	WriteGenre(movieKeyboardInput.Genre);

	cout << ", год " << movieKeyboardInput.Year <<
		", продолжительность " << movieKeyboardInput.DurationMinutes
		<< ", рейтинг " << movieKeyboardInput.Rating << endl;

	//2.2.3.3
	Movie* arrayMovies = new Movie[3];
	arrayMovies[0].Name = "Мне";
	arrayMovies[0].Genre = Horror;
	arrayMovies[0].DurationMinutes = 178;
	arrayMovies[0].Rating = 8.3;
	arrayMovies[0].Year = 2013;

	arrayMovies[1].Name = "Лень";
	arrayMovies[1].Genre = Horror;
	arrayMovies[1].DurationMinutes = 138;
	arrayMovies[1].Rating = 7.6;
	arrayMovies[1].Year = 2010;

	arrayMovies[2].Name = "Гуглить названия фильмов";
	arrayMovies[2].Genre = BlockBuster;
	arrayMovies[2].DurationMinutes = 210;
	arrayMovies[2].Rating = 9.1;
	arrayMovies[2].Year = 1999;

	for (int i = 0; i < 3; i++)
	{
		cout << i << " Фильм " << arrayMovies[i].Name << ", ";
		WriteGenre(arrayMovies[i].Genre);
		cout << ", год " << arrayMovies[i].Year << ", длительность " <<
			arrayMovies[i].DurationMinutes
			<< ", рейтинг " << arrayMovies[i].Rating << endl;
	}
	delete[] arrayMovies;

	//2.2.3.4
	Movie* pointerMovie = &movie;
	cout << " Фильм " << pointerMovie->Name << ", ";
	WriteGenre(pointerMovie->Genre);
	cout << ", год " << pointerMovie->Year << ", продолжительность " << pointerMovie->DurationMinutes
		<< ", реётинг " << pointerMovie->Rating << endl;
	pointerMovie->Name = "Ford v Ferrari";
	pointerMovie->Genre = Action;
	pointerMovie->DurationMinutes = 152;
	pointerMovie->Rating = 9.4;
	pointerMovie->Year = 2019;

	Movie* secondPointer = &movie;
	cout << endl << "Адресс первого указателя: " << pointerMovie << endl <<
		"Адресс второго указателя: " << secondPointer << endl;
}

//2.2.4.4
void WrongPointers()
{
	Flight flight;
	Movie movie;
	Flight* pFlight = &flight;
	Movie* pMovie = &movie;
}