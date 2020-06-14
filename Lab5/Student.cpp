#include "Student.h"

void Student::SetRecordBookNumber(int recordBookNumber)
{
	this->_recordBookNumber = recordBookNumber;
}

void Student::SetEntranceYear(int entranceYear)
{
	this->_entranceYear = entranceYear;
}

int Student::GetRecordBookNumber()
{
	return this->_recordBookNumber;
}

int Student::GetEntranceYear()
{
	return this->_entranceYear;
}