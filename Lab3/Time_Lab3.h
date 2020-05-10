#pragma once

class cTime
{
private:
	int _minute;
	int _hour;
	int _day;
	int _month;
	int _year;

public:
	cTime(int year,int month, int day,int hour, int minute);
	cTime();
	
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

	bool operator <= (const cTime& another);
};

