#pragma once
#include <string>
#include "Time_Lab3.h"

using namespace std;

class cFlight
{
private:
	int _number;
	string _departurePoint;
	string _arrivalPoint;
	cTime* _timeOfDeparture;
	cTime* _timeOfArrival;

public:
	cFlight(int number, string departurePoint, string arrivalPoint,
		cTime* timeOfDeparture, cTime* timeOfArrival);
	cFlight();

	void SetNumber(int number);
	void SetPointDeparture(string departurePoint);
	void SetArrivalPoint(string arrivalPoint);
	void SetTimesDepartureArrival(cTime* timeOfDeparture, cTime* timeOfArrival);

	int GetNumber();
	string GetdeparturePoint();
	string GetarrivalPoint();
	cTime* GetTimeOfDeparture();
	cTime* GetTimeOFArrival();
};

