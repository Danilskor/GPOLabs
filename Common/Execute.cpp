#include "Execute.h"

void Lab2()
{
	// Здесь были проблемы с организацией функций и файлов, так что, к сожалению,
	// проверка может вызывать проблемы, но я не знаю как сделать лучше
	// (позаимствованно у Николая, т.к. у меня был совсем бардак в файлах

	cout << "Task_2.2.1.1 and Task_2.2.1.2 - Обработка исключений." << endl;
	DemoSort();
	system("pause");
	system("cls");

	cout << "Tasks_2.2.3.1-Tasks_2.2.3.3 and Tasks_2.2.4.1-4 - "
		<< endl << "Создание объектов структур и "
		<< "Работа с объектами структур через указатели." 
		<< endl;

	DemoRectangle();
	cout << endl;
	DemoFligth();
	cout << endl;
	DemoMovie();
	system("pause");
	system("cls");

	cout << "Task_2.2.5.1-Task_2.2.5.6 - Структуры и функции" << endl;
	DemoReadAndWriteRectangles();
	system("pause");
	system("cls");

	cout << "Task_2.2.6.1-Task_2.2.6.3 - Структуры и динамическая память." << endl;
	DemoDynamicFlight();
	DemoDynamicFlights();
	system("pause");
	system("cls");

	cout << "Tasks 2.2.7.1-Tasks 2.2.7.3 - Функции-конструкторы" << endl;
	DemoCircle();

	Movie* testMovie = MakeMovie("Тест", 666, 2020, Action, 20.5);
	Flight* testFlight = MakeFlight("Тосмск", "Израиль", 26);
	Time* testTime = MakeTime(2, 20, 10);

	Movie* copiedMovie = CopyMovie(testMovie);
	Flight* copiedFlight = CopyFlight(testFlight);
	Time* copiedTime = CopyTime(testTime);

	system("pause");
	system("cls");

	cout << "Task 2.2.8." << endl;
	DemoEnums();
	system("pause");
	system("cls");

	cout << "Task 2.2.9." << endl;
	DemoMovieWithGenre();
	system("pause");
	system("cls");
	cout << "Ура, она кончилась!!!" << endl;
	system("pause");
}
