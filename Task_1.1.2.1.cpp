#include<iostream>

using namespace std;

void main()
{
	int array[10];

	cout << "Source array is: \n";
	for (int i = 0; i < 10; i++)
	{
		array[i] = rand() % 100 - 51;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << ' ';
	}
	cout << endl << endl;

	cout << "Sorted array is: \n";
	for (int i = 0; i < 10 - 1; i++)
	{
		for (int j = 0; j < 10 - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int tempoarry = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tempoarry;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << ' ';
	}
}