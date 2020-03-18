#pragma once

#include <string>

using namespace std;
// TODO: грам ошибка в названии
// Почему-то он мне не давал назвать правильно с одной 'e' на конце
struct Rectangle
{
	double Length = 0;
	double Width = 0;
	string Color;
};

Rectangle* MakeRectangle(double length, double width, string color);
Rectangle* CopyRectangle(Rectangle* rectangle);
void DemoRectangle();

// 2.2.5.1
// TODO: все функции в файл с прямоугольником
void WriteRectangle(Rectangle& rectangle);

// 2.2.5.2
void ReadRectangle(Rectangle& rectangle);

// 2.2.5.3
void DemoReadAndWriteRectangles();

// 2.2.5.4
void Exchange(Rectangle& firstRectangle, Rectangle& secondRectangle);

// 2.2.5.5
void FindRectangle(Rectangle* rectangles, int count);

// 2.2.5.6
void FindMaxRectangle(Rectangle* rectangles, int count);