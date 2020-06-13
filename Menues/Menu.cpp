#include "Menu.h"

int MainMenu(GeometricProgram* lab4)
{
	while (true)
	{
		PrintMainMenu();
		int MenuValue = ReadValueInRange(0, 4);
		switch (MenuValue)
		{
			case EXIT_MENU_VALUE:
			{
				return 0;
			}
			case 1:
			{
				system("cls");
				FirstLabMenu();
				break;
			}
			case 2:
			{
				system("cls");
				Lab2();
				break;
			}
			case 3:
			{
				system("cls");
				Lab3();
				break;
			}
			case 4:
			{
				system("cls");
				GeometricProgrammMenu(lab4);
				break;
			}
		}
	}
}

void PrintMainMenu()
{
	cout << "0. Выход" << endl;
	cout << "1. Лабораторная 1.1" << endl;
	cout << "2. Лабораторная 2" << endl;
	cout << "3. Лабораторная 3" << endl;
	cout << "4. Лабораторная 4" << endl << endl;
}

int FirstLabMenu()
{
	while (true)
	{
		PrintFirstLabMenu();
		int MenuValue = ReadValueInRange(0, 21);
		cout << endl;

		switch (MenuValue)
		{
			case EXIT_MENU_VALUE:
			{
				return 0;
			}
			case 1:
			{
				system("cls");
				Task_1_1_1_1();
				break;
			}
			case 2:
			{
				system("cls");
				Task_1_1_1_2();
				break;
			}
			case 3:
			{
				system("cls");
				Task_1_1_2_1();
				break;
			}
			case 4:
			{
				system("cls");
				Task_1_1_2_2();
				break;
			}
			case 5:
			{
				system("cls");
				Task_1_1_2_3();
				break;
			}
			case 6:
			{
				system("cls");
				Task_1_1_3_3();
				break;
			}
			case 7:
			{
				system("cls");
				Task_1_1_3_4();
				break;
			}
			case 8:
			{
				system("cls");
				Task_1_1_4_1();
				break;
			}
			case 9:
			{
				system("cls");
				Task_1_1_4_2();
				break;
			}
			case 10:
			{
				system("cls");
				Task_1_1_4_3();
				break;
			}
			case 11:
			{
				system("cls");
				Task_1_1_4_4();
				break;
			}
			case 12:
			{
				system("cls");
				Task_1_1_4_5();
				break;
			}
			case 13:
			{
				system("cls");
				Task_1_1_4_6();
				break;
			}
			case 14:
			{
				system("cls");
				Task_1_1_4_8();
				break;
			}
			case 15:
			{
				system("cls");
				Task_1_1_5_1();
				break;
			}
			case 16:
			{
				system("cls");
				Task_1_1_5_2();
				break;
			}
			case 17:
			{
				system("cls");
				Task_1_1_5_3();
				break;
			}
			case 18:
			{
				system("cls");
				Task_1_1_5_4();
				break;
			}
			case 19:
			{
				system("cls");
				Task_1_1_5_5();
				break;
			}
			case 20:
			{
				system("cls");
				Task_1_1_5_6();
				break;
			}
			case 21:
			{
				system("cls");
				Task_1_1_5_7();
				break;
			}
			case 22:
			{
				system("cls");
				Task_1_1_5_8();
				break;
			}
			default:
			{
				system("cls");
				break;
			}
		}
	}
}

void PrintFirstLabMenu()
{
	cout << "0. Выход" << endl;
	cout << "1. Лабораторная 1.1" << endl;
	cout << "2. Лабораторная 1.2" << endl;
	cout << "3. Лабораторная 2.1" << endl;
	cout << "4. Лабораторная 2.2" << endl;
	cout << "5. Лабораторная 2.3" << endl;
	cout << "6. Лабораторная 3.3" << endl;
	cout << "7. Лабораторная 3.4" << endl;
	cout << "8. Лабораторная 4.1" << endl;
	cout << "9. Лабораторная 4.2" << endl;
	cout << "10. Лабораторная 4.3" << endl;
	cout << "11. Лабораторная 4.4" << endl;
	cout << "12. Лабораторная 4.5" << endl;
	cout << "13. Лабораторная 4.6" << endl;
	cout << "14. Лабораторная 4.8" << endl;
	cout << "15. Лабораторная 5.1" << endl;
	cout << "16. Лабораторная 5.2" << endl;
	cout << "17. Лабораторная 5.3" << endl;
	cout << "18. Лабораторная 5.4" << endl;
	cout << "19. Лабораторная 5.5" << endl;
	cout << "20. Лабораторная 5.6" << endl;
	cout << "21. Лабораторная 5.7" << endl;
	cout << "22. Лабораторная 5.8" << endl;
	cout << "Введите число от 0 до 22: ";
}

void PrintGeometricProgrammMenu()
{
	cout << "1. Прямоугольник" << endl;
	cout << "2. Кольцо" << endl;
	cout << "3. Коллизии" << endl;
	cout << "0. Выход" << endl;
}

void GeometricProgrammMenu(GeometricProgram* geometricProgram)
{
	while (true)
	{
		PrintGeometricProgrammMenu();
		int MenuValue = ReadValueInRange(0, 3);
		cout << endl;

		switch (MenuValue)
		{
			case 1:
			{
				geometricProgram->DemoRectangle();
				break;
			}
			case 2:
			{
				geometricProgram->DemoRing();
				break;
			}
			case 3:
			{
				geometricProgram->DemoCollision();
				break;
			}
			case EXIT_MENU_VALUE:
			{
				return;
			}
		}
	}
}
