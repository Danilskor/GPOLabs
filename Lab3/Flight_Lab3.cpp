#include "Flight_Lab3.h"

cFlight::cFlight(int number, string departurePoint, string arrivalPoint,
    cTime* timeOfDeparture, cTime* timeOfArrival)
{
    SetNumber(number);
    SetPointDeparture(departurePoint);
    SetArrivalPoint(arrivalPoint);
    SetTimesDepartureArrival(timeOfDeparture, timeOfArrival);
}

cFlight::cFlight()
{
    this->_timeOfArrival = nullptr;
    this->_timeOfDeparture = nullptr;
}

void cFlight::SetNumber(int number)
{
    this->_number = number;
}

void cFlight::SetPointDeparture(string departurePoint)
{
    this->_departurePoint = departurePoint;
}

void cFlight::SetArrivalPoint(string arrivalPoint)
{
    this->_arrivalPoint = arrivalPoint;
}
// TODO: здесь и далее поправить именование всех переменных
void cFlight::SetTimesDepartureArrival(cTime* timeOfDeparture,
    cTime* timeOfArrival)
{
    if (*timeOfArrival <= *timeOfDeparture)
    {
        throw exception("Âðåìÿ îòïðàâëåíèÿ íå ìîæåò áûòü áîëüøå âðåìåíè ïðèáûòèÿ");
    }

    this->_timeOfArrival = timeOfArrival;
    this->_timeOfDeparture = timeOfDeparture;
}

int cFlight::GetNumber()
{
    return this->_number;
}
// TODO: именование
string cFlight::GetdeparturePoint()
{
    return this->_departurePoint;
}
// TODO: именование
string cFlight::GetarrivalPoint()
{
    return this->_arrivalPoint;
}

cTime* cFlight::GetTimeOfDeparture()
{
    return this->_timeOfDeparture;
}

cTime* cFlight::GetTimeOFArrival()
{
    return this->_timeOfArrival;
}

