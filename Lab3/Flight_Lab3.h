#pragma once
#include <string>
#include "Time_Lab3.h"
// TODO: имя файла
using namespace std;
// TODO: имя класса
class cFlight
{
private:
	int _number;
	string _departurePoint;
	string _arrivalPoint;
	cTime* _timeOfDeparture; // TODO: неправильное образование родительного падежа в англ. Переименовать без of
	cTime* _timeOfArrival; // TODO: см. выше

public:
	cFlight(int number, string departurePoint, string arrivalPoint,
		cTime* timeOfDeparture, cTime* timeOfArrival); // TODO: см. выше
	cFlight();

	void SetNumber(int number);
	void SetPointDeparture(string departurePoint);
	void SetArrivalPoint(string arrivalPoint);
	void SetTimesDepartureArrival(cTime* timeOfDeparture, cTime* timeOfArrival); // TODO: см. выше

	int GetNumber();
	string GetdeparturePoint(); // TODO: именование
	string GetarrivalPoint(); // TODO: именование
	cTime* GetTimeOfDeparture(); // TODO: of
	cTime* GetTimeOFArrival(); // TODO: Of, именование
};

