#include<iostream>

using namespace std;

void main()
{
	char array[8];

	for (int i = 0; i < 8; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> array[i];
	}

	cout << "Your array is: \n";
	for (int i = 0; i < 8; i++)
	{
		cout << array[i] << ' ';
	}
	cout << endl;

	cout << "All letters in your array:\n";
	for (int i = 0; i < 8; i++)
	{
		if (array[i] >= 'a' && array[i] <= 'z')
		{
			cout << array[i] << ' ';
		}
	}
}