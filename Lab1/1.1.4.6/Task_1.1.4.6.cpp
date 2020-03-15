#include "..\..\Common\Lab1Header.h"

void Task_1_1_4_6()
{
	int a = 5;
	int* pointer = &a;

	cout << "Address of a: " << &a << endl;
	cout << "Address in pointer: " << pointer << endl;
	cout << "Address of pointer: " << &pointer << endl;
	cout << endl;

	*pointer = 7;

	cout << "Value in a: " << a << endl;
	cout << "Value by pointer address: " << *pointer << endl;
}