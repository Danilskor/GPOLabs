#include "Execute.h"

void Lab2()
{
	// ����� ���� �������� � ������������ ������� � ������, ��� ���, � ���������,
	// �������� ����� �������� ��������, �� � �� ���� ��� ������� �����
	// (��������������� � �������, �.�. � ���� ��� ������ ������ � ������

	cout << "Task_2.2.1.1 and Task_2.2.1.2 - ��������� ����������." << endl;
	DemoSort();
	system("pause");
	system("cls");

	cout << "Tasks_2.2.3.1-Tasks_2.2.3.3 and Tasks_2.2.4.1-4 - "
		<< endl << "�������� �������� �������� � "
		<< "������ � ��������� �������� ����� ���������." 
		<< endl;

	DemoRectangle();
	cout << endl;
	DemoFligth();
	cout << endl;
	DemoMovie();
	system("pause");
	system("cls");

	cout << "Task_2.2.5.1-Task_2.2.5.6 - ��������� � �������" << endl;
	DemoReadAndWriteRectangles();
	system("pause");
	system("cls");

	cout << "Task_2.2.6.1-Task_2.2.6.3 - ��������� � ������������ ������." << endl;
	DemoDynamicFlight();
	DemoDynamicFlights();
	system("pause");
	system("cls");

	cout << "Tasks 2.2.7.1-Tasks 2.2.7.3 - �������-������������" << endl;
	DemoCircle();

	Movie* testMovie = MakeMovie("����", 666, 2020, Action, 20.5);
	Flight* testFlight = MakeFlight("������", "�������", 26);
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
	cout << "���, ��� ���������!!!" << endl;
	system("pause");
}
