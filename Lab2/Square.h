#pragma once

#include <string>
#include "Windows.h"

using namespace std;
// TODO: грам ошибка в названии
// Я не мог его правильно назвать, потому что 
// Rectangle конфликтует с каким-то другим классом
struct Square
{
	double Length = 0;
	double Width = 0;
	string Color;
};

Square* MakeSquare(double length, double width, string color);
Square* CopySquare(Square* square);
void DemoSquare();

// 2.2.5.1
// TODO: все функции в файл с прямоугольником
void WriteSquare(Square& square);

// 2.2.5.2
void ReadSquare(Square& square);

// 2.2.5.3
void DemoReadAndWriteSquares();

// 2.2.5.4
void Exchange(Square& firstSquare, Square& secondSquare);

// 2.2.5.5
void FindSquare(Square* squares, int count);

// 2.2.5.6
void FindMaxSquare(Square* squares, int count);