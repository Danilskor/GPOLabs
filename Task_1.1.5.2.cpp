#include<iostream>

using namespace std;

void main()
{
	int size = 5;
	bool* array = new bool[size];
	//TODO: так массив не инициализируют, сделать инициализацию при объявлении
	array[0] = array[1] = array[3] = true;
	array[2] = array[4] = false;
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