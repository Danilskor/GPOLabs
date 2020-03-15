#include "..\..\Common\Lab1Header.h"

void Task_1_1_5_5()
{
	size_t size = 10;
	//TODO: 10 в переменную и использовать далее
	int* array = new int[size];

	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 100 - 51;
	}

	int searchingValue;
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << ' ';
	}
	cout << endl;

	cout << "Enter searching value: ";
	cin >> searchingValue;
	int n = 0;

	for (int i = 0; i < size; i++)
	{
		if (array[i] = searchingValue)
		{
			cout << "Index of searching value " << searchingValue << " is: " << i << endl;
		}
	}

	delete[] array;
}