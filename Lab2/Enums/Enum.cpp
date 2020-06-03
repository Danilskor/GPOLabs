#include "Enum.h"
#include <iostream>

using namespace std;

//2.2.8.3
void DemoEnums()
{
	Color color = Red;
	WeekDay weekDay = Sunday;
	StudyType studyType = FullTime;
	PhoneCompany company = Honor;
	Season season = Spring;

	//2.2.8.4
	Color* colors = new Color[6];
	colors[0] = Red;
	colors[1] = Blue;
	colors[2] = LightBlue;
	colors[3] = Green;
	colors[4] = Red;
	colors[5] = Orange;

	WeekDay* weekDays = new WeekDay[6];
	weekDays[0] = Saturday;
	weekDays[1] = Monday;
	weekDays[2] = Wednesday;
	weekDays[3] = Thursday;
	weekDays[4] = Saturday;
	weekDays[5] = Friday;

	StudyType* studyTypes = new StudyType[6];
	studyTypes[0] = Evening;
	studyTypes[1] = FullTime;
	studyTypes[2] = FullTime;
	studyTypes[3] = Distance;
	studyTypes[4] = Remote;
	studyTypes[5] = Evening;

	PhoneCompany* companies = new PhoneCompany[6];
	companies[0] = Huawei;
	companies[1] = Apple;
	companies[2] = Samsung;
	companies[3] = Meizu;
	companies[4] = Honor;
	companies[5] = Huawei;

	Season* seasons = new Season[6];
	seasons[0] = Spring;
	seasons[1] = Autumn;
	seasons[2] = Autumn;
	seasons[3] = Winter;
	seasons[4] = Summer;
	seasons[5] = Spring;

	cout << "Êðàññíûõ öâåòîâ â ìàññèâå " << CountRed(colors, 6) << endl;
	cout << "Ñèíèõ öâåòîâ â ìàññèâå " << CountColor(colors, 6, Blue) << endl;

	delete[] colors;
	delete[] weekDays;
	delete[] studyTypes;
	delete[] companies;
	delete[] seasons;
}

void WriteColor(Color color)
{
	switch (color)
	{
		case Red:
		{
			cout << "Êðàññíûé" << endl;
			break;
		}
		case Orange:
		{
			cout << "Îðàíæåâûé" << endl;
			break;
		}
		case Yellow:
		{
			cout << "Æ¸ëòûé" << endl;
			break;
		}
		case Green:
		{
			cout << "Çåë¸íûé" << endl;
			break;
		}
		case Blue:
		{
			cout << "Ñèíèé" << endl;
			break;
		}
		case LightBlue:
		{
			cout << "Ãîëóáîé" << endl;
			break;
		}
		case Purple:
		{
			cout << "Ôèîëåòîâûé" << endl;
			break;
		}
	}
}

Color ReadColor()
{
	cout << "Ââåäèòå öèôðó îò 0 äî 6 " 
		<<"0 - êðàññíûé" << endl
		<<"1 - îðàíæåâûé" << endl
		<< "2 - æåëòûé" << endl
		<< "3 - çåë¸íûé" << endl
		<<"4 - ñèíèé" << endl
		<< "5 - ãîëóáîé" << endl
		<< "6 - ôèîëåòîââûé" << endl;
	int colorNumber;
	cin >> colorNumber;
	switch (colorNumber)
	{
		case 0:
		{
			return Red;
		}
		case 1:
		{
			return Orange;
		}
		case 2:
		{
			return Yellow;
		}
		case 3:
		{
			return Green;
		}
		case 4:
		{
			return Blue;
		}
		case 5:
		{
			return LightBlue;
		}
		case 6:
		{
			return Purple;
		}
	}
}
//TODO:
int CountRed(Color* color, int count)
{
	// TODO: избавиться от дублирования со следующей функцией
	int redCounter = 0;
	for (int i = 0; i < count; i++)
	{
		if (color[i] == Red)
		{
			redCounter++;
		}
	}
	return redCounter;
}

int CountColor(Color* color, int count, Color findedColor)
{
	int colorCounter = 0;
	for (int i = 0; i < count; i++)
	{
		if (color[i] == findedColor)
		{
			colorCounter++;
		}
	}
	return colorCounter;
}