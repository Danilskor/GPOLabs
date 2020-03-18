#include "Execute.h"

void Lab2()
{
	// TODO: русские символы зашакалены
	// Çäåñü áûëè ïðîáëåìû ñ îðãàíèçàöèåé ôóíêöèé è ôàéëîâ, òàê ÷òî, ê ñîæàëåíèþ,
	// ïðîâåðêà ìîæåò âûçûâàòü ïðîáëåìû, íî ÿ íå çíàþ êàê ñäåëàòü ëó÷øå
	// (ïîçàèìñòâîâàííî ó Íèêîëàÿ, ò.ê. ó ìåíÿ áûë ñîâñåì áàðäàê â ôàéëàõ

	cout << "Task_2.2.1.1 and Task_2.2.1.2 - Îáðàáîòêà èñêëþ÷åíèé." << endl;
	DemoSort();
	system("pause");
	system("cls");

	cout << "Tasks_2.2.3.1-Tasks_2.2.3.3 and Tasks_2.2.4.1-4 - "
		<< endl << "Ñîçäàíèå îáúåêòîâ ñòðóêòóð è "
		<< "Ðàáîòà ñ îáúåêòàìè ñòðóêòóð ÷åðåç óêàçàòåëè." 
		<< endl;

	DemoRectangle();
	cout << endl;
	DemoFligth();
	cout << endl;
	DemoMovie();
	system("pause");
	system("cls");

	cout << "Task_2.2.5.1-Task_2.2.5.6 - Ñòðóêòóðû è ôóíêöèè" << endl;
	DemoReadAndWriteRectangles();
	system("pause");
	system("cls");

	cout << "Task_2.2.6.1-Task_2.2.6.3 - Ñòðóêòóðû è äèíàìè÷åñêàÿ ïàìÿòü." << endl;
	DemoDynamicFlight();
	DemoDynamicFlights();
	system("pause");
	system("cls");

	cout << "Tasks 2.2.7.1-Tasks 2.2.7.3 - Ôóíêöèè-êîíñòðóêòîðû" << endl;
	DemoCircle();

	Movie* testMovie = MakeMovie("Òåñò", 666, 2020, Action, 20.5);
	Flight* testFlight = MakeFlight("Òîñìñê", "Èçðàèëü", 26);
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
	cout << "Óðà, îíà êîí÷èëàñü!!!" << endl;
	system("pause");
}
