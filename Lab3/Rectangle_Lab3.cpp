#include "Rectangle_Lab3.h"


cRectangle::cRectangle()
{
	SetCentre(nullptr);
}


cRectangle::cRectangle(double length, double width, Point* centre)
{
	SetLength(length);
	SetWidth(width);
	SetCentre(centre);
}

void cRectangle::SetLength(double length)
{
	if (length <= 0.0)
	{
		throw exception("ƒлина не может быть меньше 0");
	}
	this->_length = length;
}

void cRectangle::SetWidth(double width)
{
	if (width <= 0.0)
	{
		throw exception("Ўирина не может быть меньше 0");
	}
	this->_width = width;
}

void cRectangle::SetCentre(Point* centre)
{
	this->_centre = centre;
}

double cRectangle::Getlength()
{
	return this->_length;
}

double cRectangle::GetWidth()
{
	return this->_width;
}

Point* cRectangle::GetCentre()
{
	return this->_centre;
}
