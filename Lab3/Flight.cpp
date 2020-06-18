#include "Flight.h"

Flight::Flight(int number, string departurePoint, string arrivalPoint,
    Time* departureTime, Time* arrivalTime)
{
    SetNumber(number);
    SetPointDeparture(departurePoint);
    SetArrivalPoint(arrivalPoint);
    SetTimeDepartureArrival(departureTime, arrivalTime);
}

Flight::Flight()
{
    this->_arrivalTime = nullptr;
    this->_departureTime = nullptr;
}

void Flight::SetNumber(int number)
{
    this->_number = number;
}

void Flight::SetPointDeparture(string departurePoint)
{
    this->_departurePoint = departurePoint;
}

void Flight::SetArrivalPoint(string arrivalPoint)
{
    this->_arrivalPoint = arrivalPoint;
}

void Flight::SetTimeDepartureArrival(Time* departureTime,
    Time* arrivalTime)
{
    if (*arrivalTime <= *departureTime)
    {
        throw exception("Arrival time must be less then departure time");
    }

    this->_arrivalTime = arrivalTime;
    this->_departureTime = departureTime;
}

int Flight::GetNumber()
{
    return this->_number;
}

string Flight::GetDeparturePoint()
{
    return this->_departurePoint;
}

string Flight::GetArrivalPoint()
{
    return this->_arrivalPoint;
}

Time* Flight::GetDepartureTime()
{
    return this->_departureTime;
}

Time* Flight::GetArrivalTime()
{
    return this->_arrivalTime;
}

