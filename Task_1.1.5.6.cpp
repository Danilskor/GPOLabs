#include<iostream>

using namespace std;

void main()
{
	char* array = new char[15];
	cout << "Char array is:\n";
	for (int i = 0; i < 15; i++)
	{
		array[i] = rand() % 88 + 33;
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