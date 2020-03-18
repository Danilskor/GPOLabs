#include "Flight.h"
#include "Movie.h"
#include "Rectangle.h"

using namespace std;

void DemoRectangle()
{
	//2.2.3.1
	Rectanglee rectangle;
	rectangle.Color = "�������";
	rectangle.Length = 5;
	rectangle.Width = 9;

	//2.2.3.2
	Rectanglee rectangleInputValue;
	cout << "������� ��������� ��������������:" << endl;

	cout << "������� ���� ��������������: ";
	getline(cin, rectangleInputValue.Color);

	cout << "������� ����� �������������� (������������� �����): " 
		<< endl << '>';
	cin >> rectangleInputValue.Length;

	cout << "������� ������ �������������� (������������� �����):" 
		<< endl << '>';
	cin >> rectangleInputValue.Width;

	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	cout << "���� ��������������: " << rectangleInputValue.Color 
		<< ", �������: " << rectangleInputValue.Length << 'x' 
		<< rectangleInputValue.Width << endl << endl;

	//2.2.3.3
	Rectanglee* arrayRectangles = new Rectanglee[3];
	arrayRectangles[0].Color = "�����";
	arrayRectangles[0].Length = 12;
	arrayRectangles[0].Width = 3;

	arrayRectangles[1].Color = "�����";
	arrayRectangles[1].Length = 32;
	arrayRectangles[1].Width = 2;

	arrayRectangles[2].Color = "��������";
	arrayRectangles[2].Length = 22;
	arrayRectangles[2].Width = 8;

	for (int i = 0; i < 3; i++)
	{
		cout << "������������� " << i << " ���� - " << arrayRectangles[i].Color 
			<<", ������ - : " << arrayRectangles[i].Length << 'x' 
			<< arrayRectangles[i].Width << endl;
	}
	cout << endl;
	delete[] arrayRectangles;

	//2.2.4.1
	Rectanglee* pointerRectangle = &rectangle;
	cout << "Task_2.2.3.1 �������������:" << endl << "���� " << pointerRectangle->Color 
		<<", ������� " << pointerRectangle->Length << 'x' << pointerRectangle->Width << endl;
	pointerRectangle->Color = "����������";
	pointerRectangle->Length = 13,5;
	pointerRectangle->Width = 11;

	//2.2.4.2
	Rectanglee* secondPointer = &rectangle;
	cout << endl << "����� ������� ���������: " << pointerRectangle 
		<< endl << "����� ������� ���������: " << secondPointer << endl;

	//2.2.5.4
	cout << endl << "Task_2.2.5.4." << endl;
	WriteRectangle(rectangle);
	WriteRectangle(rectangleInputValue);
	Exchange(rectangle, rectangleInputValue);
	cout << "����� ������������:" << endl;
	WriteRectangle(rectangle);
	WriteRectangle(rectangleInputValue);
}

void DemoFligth()
{
	//2.2.3.1
	Flight flight;
	flight.Destination = "����";
	flight.Departure = "������";
	flight.FlightTimeMinutes = 255;

	//2.2.3.2
	Flight flightKeyInput;
	cout << endl << "������� �������� �����: " << endl;
	cout << "����� ������ ";
	getline(cin, flightKeyInput.Departure);
	cout << "����� ����������: ";
	getline(cin, flightKeyInput.Destination);
	cout <<"����� ������ (� �������): ";
	cin >> flightKeyInput.FlightTimeMinutes;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cout << "���� " << flightKeyInput.Departure <<
		" - " << flightKeyInput.Destination << " ��������� � ����� " <<
		flightKeyInput.FlightTimeMinutes << " �����(�)" << endl;

	//2.2.3.3
	Flight* arrayFilghts = new Flight[3];
	arrayFilghts[0].Departure = "�����";
	arrayFilghts[0].Destination = "��������";
	arrayFilghts[0].FlightTimeMinutes = 200;

	arrayFilghts[1].Departure = "��������";
	arrayFilghts[1].Destination = "�����";
	arrayFilghts[1].FlightTimeMinutes = 200;

	arrayFilghts[2].Departure = "�����������";
	arrayFilghts[2].Destination = "������������";
	arrayFilghts[2].FlightTimeMinutes = 7;

	for (int i = 0; i < 3; i++)
	{
		cout << "���� " << i << ' ' << arrayFilghts[i].Departure <<
			" - " << arrayFilghts[i].Destination << " ��������� � ����� " <<
			arrayFilghts[i].FlightTimeMinutes << " �����(�)" << endl;
	}
	delete[] arrayFilghts;

	//2.2.4.3
	Flight* pointerFlight = &flight;
	cout << "2.2.3.1 ���� " << pointerFlight->Departure <<
		" - " << pointerFlight->Destination << " ��������� � ����� " <<
		pointerFlight->FlightTimeMinutes << " �����(�)" << endl;
	pointerFlight->Destination = "������";
	pointerFlight->Departure = "���-������";
	pointerFlight->FlightTimeMinutes = 322;

	Flight* secondPointer = &flight;
	cout << endl << "����� ������� ���������: " << pointerFlight << endl <<
		"����� ������� ���������: " << secondPointer << endl;
}

