#pragma once
#include "Person.h"

class Teacher : public Person
{
private:
	string _position;

public:
	void SetPosition(string position);

	Teacher(string name, string surname, string patronymic, string position) : Person(name, surname, patronymic)
	{
		SetPosition(_position);
	}

	string GetPosition();
};
