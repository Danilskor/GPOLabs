#include "..\..\Common\Lab1Header.h"

void RoundToTens(int& value)
{
	cout << "For " << value << " rounded value is ";
	if (value % 10 > 5)
	{
		value += 10;
	}
	value -= value % 10;
	cout << value << endl << endl;
}

void Task_1_1_3_4()
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