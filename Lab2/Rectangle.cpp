#include "Square.h"

Square* MakeSquare(double length, double width, string color)
{
	Square* square = new Square;
	square->Length = length;
	square->Width = width;
	square->Color = color;
	return square;
}

Square* CopySquare(Square* square)
{
	Square* copiedSquare = new Square;
	copiedSquare->Length = square->Length;
	copiedSquare->Width = square->Width;
	copiedSquare->Color = square->Color;
	return copiedSquare;
}