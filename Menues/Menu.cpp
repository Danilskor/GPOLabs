#include "Menu.h"

int MainMenu()
{
	while (true)
	{
		PrintMainMenu();
		int MenuValue = GetValue(0, 2);
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
			default:
				break;
		}
	}
}

void PrintMainMenu()
{
	cout << "0. Выход" << endl;
	cout << "1. Лабораторная 1.1" << endl;
	cout << "2. Лабораторная 2" << endl << endl;
}

int FirstLabMenu()
{
	while (true)
	{
		PrintFirstLabMenu();
		int MenuValue = GetValue(0, 21);
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
	// TODO: везде грам ошибка
	cout << "0. Выход" << endl;
	cout << "1. Лаборатоная 1.1" << endl;
	cout << "2. Лаборатоная 1.2" << endl;
	cout << "3. Лаборатоная 2.1" << endl;
	cout << "4. Лаборатоная 2.2" << endl;
	cout << "5. Лаборатоная 2.3" << endl;
	cout << "6. Лаборатоная 3.3" << endl;
	cout << "7. Лаборатоная 3.4" << endl;
	cout << "8. Лаборатоная 4.1" << endl;
	cout << "9. Лаборатоная 4.2" << endl;
	cout << "10. Лаборатоная 4.3" << endl;
	cout << "11. Лаборатоная 4.4" << endl;
	cout << "12. Лаборатоная 4.5" << endl;
	cout << "13. Лаборатоная 4.6" << endl;
	cout << "14. Лаборатоная 4.8" << endl;
	cout << "15. Лаборатоная 5.1" << endl;
	cout << "16. Лаборатоная 5.2" << endl;
	cout << "17. Лаборатоная 5.3" << endl;
	cout << "18. Лаборатоная 5.4" << endl;
	cout << "19. Лаборатоная 5.5" << endl;
	cout << "20. Лаборатоная 5.6" << endl;
	cout << "21. Лаборатоная 5.7" << endl;
	cout << "22. Лаборатоная 5.8" << endl;
	cout << "Введите число от 0 до 21: ";
}