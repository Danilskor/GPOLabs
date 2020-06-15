#include <iostream>
#include "Menues/Menu.h"
#include "Lab4/GeometricProgram.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	GeometricProgram lab4;
	MainMenu(&lab4);
	return 0;
}