#pragma once

#include <string>

using namespace std;
// TODO: грам ошибка в названии
struct Rectanglee
{
	double Length = 0;
	double Width = 0;
	string Color;
};

Rectanglee* MakeRectangle(double length, double width, string color);
Rectanglee* CopyRectangle(Rectanglee* rectangle);
void DemoRectangle();

// 2.2.5.1
// TODO: все функции в файл с прямоугольником
void WriteRectangle(Rectanglee& rectangle);

// 2.2.5.2
void ReadRectangle(Rectanglee& rectangle);

// 2.2.5.3
void DemoReadAndWriteRectangles();

// 2.2.5.4
void Exchange(Rectanglee& firstRectangle, Rectanglee& secondRectangle);

// 2.2.5.5
void FindRectangle(Rectanglee* rectangles, int count);

// 2.2.5.6
void FindMaxRectangle(Rectanglee* rectangles, int count);