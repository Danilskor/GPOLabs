#include <iostream>
#include <Windows.h>
#include "Common/Lab1Header.h"
#include "Menues/Menu.h"
#include "GeometricProgram.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	GeometricProgram lab4;
	MainMenu();
	return 0;
}