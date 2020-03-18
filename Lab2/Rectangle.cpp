#include "Rectangle.h"

Rectangle* MakeRectangle(double length, double width, string color)
{
	Rectangle* rectangle = new Rectangle;
	rectangle->Length = length;
	rectangle->Width = width;
	rectangle->Color = color;
	return rectangle;
}

Rectangle* CopyRectangle(Rectangle* rectangle)
{
	Rectangle* copiedRectangle = new Rectangle;
	copiedRectangle->Length = rectangle->Length;
	copiedRectangle->Width = rectangle->Width;
	copiedRectangle->Color = rectangle->Color;
	return copiedRectangle;
}