void DemoMovie()
{
	//2.2.3.1
	Movie movie;
	movie.Genre = Drama;
	movie.DurationMinutes = 120;
	movie.Name = "������";
	movie.Rating = 5.6;
	movie.Year = 2019;

	//2.2.3.2
	Movie movieKeyboardInput;
	cout << endl << "������� ��������� ������:" << endl;

	cout << "������� ��������: ";
	getline(cin, movieKeyboardInput.Name);

	cout << "������� ��� �������: ";
	cin >> movieKeyboardInput.Year;

	cout <<"������� �������: ";
	cin >> movieKeyboardInput.Rating;

	cout << "������� ����: ";
	movieKeyboardInput.Genre = ReadGenre();

	cout << "������� ������������ ������ (� �������): ";
	cin >> movieKeyboardInput.DurationMinutes;

	cout << " ����� " << movieKeyboardInput.Name << ", ";
	WriteGenre(movieKeyboardInput.Genre);

	cout << ", ��� " << movieKeyboardInput.Year <<
		", ����������������� " << movieKeyboardInput.DurationMinutes
		<< ", ������� " << movieKeyboardInput.Rating << endl;

	//2.2.3.3
	Movie* arrayMovies = new Movie[3];
	arrayMovies[0].Name = "���";
	arrayMovies[0].Genre = Horror;
	arrayMovies[0].DurationMinutes = 178;
	arrayMovies[0].Rating = 8.3;
	arrayMovies[0].Year = 2013;

	arrayMovies[1].Name = "����";
	arrayMovies[1].Genre = Horror;
	arrayMovies[1].DurationMinutes = 138;
	arrayMovies[1].Rating = 7.6;
	arrayMovies[1].Year = 2010;

	arrayMovies[2].Name = "������� �������� �������";
	arrayMovies[2].Genre = BlockBuster;
	arrayMovies[2].DurationMinutes = 210;
	arrayMovies[2].Rating = 9.1;
	arrayMovies[2].Year = 1999;

	for (int i = 0; i < 3; i++)
	{
		cout << i << " ����� " << arrayMovies[i].Name << ", ";
		WriteGenre(arrayMovies[i].Genre);
		cout << ", ��� " << arrayMovies[i].Year << ", ������������ " <<
			arrayMovies[i].DurationMinutes
			<< ", ������� " << arrayMovies[i].Rating << endl;
	}
	delete[] arrayMovies;

	//2.2.3.4
	Movie* pointerMovie = &movie;
	cout << " ����� " << pointerMovie->Name << ", ";
	WriteGenre(pointerMovie->Genre);
	cout << ", ��� " << pointerMovie->Year << ", ����������������� " << pointerMovie->DurationMinutes
		<< ", ������ " << pointerMovie->Rating << endl;
	pointerMovie->Name = "Ford v Ferrari";
	pointerMovie->Genre = Action;
	pointerMovie->DurationMinutes = 152;
	pointerMovie->Rating = 9.4;
	pointerMovie->Year = 2019;

	Movie* secondPointer = &movie;
	cout << endl << "������ ������� ���������: " << pointerMovie << endl <<
		"������ ������� ���������: " << secondPointer << endl;
}

//2.2.4.4
void WrongPointers()
{
	Flight flight;
	Movie movie;
	Flight* pFlight = &flight;
	Movie* pMovie = &movie;
}