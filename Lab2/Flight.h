#pragma once

#include <string>

using namespace std;

struct Flight
{
	string Departure;
	string Destination;
	int FlightTimeMinutes; // TODO: грам ошибка
};

Flight* MakeFlight(string departure, string destination, int FlightTimeMinutes); // TODO: аргументы должны именоваться как поля
Flight* CopyFlight(Flight* flight);

void DemoFligth();

void WrongPointers();