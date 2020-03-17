#pragma once

#include <string>

using namespace std;

struct Flight
{
	string Departure;
	string Destination;
	int FlifhtTimeMinutes; // TODO: грам ошибка
};

Flight* MakeFlight(string departure, string arrival, int minutesTimeOfFlight); // TODO: аргументы должны именоваться как поля
Flight* CopyFlight(Flight* flight);