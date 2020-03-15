#pragma once

struct Time
{
	int Hours;
	int Minutes;
	int Seconds;
};

Time* MakeTime(int hours, int minutes, int seconds);
Time* CopyTime(Time* time);