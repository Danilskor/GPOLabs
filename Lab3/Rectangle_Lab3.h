#pragma once

#include <exception>
#include "Point.h"


using namespace std;
// TODO: имя файла
// TODO: имя класса
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

	double Getlength(); // TODO: именование
	double GetWidth();
	Point* GetCentre();

};

