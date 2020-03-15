#include <iostream>
#include <Windows.h>
#include "Common/Lab1Header.h"
#include "Menues/Menu.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	MainMenu();
	return 0;
}