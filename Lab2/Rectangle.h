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