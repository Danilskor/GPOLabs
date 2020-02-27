#include<iostream>

using namespace std;

void main()
{
	//TODO: 10 в переменную и использовать далее
	double* array = new double[10];

	for (int i = 0; i < 10; i++)
	{
		array[i] = rand() % 1000 / 10.0 - 50;
	}
	cout << "Array of double:\n";
	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << ' ';
	}
	cout << endl;

	for (int i = 0; i < 10 - 1; i++)
	{
		for (int j = 0; j < 10 - i - 1; j++)
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
	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << ' ';
	}
	cout << endl;
	delete[] array;
}