#include "Square.h"
#include <iostream>
#include <limits>

using namespace std;

#if defined(max)
#undef max
#endif

//2.2.5.1
void WriteSquare(Square& square)
{
	cout << "Цвет прямоугольника " << square.Color << ", размер " <<
		square.Length << 'x' << square.Width << endl;
}

//2.2.5.2
void ReadSquare(Square& square)
{
	cout << "Введите цвет прясоугольника: ";
	getline(cin, square.Color);
	cout << "Введите длину прясоугольника: ";
	cin >> square.Length;
	cout << "Введите ширину прясоугольника: ";
	cin >> square.Width;
}

//2.2.5.3
void DemoReadAndWriteSquares()
{
	Square* arraySquare = new Square[5];
	for (int i = 0; i < 5; i++)
	{
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "Введите " << i + 1 << " прямоугольник" << endl;
		ReadSquare(arraySquare[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << ": ";
		WriteSquare(arraySquare[i]);
	}
	FindSquare(arraySquare, 5);
	FindMaxSquare(arraySquare, 5);
	delete[] arraySquare;
}

//2.2.5.4
void Exchange(Square& firstSquare, Square& secondSquare)
{
	Square tempSquare;
	tempSquare.Color = secondSquare.Color;
	tempSquare.Length = secondSquare.Length;
	tempSquare.Width = secondSquare.Width;

	secondSquare.Color = firstSquare.Color;
	secondSquare.Length = firstSquare.Length;
	secondSquare.Width = firstSquare.Width;

	firstSquare.Color = tempSquare.Color;
	firstSquare.Length = tempSquare.Length;
	firstSquare.Width = tempSquare.Width;
}

//2.2.5.5
void FindSquare(Square* squares, int count)
{
	Square maxLengthSquare;
	maxLengthSquare.Color = squares[0].Color;
	maxLengthSquare.Length = squares[0].Length;
	maxLengthSquare.Width = squares[0].Width;
	for (int i = 0; i < count; i++)
	{
		if (squares[i].Length > maxLengthSquare.Length)
		{
			maxLengthSquare.Color = squares[i].Color;
			maxLengthSquare.Length = squares[i].Length;
			maxLengthSquare.Width = squares[i].Width;
		}
	}
	cout << "Прямоугольник с максималной длиной:" << endl
		<< "Цвет - " << maxLengthSquare.Color <<
		", размер - " << maxLengthSquare.Length << 'x' << maxLengthSquare.Width
		<< endl;
}

//2.2.5.6
void FindMaxSquare(Square* squares, int count)
{
	Square maxSquareSquare;
	maxSquareSquare.Color = squares[0].Color;
	maxSquareSquare.Length = squares[0].Length;
	maxSquareSquare.Width = squares[0].Width;
	for (int i = 0; i < count; i++)
	{
		if ((squares[i].Length * squares[i].Width) > (maxSquareSquare.Length
			* maxSquareSquare.Width))
		{
			maxSquareSquare.Color = squares[i].Color;
			maxSquareSquare.Length = squares[i].Length;
			maxSquareSquare.Width = squares[i].Width;
		}
	}
	cout << "Прямоугольник с наибольшей площадью" << endl
		<< "Цвет " << maxSquareSquare.Color <<
		", размер " << maxSquareSquare.Length << 'x' << maxSquareSquare.Width
		<< endl;
}

