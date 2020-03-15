#include "..\..\Common\Lab1Header.h"

void Task_1_1_5_2()
{
	int size = 5;
	bool* array = new bool[size] {true, false, false, true, false};
	//TODO: так массив не инициализируют, сделать инициализацию при объявлении

	for (int i = 0; i < size; i++)
	{
		if (array[i])
		{
			cout << "true ";
		}
		else
		{
			cout << "false ";
		}
	}
	delete[] array;
}