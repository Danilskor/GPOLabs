#pragma once
#include <string>
#include "Time.h"

using namespace std;

class Flight
{
private:
	int _number;
	string _departurePoint;
	string _arrivalPoint;
	Time* _departureTime;
	Time* _arrivalTime;

public:
	Flight(int number, string departurePoint, string arrivalPoint,
		Time* departureTime, Time* arrivalTime);
	Flight();

	void SetNumber(int number);
	void SetPointDeparture(string departurePoint);
	void SetArrivalPoint(string arrivalPoint);
	void SetDepartureAndArrivalTime(Time* departureTime, Time* arrivalTime); // TODO: именование! Порядок слов, союз And

	int GetNumber();
	string GetDeparturePoint();
	string GetArrivalPoint();
	Time* GetDepartureTime();
	Time* GetArrivalTime();
};

