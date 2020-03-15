#include "Time.h"

Time* MakeTime(int hours, int minutes, int seconds)
{
	Time* time = new Time;
	time->Hours = hours;
	time->Minutes = minutes;
	time->Seconds = seconds;
	return time;
}

Time* CopyTime(Time* time)
{
	Time* copiedTime = new Time;
	copiedTime->Hours = time->Hours;
	copiedTime->Minutes = time->Minutes;
	copiedTime->Seconds = time->Seconds;
	return copiedTime;
}
