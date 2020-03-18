#pragma once

#include <string>

using namespace std;
// TODO: каждую структуру в свой файл
struct Contact
{
	string Name;
	string Surname;
	string PhoneNumber;
};

struct Song
{
	string Album;
	string Name;
	int SecondsDuration;
};

struct Subject
{
	string Name;
	int StudyHours;
	string TeacherName;
	short int Grade; // TODO: Mark. Score - это счет в игре
};