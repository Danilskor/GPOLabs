#include "Rectangle.h"

Rectanglee* MakeRectangle(double length, double width, string color)
{
	Rectanglee* rectangle = new Rectanglee;
	rectangle->Length = length;
	rectangle->Width = width;
	rectangle->Color = color;
	return rectangle;
}

Rectanglee* CopyRectangle(Rectanglee* rectangle)
{
	Rectanglee* copiedRectangle = new Rectanglee;
	copiedRectangle->Length = rectangle->Length;
	copiedRectangle->Width = rectangle->Width;
	copiedRectangle->Color = rectangle->Color;
	return copiedRectangle;
}