#include<iostream>

using namespace std;

void main()
{
	float array[12];

	cout << endl << "Source array is: ";
	for (int i = 0; i < 12; i++)
	{
		array[i] = rand() % 1000 / 10.0 - 50;
	}

	for (int i = 0; i < 12; i++)
	{
		cout << array[i] << ' ';
	}
	cout << endl;

	cout << "Enter searching value: ";
	float searchingValue;
	cin >> searchingValue;
	int n = 0;
	for (int i = 0; i < 12; i++)
	{
		if (array[i] >= searchingValue)
		{
			n++;
		}
	}
	cout << "Elements of array more than " << searchingValue << " is: " << n << endl << endl;
}