#pragma once

#include <string>
#include <iostream>

using namespace std;

class Route
{
private:
	int _number;
	int _timeAverageMinutes; // TODO: именование! порядок слов
	int _frequencyMinutes;
	int _stopsCount;
	string* _stops;

public:
	Route();
	Route(int number, int timeAverageMinutes, int frequencyMinutes,
		string* stops, int stopsCount);
	~Route();

	void SetNumber(int number);
	void SetTimeAverageMinutes(int timeAverageMinutes); // TODO: именование! порядок слов
	void SetFrequencyMinutes(int frequencyMinutes);
	void SetStops(string* stops, int stopsCount);

	int GetNumber();
	int GetTimeAverageMinutes(); // TODO: именование! порядок слов
	int GetFrequencyMinutes();
	int GetStopsCount();
	string* GetStops();

	Route* FindStops(string name);

	Route& operator=(const Route& another);
};

