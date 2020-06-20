#pragma once

#include <ctime>
#include <exception>
#include "../Common/Constants/Consts.h"
#include "../CurrentTime.h"

class Time
{
private:
	int _minute;
	int _hour;
	int _day;
	int _month;
	int _year;

public:
	Time(int year,int month, int day, int hour, int minute);
	Time();
	
	void SetMinute(int minute);
	void SetHour(int hour);
	void SetDay(int day);
	void SetMonth(int month);
	void SetYear(int year);

	int GetMinute();
	int GetHour();
	int GetDay();
	int GetMonth();
	int GetYear();

	bool operator == (const Time& another);
	bool operator < (const Time& another);
	bool operator <= (const Time& another);
};

