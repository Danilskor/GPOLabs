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
	if (length <= 0.0)
	{
		throw exception("ƒлина не может быть меньше 0");
	}
	this->_length = length;
}

void Rectangle::SetWidth(double width)
{
	if (width <= 0.0)
	{
		throw exception("Ўирина не может быть меньше 0");
	}
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
