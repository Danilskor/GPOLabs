#include "Flight.h"
// TODO: аргументы должны именоваться как поля
Flight* MakeFlight(string departure, string destination, int minutesTimeOfFlight)
{
	Flight* flight = new Flight;
	flight->Departure = departure;
	flight->Destination = destination;
	flight->FlightTimeMinutes = minutesTimeOfFlight;
	return flight;
}

Flight* CopyFlight(Flight* flight)
{
	Flight* copiedFlight = new Flight;
	copiedFlight->Departure = flight->Departure;
	copiedFlight->Destination = flight->Destination;
	copiedFlight->FlightTimeMinutes = flight->FlightTimeMinutes;
	return copiedFlight;
}