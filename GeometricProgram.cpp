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

	Ring firstRing(0.1, -1.0, &Point(0.0, 0.0));

	cout << Ring::GetAllRingsCount() << endl;
	Ring secondRing(2.0, 2.5, &Point(2.0, -1.0));
	cout << Ring::GetAllRingsCount() << endl;
	Ring thirdRing(3.0, 7.25, &Point(-3.0, 10.00));
	cout << Ring::GetAllRingsCount() << endl;

	cout << "Площадь второго круга: " << secondRing.GetArea() << endl;
	cout << "Площадь третьего круга: " << thirdRing.GetArea() << endl;

	cout << "Количество колец до вызова конструктора: " << Ring::GetAllRingsCount();
	Ring* ring = new Ring(10.0, 5.0, &Point(25.0, 25.0));
	cout << "Количество колец после вызова конструктора: " << Ring::GetAllRingsCount();
	delete ring;
	cout << "Количество колец после вызова деструктора: " << Ring::GetAllRingsCount();


	system("pause");
}
