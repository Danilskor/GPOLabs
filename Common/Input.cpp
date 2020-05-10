#include "Input.h"

bool CheckForNumber(string value)
{
	int size = value.length();
	if (isdigit((unsigned char)value[0]) || (unsigned char)value[0] == '-')
	{
		for (int i = 1; i < size; i++)
		{
			if (!isdigit((unsigned char)value[i]))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
}

void GetMenuItem(int& menuItem, int bottomIndex, int topIndex)
{
	if (bottomIndex >= topIndex)
	{
		throw exception("Error. Верхнее значение меньше/равно нижнему значению.");
	}
	do
	{
		cout << "Введите значение:";
		menuItem = ReadValue<int>();
		cout << endl;
	} while (!CheckRange(menuItem, bottomIndex, topIndex));
}