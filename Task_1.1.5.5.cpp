#include<iostream>

using namespace std;

void main()
{
	//TODO: 10 � ���������� � ������������ �����
	int* array = new int[10];
	for (int i = 0; i < 10; i++)
	{
		array[i] = rand() % 100 - 51;
	}
	int searchingValue;
	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << ' ';
	}
	cout << endl;
	cout << "Enter searching value: ";
	cin >> searchingValue;
	int n = 0;
	for (int i = 0; i < 10; i++)
	{
		if (array[i] = searchingValue)
		{
			cout << "Index of searching value " << searchingValue << " is: " << i << endl;
		}
	}
	delete[] array;
}