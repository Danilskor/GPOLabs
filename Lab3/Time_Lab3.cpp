#include "Time_Lab3.h"
#include <exception>
#include "../Common/Constants/Consts.h"

using std::exception;

cTime::cTime(int year, int month, int day, int hour, int minute)
{
	SetYear(year);
	SetMonth(month);
	SetDay(day);
	SetHour(hour);
	SetMinute(minute);
}

cTime::cTime()
{
}

void cTime::SetYear(int year)
{
	if (year < 0 || year > 2020)
	{
		throw exception("Year must be in range from 0 to 2020");
	}
	this->_year = year;
}

void cTime::SetMonth(int month)
{
	if (month < 0 || month > 12)
	{
		throw exception("Month must be in range from 0 to 12");
	}
	this->_month = month;
}

void cTime::SetDay(int day)
{
	if (day < 0 || day > 30)
	{
		throw exception("Day must be in range from 0 to 30");
	}
	this->_day = day;
}

void cTime::SetHour(int hour)
{
	if (hour < 0 || hour > 23)
	{
		throw exception("Hour must be in range from 0 to 23");
	}
	this->_hour = hour;
}

void cTime::SetMinute(int minute)
{
	if (minute < 0 || minute > 60)
	{
		throw exception("Minutes must be in range from 0 to 60");
	}
	this->_minute = minute;
}

int cTime::GetYear()
{
	return this->_year;
}

int cTime::GetMonth()
{
	return this->_month;
}

int cTime::GetDay()
{
	return this->_day;
}

int cTime::GetHour()
{
	return this->_hour;
}

int cTime::GetMinute()
{
	return this->_minute;
}

bool cTime::operator<=(const cTime& other)
{
	// TODO: ты тестировал этот оператор? Он работает неправильно!
	if (this->_day <= other._day && this->_hour <= other._hour &&
		this->_minute <= other._minute && this->_month <= other._month &&
		this->_year <= other._year)
	{
		return true;
	}
	else
	{
		return false;
	}
}

