#include<iostream>

using namespace std;

void main()
{
	double* array = new double[5];
	for (int i = 0; i < 5; i++)
	{
		array[i] = rand() % 1000 / 10.0 - 50;
	}
	cout << "Array of double:\n";
	for (int i = 0; i < 5; i++)
	{
		cout << array[i] << ' ';
	}
	cout << endl;
	delete[] array;
}