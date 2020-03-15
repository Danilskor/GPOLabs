#include "..\..\Common\Lab1Header.h"

double GetPower(double base, int exponent)
{
	double temp = base;
	for (int i = 0; i < exponent - 1; i++)
	{
		base *= temp;
	}
	return base;
}

void DemoGetPower(double base, int exponent) //TODO: неправильно сделал задачу, читай задание
{
	cout << base << " ^ " << exponent << " = " << GetPower(base, exponent) << endl;
}

void Task_1_1_3_3()
{
	DemoGetPower(5.1, 2);
	DemoGetPower(7.2, 5);
	DemoGetPower(0.1, 3);
}