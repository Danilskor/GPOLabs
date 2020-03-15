#include "..\..\Common\Lab1Header.h"

void Foo_Task_1_1_4_5(double& a)
{
	cout << "Address of a in Foo(): " << &a << endl;
	cout << "Value of a in Foo(): " << a << endl;
	a = 15.0;
	cout << "New value of a in Foo(): " << a << endl;
}

void Task_1_1_4_5()
{
	double a = 5.0;
	cout << "Address of a in main(): " << &a << endl;
	cout << "Value of a in main(): " << a << endl;
	cout << endl;
	Foo_Task_1_1_4_5(a);
	cout << endl;
	cout << "Value of a in main(): " << a << endl;
}
