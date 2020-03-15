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

	cout << "Крассных цветов в массиве " << CountRed(colors, 6) << endl;
	cout << "Синих цветов в массиве " << CountColor(colors, 6, Blue) << endl;

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
			cout << "Крассный" << endl;
			break;
		}
		case Orange:
		{
			cout << "Оранжевый" << endl;
			break;
		}
		case Yellow:
		{
			cout << "Жёлтый" << endl;
			break;
		}
		case Green:
		{
			cout << "Зелёный" << endl;
			break;
		}
		case Blue:
		{
			cout << "Синий" << endl;
			break;
		}
		case LightBlue:
		{
			cout << "Голубой" << endl;
			break;
		}
		case Purple:
		{
			cout << "Фиолетовый" << endl;
			break;
		}
	}
}

Color ReadColor()
{
	cout << "Введите цифру от 0 до 6 " 
		<<"0 - крассный" << endl
		<<"1 - оранжевый" << endl
		<< "2 - желтый" << endl
		<< "3 - зелёный" << endl
		<<"4 - синий" << endl
		<< "5 - голубой" << endl
		<< "6 - фиолетоввый" << endl;
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
	cout << "Введите цмфру 0-5" 
		<< "0 - Комедия" << endl 
		<< "1 - Драма" << endl
		<< "2 - Триллер" << endl
		<< "3 - Экшн" << endl
		<< "4 - Хоррор" << endl
		<< "5 - Блокбастер" << endl;
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
			cout << "Комедия";
			break;
		}
		case Drama:
		{
			cout << "Драма";
			break;
		}
		case Thriller:
		{
			cout << "Триллер";
			break;
		}
		case Action:
		{
			cout << "Экшн";
			break;
		}
		case Horror:
		{
			cout << "Хоррор";
			break;
		}
		case BlockBuster:
		{
			cout << "Блокбастер";
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