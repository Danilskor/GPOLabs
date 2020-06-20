#pragma once

#include <string>
#include <iostream>

using namespace std;

class Route
{
private:
	int _number;
	int _averageTimeMinutes; // TODO: именование! порядок слов
	int _frequencyMinutes;
	int _stopsCount;
	string* _stops;

public:
	Route();
	Route(int number, int averageTimeMinutes, int frequencyMinutes,
		string* stops, int stopsCount);
	~Route();

	void SetNumber(int number);
	void SetAverageTimeMinutes(int averageTimeMinutes); // TODO: именование! порядок слов
	void SetFrequencyMinutes(int frequencyMinutes);
	void SetStops(string* stops, int stopsCount);

	int GetNumber();
	int GetAverageTimeMinutes(); // TODO: именование! порядок слов
	int GetFrequencyMinutes();
	int GetStopsCount();
	string* GetStops();

	Route* FindStops(string name);

	Route& operator=(const Route& another);
};

