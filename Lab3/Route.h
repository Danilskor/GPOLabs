#pragma once

#include <string>
#include <iostream>

using namespace std;

class Route
{
private:
	int _number;
	int _timeAverageMinutes; 
	int _frequencyMinutes;
	int _stopsCount;
	string* _stops;

public:
	Route();
	Route(int number, int timeAverageMinutes, int frequencyMinutes, 
		int stopsCount, string* stops);
	~Route();

	void SetNumber(int number);
	void SetTimeAverageMinutes(int timeAverageMinutes); 
	void SetFrequencyMinutes(int frequencyMinutes);
	void SetStops(string* stops, int stopsCount);

	int GetNumber();
	int GetTimeAverageMinutes();
	int GetFrequencyMinutes();
	int GetStopsCount();
	string* GetStops();

	Route* FindStop(string name);

	Route& operator=(const Route& another);
};

