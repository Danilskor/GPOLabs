#include "GeometricProgram.h"

void GeometricProgram::DemoCollision()
{
	Rectangle firstRectangle(1, 1, &Point(0.0, 0.0));
	Rectangle secondRectangle(1, 4, &Point(1.0, 0.0));

	if (CollisionManager::IsCollision(firstRectangle, secondRectangle))
	{
		cout << "Прямоугольники пересекаются" << endl;
	}

	Rectangle thirdRectangle(1, 1, &Point(0.0, 0.0));
	Rectangle fourthRectangle(5, 5, &Point(100.0, -100.0));

	if (!CollisionManager::IsCollision(thirdRectangle, fourthRectangle))
	{
		cout << "Прямоугольники не пересекаются" << endl;
	}

	Ring firstRing(1, 2, &Point(0.0, 0.0));
	Ring secondRing(2, 3, &Point(2.0, 0.0));

	if (CollisionManager::IsCollision(firstRing, secondRing))
	{
		cout << "Кольца пересекаются" << endl;
	}

	Ring thirdRing(1, 2, &Point(0.0, 0.0));
	Ring fourthRing(3, 4, &Point(10.0, 10.00));
	if (!CollisionManager::IsCollision(thirdRing, fourthRing))
	{
		cout << "Кольца не пересекаются" << endl;
	}
	system("pause");
}

void GeometricProgram::DemoRing()
{
	cout << Ring::GetAllRingsCount() << endl;
	Ring firstRing(2.0, 2.5, &Point(2.0, -1.0));
	cout << Ring::GetAllRingsCount() << endl;
	Ring secondRing(3.0, 7.25, &Point(-3.0, 10.0));
	cout << Ring::GetAllRingsCount() << endl;

	cout << "Площадь второго круга: " << firstRing.GetArea() << endl;
	cout << "Площадь третьего круга: " << secondRing.GetArea() << endl;

	cout << "Количество колец до вызова конструктора: " << Ring::GetAllRingsCount() << endl;
	Ring* ring = new Ring(5.0, 10.0, &Point(25.0, 25.0));
	cout << "Количество колец после вызова конструктора: " << Ring::GetAllRingsCount() << endl;
	delete ring;
	cout << "Количество колец после вызова деструктора: " << Ring::GetAllRingsCount() << endl;


	system("pause");
}

void GeometricProgram::DemoRectangle()
{
	int RectangleArraySize = 3;
	Rectangle* rectangles = new Rectangle[RectangleArraySize];
	rectangles[0] = Rectangle(10.0, 3.7, &Point(-15.2, 1.1));
	rectangles[1] = Rectangle(0.9, 3.2, &Point(100.0, -32.0));
	rectangles[2] = Rectangle(9.0, 9.0, &Point(0.0, 0.0));

	for (int i = 0; i < RectangleArraySize; i++)
	{
		cout << "X = " << rectangles[i].GetCentre()->GetX() << " Y = " <<
			rectangles[i].GetCentre()->GetY() << " длина = " <<
			rectangles[i].GetLength() << " ширина = " <<
			rectangles[i].GetWidth() << endl;
	}
	delete[] rectangles;
	system("pause");
}