#include "Circle.h"

//2.2.7.1
Circle* MakeCircle(double x, double y, double radius, string color)
{
	Circle* circle = new Circle;
	circle->X = x;
	circle->Y = y;
	circle->Radius = radius;
	circle->Color = color;
	return circle;
}

Circle* CopyCircle(Circle* circle)
{
	Circle* copiedCircle = new Circle;
	copiedCircle->Color = circle->Color;
	copiedCircle->X = circle->X;
	copiedCircle->Y = circle->Y;
	copiedCircle->Radius = circle->Radius;
	return copiedCircle;
}

void DemoCircle()
{
	Circle* circle1 = MakeCircle(5.0, 7.0, 7.5, "Крассный");
	Circle* circle2 = MakeCircle(5.0, 7.0, 7.5, "Крассный");
	Circle* circle3 = MakeCircle(5.0, 7.0, 7.5, "Крассный");

	Circle* copyCircle1 = CopyCircle(circle1);
	Circle* copyCircle2 = CopyCircle(circle2);
	Circle* copyCircle3 = CopyCircle(circle3);

	delete circle1;
	delete circle2;
	delete circle3;

	delete copyCircle1;
	delete copyCircle2;
	delete copyCircle3;
	// TODO: утечка памяти, исправить
}