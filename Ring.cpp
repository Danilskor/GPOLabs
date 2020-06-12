#include "Ring.h"

#include "Ring.h"
#include <exception>

int Ring::AllRingsCount = 0;

void Ring::AssertOnPositiveValue(double value)
{
	if (value <= 0.0)
	{
		throw std::exception(" Radius cant be negative value. ");
	}
}

Ring::Ring(double innerRadius, double outerRadius, Point* centre)
{
	SetInOutRadii(innerRadius, outerRadius);
	SetCentre(centre);
	AllRingsCount++;
}

void Ring::SetInOutRadii(double innerRadius, double outerRadius)
{
	DoubleValidator::AssertPositiveValue(innerRadius);
	DoubleValidator::AssertPositiveValue(outerRadius);
	if (innerRadius > outerRadius)
	{
		throw std::exception("Inner radius cant be bigger than outer and outer less than inner.");
	}
	this->_innerRadius = innerRadius;
	this->_outerRadius = outerRadius;
}

void Ring::SetCentre(Point* centre)
{
	this->_centre = centre;
}

double Ring::GetInnerRadius()
{
	return this->_innerRadius;
}

double Ring::GetOuterRadius()
{
	return this->_outerRadius;
}

Point* Ring::GetCentre()
{
	return this->_centre;
}

double Ring::GetArea()
{
	double innerRingArea = this->PI * (this->_innerRadius * this->_innerRadius);
	double outerRingArea = this->PI * (this->_outerRadius * this->_outerRadius);

	return (outerRingArea - innerRingArea);
}

int Ring::GetAllRingsCount()
{
	return AllRingsCount;
}

Ring::~Ring()
{
	AllRingsCount--;
}