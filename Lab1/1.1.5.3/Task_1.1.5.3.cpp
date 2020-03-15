#include "..\..\Common\Lab1Header.h"

void Task_1_1_5_3()
{
	int n;
	cout << "Enter char array size: ";
	cin >> n;
	cout << endl;

	char* array = new char[n];

	for (int i = 0; i < n; i++)
	{
		cout << "Enter a[" << i << "]: ";
		cin >> array[i];
	}

	cout << "Your char array is:\n";
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << ' ';
	}

	delete[] array;
}