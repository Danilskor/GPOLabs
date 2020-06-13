#include "Rectangle.h"


Rectangle::Rectangle()
{
	SetCentre(nullptr);
}

Rectangle::Rectangle(double length, double width, Point* centre)
{
	SetLength(length);
	SetWidth(width);
	SetCentre(centre);
}

void Rectangle::SetLength(double length)
{
	DoubleValidator::AssertPositiveValue(length);
	this->_length = length;
}

void Rectangle::SetWidth(double width)
{
	DoubleValidator::AssertPositiveValue(width);
	this->_width = width;
}

void Rectangle::SetCentre(Point* centre)
{
	this->_centre = centre;
}

double Rectangle::GetLength()
{
	return this->_length;
}

double Rectangle::GetWidth()
{
	return this->_width;
}

Point* Rectangle::GetCentre()
{
	return this->_centre;
}
