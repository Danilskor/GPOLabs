#pragma once

#include <string>
#include <iostream>

using namespace std;

class Route
{
private:
	int _number;
	int _timeAverageMinutes; // TODO: грам ошибки
	int _frequencyMinutes;
	int _stopsCount;
	string* _stops;

public:
	Route();
	Route(int number, int timeAverageMinutes, int frequencyMinutes, // TODO: грам. ошибки
		string* stops, int stopsCount);
	~Route();

	void SetNumber(int number);
	void SetTimeAverageMinutes(int timeAverageMinutes); // TODO: именование, грам. ошибки, никаких сокращений!
	void SetFrequencyMinutes(int frequencyMinutes);
	void SetStops(string* stops, int stopsCount);// TODO: сначала указатель, потом количество

	int GetNumber();
	int GetTimeAverageMinutes();// TODO: именование, регистры, грам ошибки
	int GetFrequencyMinutes();
	int GetStopsCount();
	string* GetStops();

	Route* FindStops(string name);

	Route& operator=(const Route& another);
};

