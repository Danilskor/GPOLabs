#include "CurrentTime.h"

int GetCurrentYear()
{
	struct tm newTime;
	time_t now = time(nullptr);
	localtime_s(&newTime, &now);
	return newTime.tm_year + 1900;
}