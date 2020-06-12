#pragma once

class Point
{
private:
	double _x;
	double _y;
	void SetX(double x);
	void SetY(double y);

public:
	Point(double x, double y);

	double GetX();
	double GetY();

};

