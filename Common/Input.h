#pragma once

#include <iostream>
#include <string>

using namespace std;

#include <sstream>
#include <string>
#include <iostream>

using namespace std;

bool CheckForNumber(string value);

template <typename T>
T ReadValue()
{
	string inputValue;
	while (true)
	{
		getline(cin, inputValue);
		bool intCheckFlag = CheckForNumber(inputValue);
		istringstream inputStringStream(inputValue);
		T number;
		inputStringStream >> number;
		if (intCheckFlag == false || inputStringStream.fail())
		{
			cout << endl << "������������ ����, �������� ��� ���:";
			inputValue.clear();
		}
		else
		{
			return number;
		}
	}
}

///bottomIndex ������ ���� ������, ��� topIndex
void GetMenuItem(int& menuItem, int bottomIndex, int topIndex);

template <typename T>
bool CheckRange(T& value, T& bottomValue, T& topValue);

template<typename T>
T ReadValueInRange(T bottomValue, T topValue);

template<typename T>
bool CheckRange(T& value, T& bottomValue, T& topValue)
{
	if (bottomValue >= topValue)
	{
		throw exception("Error. ������� �������� ������/����� ������� ��������.");
	}
	if (value <= topValue && value >= bottomValue)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template<typename T>
T ReadValueInRange(T bottomValue, T topValue)
{
	T value;
	do
	{
		cout << " ������� �������� �� " << bottomValue <<
			" �� " << topValue << ":";
		value = ReadValue<T>();
	} while (!CheckRange<T>(value, bottomValue, topValue));
	return value;
}