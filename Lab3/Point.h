#pragma once

class Point
{
private:
	double _x;
	double _y;

public:
	Point(double x, double y);
	
	void SetX(double x);
	void SetY(double y);

	double GetX();
	double GetY();

};

