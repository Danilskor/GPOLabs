#pragma once

#pragma once
#include "Lab3/Point.h"
#include "DoubleValidator.h"
#define _USE_MATH_DEFINES
#include <cmath>

class Ring
{
private:
	static int AllRingsCount;

	double _innerRadius;
	double _outerRadius;
	Point* _centre;

	void AssertOnPositiveValue(double value);
	const double PI = 3.14159;

public:
	Ring(double innerRadius, double outerRadius, Point* centre);

	void SetInOutRadii(double innerRadius, double outerRadius);
	void SetCentre(Point* centre);

	double GetInnerRadius();
	double GetOuterRadius();
	Point* GetCentre();

	double GetArea();

	static int GetAllRingsCount();

	~Ring();
};