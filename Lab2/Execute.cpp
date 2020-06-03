#include "Execute.h"

void Lab2()
{
	// TODO: русские символы зашакалены

	cout << "Task_2.2.1.1 and Task_2.2.1.2 - Обработка исключений." << endl;
	DemoSort();
	system("pause");
	system("cls");

	cout << "Tasks_2.2.3.1-Tasks_2.2.3.3 and Tasks_2.2.4.1-4 - "
		<< endl << "Создание объектов структур и "
		<< "Работа с объектами структур через указатели."
		<< endl;

	DemoSquare();
	cout << endl;

	cout << "Task_2.2.5.1-Task_2.2.5.6 - Структуры и функции" << endl;
	DemoReadAndWriteSquares();
	system("pause");
	system("cls");

	cout << "Tasks 2.2.7.1-Tasks 2.2.7.3 - Функции-конструкторы" << endl;
	DemoCircle();

	system("pause");
	system("cls");

	cout << "Task 2.2.8." << endl;
	DemoEnums();
	system("pause");
	system("cls");
}
