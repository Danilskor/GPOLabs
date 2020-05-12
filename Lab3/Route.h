#pragma once

#include <string>
#include <iostream>

using namespace std;

class Route
{
private:
	int _number;
	int _timeAveregeMinutes; // TODO: грам ошибки
	int _frequencyMinutes;
	int _stopsCount;
	string* _stops;

public:
	Route();
	Route(int number, int timeAveregeMinutes, int frequencyMinutes, // TODO: грам. ошибки
		int stopsCount, string* stops);
	~Route();

	void SetNumber(int number);
	void SetTimeAvgMin(int timeAveregeMinutes); // TODO: именование, грам. ошибки, никаких сокращений!
	void SetFrequencyMinutes(int frequencyMinutes);
	void SetStops(int stopsCount, string* stops);// TODO: сначала указатель, потом количество

	int GetNumber();
	int GettimeAveregeMinutes();// TODO: именование, регистры, грам ошибки
	int GetFrequencyMinutes();
	int GetStopsCount();
	string* GetStops();

	Route* FindStop(string name);

	Route& operator=(const Route& another);
};

