#include "..\..\Common\Lab1Header.h"

void Task_1_1_5_4()
{
	size_t size = 10;
	//TODO: 10 в переменную и использовать далее
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

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				//TODO: грам. ошибка
				double tempoarry = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tempoarry;
			}
		}
	}

	cout << "Sorted array of double:\n";
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << ' ';
	}
	cout << endl;

	delete[] array;
}