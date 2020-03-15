#include "Enum.h"
#include <iostream>

using namespace std;

//2.2.8.3
void DemoEnums()
{
	Color color = Red;
	WeekDay weekDay = Sunday;
	Genre genre = Horror;
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

	Genre* genres = new Genre[6];
	genres[0] = Comedy;
	genres[1] = Drama;
	genres[2] = Thriller;
	genres[3] = Action;
	genres[4] = Horror;
	genres[5] = BlockBuster;

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

	cout << "�������� ������ � ������� " << CountRed(colors, 6) << endl;
	cout << "����� ������ � ������� " << CountColor(colors, 6, Blue) << endl;

	delete[] colors;
	delete[] weekDays;
	delete[] genres;
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
			cout << "��������" << endl;
			break;
		}
		case Orange:
		{
			cout << "���������" << endl;
			break;
		}
		case Yellow:
		{
			cout << "Ƹ����" << endl;
			break;
		}
		case Green:
		{
			cout << "������" << endl;
			break;
		}
		case Blue:
		{
			cout << "�����" << endl;
			break;
		}
		case LightBlue:
		{
			cout << "�������" << endl;
			break;
		}
		case Purple:
		{
			cout << "����������" << endl;
			break;
		}
	}
}

Color ReadColor()
{
	cout << "������� ����� �� 0 �� 6 " 
		<<"0 - ��������" << endl
		<<"1 - ���������" << endl
		<< "2 - ������" << endl
		<< "3 - ������" << endl
		<<"4 - �����" << endl
		<< "5 - �������" << endl
		<< "6 - �����������" << endl;
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

Genre ReadGenre()
{
	cout << "������� ����� 0-5" 
		<< "0 - �������" << endl 
		<< "1 - �����" << endl
		<< "2 - �������" << endl
		<< "3 - ����" << endl
		<< "4 - ������" << endl
		<< "5 - ����������" << endl;
	int genreNumber;
	cin >> genreNumber;
	switch (genreNumber)
	{
		case 0:
		{
			return Comedy;
		}
		case 1:
		{
			return Drama;
		}
		case 2:
		{
			return Thriller;
		}
		case 3:
		{
			return Action;
		}
		case 4:
		{
			return Horror;
		}
		case 5:
		{
			return BlockBuster;
		}
	}
}

void WriteGenre(Genre genre)
{
	switch (genre)
	{
		case Comedy:
		{
			cout << "�������";
			break;
		}
		case Drama:
		{
			cout << "�����";
			break;
		}
		case Thriller:
		{
			cout << "�������";
			break;
		}
		case Action:
		{
			cout << "����";
			break;
		}
		case Horror:
		{
			cout << "������";
			break;
		}
		case BlockBuster:
		{
			cout << "����������";
			break;
		}
	}
}


//TODO:
int CountRed(Color* color, int count)
{
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