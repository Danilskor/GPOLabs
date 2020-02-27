#include<iostream>

using namespace std;

double GetPower(double base, int exponent)
{
	double temp = base;
	for (int i = 0; i < exponent - 1; i++)
	{
		base *= temp;
	}
	return base;
}

void DemoGetPower() //TODO: неправильно сделал задачу, читай задание
{
	double base;
	cout << "Enter value: ";
	cin >> base;
	double exponent;
	cout << "Enter exponent: ";
	cin >> exponent;

	cout << base << " ^ " << exponent << " = " << GetPower(base, exponent) << endl;
}

void main()
{
	DemoGetPower();
	DemoGetPower();
	DemoGetPower();
}