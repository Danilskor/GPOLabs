#include "Student.h"

void Student::SetRecordBookNumber(int recordBookNumber)
{
	this->_recordBookID = recordBookNumber;
}

void Student::SetEntranceYear(int entranceYear)
{
	this->_entranceYear = entranceYear;
}

int Student::GetRecordBookNumber()
{
	return this->_recordBookID;
}

int Student::GetEntranceYear()
{
	return this->_entranceYear;
}