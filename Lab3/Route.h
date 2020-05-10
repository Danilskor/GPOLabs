#pragma once

#include <string>
#include <iostream>

using namespace std;

class Route
{
private:
	int _number;
	int _timeAveregeMinutes;
	int _frequencyMinutes;
	int _stopsCount;
	string* _stops;

public:
	Route();
	Route(int number, int timeAveregeMinutes, int frequencyMinutes,
		int stopsCount, string* stops);
	~Route();

	void SetNumber(int number);
	void SetTimeAvgMin(int timeAveregeMinutes);
	void SetFrequencyMinutes(int frequencyMinutes);
	void SetStops(int stopsCount, string* stops);

	int GetNumber();
	int GettimeAveregeMinutes();
	int GetFrequencyMinutes();
	int GetStopsCount();
	string* GetStops();

	Route* FindStop(string name);

	Route& operator=(const Route& another);
};

