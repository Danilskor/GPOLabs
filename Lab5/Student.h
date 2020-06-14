#pragma once
#include "Person.h"

class Student : public Person
{
private:
	int _recordBookNumber;
	int _entranceYear;

public:
	Student(string name, string surname, string patronymic,
		int recordBookNumber, int entranceYear) :
		Person(name, surname, patronymic)
	{
		SetRecordBookNumber(recordBookNumber);
		SetEntranceYear(entranceYear);
	};

	void SetRecordBookNumber(int recordBookNumber);
	void SetEntranceYear(int entranceYear);

	int GetRecordBookNumber();
	int GetEntranceYear();
};