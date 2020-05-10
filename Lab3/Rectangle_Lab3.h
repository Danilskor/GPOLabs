#pragma once

#include <exception>
#include "Point.h"


using namespace std;

class cRectangle
{
private:
	double _length;
	double _width;
	Point* _centre;

public:
	cRectangle();
	cRectangle(double length, double width, Point* centre);

	void SetLength(double length);
	void SetWidth(double width);
	void SetCentre(Point* centre);

	double Getlength();
	double GetWidth();
	Point* GetCentre();

};

