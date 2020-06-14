#pragma once
#include <string>

using namespace std;

class Person
{
private:
	string _name;
	string _surname;
	string _patronymic;

public:

	void SetName(string name);
	void SetSurname(string surname);
	void SetPatronymic(string patronymic);


	string GetName();
	string GetSurname();
	string GetPatronymic();

	Person(string name, string surname, string patronymic);
};