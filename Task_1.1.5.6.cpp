#include<iostream>

using namespace std;

void main()
{
	//TODO: 15 в переменную
	char* array = new char[15];
	cout << "Char array is:\n";
	for (int i = 0; i < 15; i++)
	{
		//TODO: использовать символы вместо магических чисел
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