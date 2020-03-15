#include "FunctionStructure.h"
#include <iostream>
#include <limits>

using namespace std;

//2.2.5.1
void WriteRectangle(Rectanglee& rectangle)
{
	cout << "Цвет прямоугольника " << rectangle.Color << ", размер " <<
		rectangle.Length << 'x' << rectangle.Width << endl;
}

//2.2.5.2
void ReadRectangle(Rectanglee& rectangle)
{
	cout << "Введите цвет прясоугольника: ";
	getline(cin, rectangle.Color);
	cout << "Введите длину прясоугольника: ";
	cin >> rectangle.Length;
	cout << "Введите ширину прясоугольника: ";
	cin >> rectangle.Width;
}

//2.2.5.3
void DemoReadAndWriteRectangles()
{
	Rectanglee* arrayRectangle = new Rectanglee[5];
	for (int i = 0; i < 5; i++)
	{
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "Введите " << i + 1 << " прямоугольник" << endl;
		ReadRectangle(arrayRectangle[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << ": ";
		WriteRectangle(arrayRectangle[i]);
	}
	FindRectangle(arrayRectangle, 5);
	FindMaxRectangle(arrayRectangle, 5);
	delete[] arrayRectangle;
}

//2.2.5.4
void Exchange(Rectanglee& firstRectangle, Rectanglee& secondRectangle)
{
	Rectanglee tempRectangle;
	tempRectangle.Color = secondRectangle.Color;
	tempRectangle.Length = secondRectangle.Length;
	tempRectangle.Width = secondRectangle.Width;

	secondRectangle.Color = firstRectangle.Color;
	secondRectangle.Length = firstRectangle.Length;
	secondRectangle.Width = firstRectangle.Width;

	firstRectangle.Color = tempRectangle.Color;
	firstRectangle.Length = tempRectangle.Length;
	firstRectangle.Width = tempRectangle.Width;
}

//2.2.5.5
void FindRectangle(Rectanglee* rectangles, int count)
{
	Rectanglee maxLengthRectangle;
	maxLengthRectangle.Color = rectangles[0].Color;
	maxLengthRectangle.Length = rectangles[0].Length;
	maxLengthRectangle.Width = rectangles[0].Width;
	for (int i = 0; i < count; i++)
	{
		if (rectangles[i].Length > maxLengthRectangle.Length)
		{
			maxLengthRectangle.Color = rectangles[i].Color;
			maxLengthRectangle.Length = rectangles[i].Length;
			maxLengthRectangle.Width = rectangles[i].Width;
		}
	}
	cout << "Прямоугольник с максималной длиной:" << endl
		<< "Цвет - " << maxLengthRectangle.Color <<
		", размер - " << maxLengthRectangle.Length << 'x' << maxLengthRectangle.Width
		<< endl;
}

//2.2.5.6
void FindMaxRectangle(Rectanglee* rectangles, int count)
{
	Rectanglee maxSquareRectangle;
	maxSquareRectangle.Color = rectangles[0].Color;
	maxSquareRectangle.Length = rectangles[0].Length;
	maxSquareRectangle.Width = rectangles[0].Width;
	for (int i = 0; i < count; i++)
	{
		if ((rectangles[i].Length * rectangles[i].Width) > (maxSquareRectangle.Length
			* maxSquareRectangle.Width))
		{
			maxSquareRectangle.Color = rectangles[i].Color;
			maxSquareRectangle.Length = rectangles[i].Length;
			maxSquareRectangle.Width = rectangles[i].Width;
		}
	}
	cout << "Прямоугольник с наибольшей площадью" << endl
		<< "Цвет " << maxSquareRectangle.Color <<
		", размер " << maxSquareRectangle.Length << 'x' << maxSquareRectangle.Width
		<< endl;
}

