#pragma once
#include "Person.h"

class Student : public Person
{
private:
	int _recordBookNumber; //TODO: number имеет много переводов, его лучше не использовать. Если речь про уникальный номер, то это Id
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