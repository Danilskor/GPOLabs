#include "Route.h"

Route::Route()
{
	this->_stops = nullptr;
	this->_stopsCount = 0;
}

Route::Route(int number, int timeAvgMin, int frequencyMinutes,
	int stopsCount, string* stops)
{
	this->SetNumber(number);
	this->SetFrequencyMinutes(frequencyMinutes);
	this->SetTimeAvgMin(timeAvgMin);
	this->SetStops(stopsCount, stops);
}

Route::~Route()
{
	delete[] this->_stops;
}



void Route::SetNumber(int number)
{
	this->_number = number;
}

void Route::SetTimeAvgMin(int timeAveregeMinutes)
{
	this->_timeAveregeMinutes = timeAveregeMinutes;
}

void Route::SetFrequencyMinutes(int frequencyMinutes)
{
	this->_frequencyMinutes = frequencyMinutes;
}

void Route::SetStops(int stopsCount, string* stops)
{
	if (this->_stops != nullptr)
	{
		delete[] this->_stops;
	}
	this->_stopsCount = stopsCount;
	this->_stops = new string[stopsCount];
	for (int i = 0; i < stopsCount; i++)
	{
		this->_stops[i] = stops[i];
	}
}

int Route::GetNumber()
{
	return this->_number;
}

int Route::GettimeAveregeMinutes()
{
	return this->_timeAveregeMinutes;
}

int Route::GetFrequencyMinutes()
{
	return this->_frequencyMinutes;
}

int Route::GetStopsCount()
{
	return this->_stopsCount;
}

string* Route::GetStops()
{
	return this->_stops;
}

Route* Route::FindStop(string name)
{
	for (int i = 0; i < this->_stopsCount; i++)
	{
		if (this->_stops[i] == name)
		{
			return this;
		}
	}
	return nullptr;
}

Route& Route::operator=(const Route& another)
{
	if (this->_stops != nullptr)
	{
		delete[] this->_stops;
	}
	this->_stopsCount = another._stopsCount;
	this->_frequencyMinutes = another._frequencyMinutes;
	this->_timeAveregeMinutes = another._timeAveregeMinutes;
	this->_number = another._number;
	this->_stops = new string[another._stopsCount];
	for (int i = 0; i < another._stopsCount; i++)
	{
		this->_stops[i] = another._stops[i];
	}
	return *this;
}
