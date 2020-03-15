#include "..\..\Common\Lab1Header.h"

void Task_1_1_5_6()
{
	size_t size = 15;
	//TODO: 15 в переменную
	char* array = new char[size];

	cout << "Char array is:\n";
	for (int i = 0; i < size; i++)
	{
		//TODO: использовать символы вместо магических чисел
		array[i] = rand() % '~' + '!';
		cout << array[i] << ' ';
	}
	cout << endl;

	cout << "All letters in your array:\n";
	for (int i = 0; i < 15; i++)
	{
		if (array[i] >= 'a' && array[i] <= 'z')
		{
			cout << array[i] << ' ';
		}
	}

	delete[] array;
}