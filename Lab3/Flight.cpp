#include "Flight.h"

Flight::Flight(int number, string departurePoint, string arrivalPoint,
    Time* departureTime, Time* arrivalTime)
{
    SetNumber(number);
    SetPointDeparture(departurePoint);
    SetArrivalPoint(arrivalPoint);
    SetTimesDepartureArrival(departureTime, arrivalTime);
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
// TODO: здесь и далее поправить именование всех переменных
void Flight::SetTimesDepartureArrival(Time* departureTime,
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
// TODO: именование
string Flight::GetDeparturePoint()
{
    return this->_departurePoint;
}
// TODO: именование
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

