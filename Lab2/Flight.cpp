#include "Flight.h"
// TODO: аргументы должны именоваться как поля
Flight* MakeFlight(string departure, string arrival, int minutesTimeOfFlight)
{
	Flight* flight = new Flight;
	flight->Departure = departure;
	flight->Destination = arrival;
	flight->FlifhtTimeMinutes = minutesTimeOfFlight;
	return flight;
}

Flight* CopyFlight(Flight* flight)
{
	Flight* copiedFlight = new Flight;
	copiedFlight->Departure = flight->Departure;
	copiedFlight->Destination = flight->Destination;
	copiedFlight->FlifhtTimeMinutes = flight->FlifhtTimeMinutes;
	return copiedFlight;
}