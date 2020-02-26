#include <iostream>
using namespace std;


int* MakeRandomArray(int arraySize)
{
	int* array = new int[arraySize];
	for (int i = 0; i < arraySize; i++)
	{
		array[i] = rand() % 100 - 51;
	}
	return array;
}

void main()
{
	int* array = MakeRandomArray(5);
	cout << "Random array of 5:\n";
	for (int i = 0; i < 5; i++)
	{
		cout << array[i] << ' ';
	}
	cout << endl;
	delete[] array;

	array = MakeRandomArray(8);
	cout << "Random array of 8:\n";
	for (int i = 0; i < 8; i++)
	{
		cout << array[i] << ' ';
	}
	cout << endl;
	delete[] array;

	cout << "Random array of 13:\n";
	array = MakeRandomArray(13);
	for (int i = 0; i < 13; i++)
	{
		cout << array[i] << ' ';
	}
	delete[] array;
}