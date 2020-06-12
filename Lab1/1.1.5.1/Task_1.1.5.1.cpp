#include "..\..\Common\Lab1Header.h"

void Task_1_1_5_1()
{
	size_t size = 5;
	double* array = new double[size];

	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 1000 / 10.0 - 50;
	}

	cout << "Array of double:\n";
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << ' ';
	}
	cout << endl;

	delete[] array;
}