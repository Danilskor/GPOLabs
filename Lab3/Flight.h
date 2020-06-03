#pragma once
#include <string>
#include "Time.h"
// TODO: имя файла
using namespace std;
// TODO: имя класса
class Flight
{
private:
	int _number;
	string _departurePoint;
	string _arrivalPoint;
	Time* _departureTime; // TODO: неправильное образование родительного падежа в англ. Переименовать без of
	Time* _arrivalTime; // TODO: см. выше

public:
	Flight(int number, string departurePoint, string arrivalPoint,
		Time* departureTime, Time* arrivalTime); // TODO: см. выше
	Flight();

	void SetNumber(int number);
	void SetPointDeparture(string departurePoint);
	void SetArrivalPoint(string arrivalPoint);
	void SetTimesDepartureArrival(Time* departureTime, Time* arrivalTime); // TODO: см. выше

	int GetNumber();
	string GetDeparturePoint(); // TODO: именование
	string GetArrivalPoint(); // TODO: именование
	Time* GetDepartureTime(); // TODO: of
	Time* GetArrivalTime(); // TODO: Of, именование
};

