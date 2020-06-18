#pragma once
#include "Person.h"

class Student : public Person
{
private:
	int _recordBookID; //TODO: number имеет много переводов, его лучше не использовать. Если речь про уникальный номер, то это Id
	int _entranceYear;

public:
	Student(string name, string surname, string patronymic,
		int recordBookID, int entranceYear) :
		Person(name, surname, patronymic)
	{
		SetRecordBookNumber(recordBookID);
		SetEntranceYear(entranceYear);
	};

	void SetRecordBookNumber(int recordBookID);
	void SetEntranceYear(int entranceYear);

	int GetRecordBookNumber();
	int GetEntranceYear();
};