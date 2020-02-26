#include<iostream>

using namespace std;

void RoundToTens(int& value)
{
	cout << "For " << value << " rounded value is ";
	if (value % 10 > 5)
	{
		value += 10;
		value -= value % 10;
	}
	else
	{
		value -= value % 10;
	}
	cout << value << endl << endl;
}

void main()
{
	int value;
	cout << "Enter value: ";
	cin >> value;
	RoundToTens(value);
	cout << "Enter value: ";
	cin >> value;
	RoundToTens(value);
	cout << "Enter value: ";
	cin >> value;
	RoundToTens(value);
}