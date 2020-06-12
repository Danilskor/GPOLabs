#include "CollisionManager.h"

bool CollisionManager::IsCollision(Rectangle& first, Rectangle& second)
{
	double firstX = first.GetCentre()->GetX();
	double secondX = second.GetCentre()->GetX();

	double firstY = first.GetCentre()->GetY();
	double secondY = second.GetCentre()->GetY();

	double firstLength = first.GetLength();
	double secondLength = second.GetLength();

	double firstWidth = first.GetWidth();
	double secondWidth = second.GetWidth();

	bool collisionX = abs(firstX - secondX) < ((firstWidth + secondWidth) / 2);
	bool collisionY = abs(firstY - secondY) < ((firstLength + secondLength) / 2);

	return (collisionX && collisionY);
}

bool CollisionManager::IsCollision(Ring& first, Ring& second)
{
	double firstX = first.GetCentre()->GetX();
	double secondX = second.GetCentre()->GetX();

	double firstY = first.GetCentre()->GetY();
	double secondY = second.GetCentre()->GetY();

	double firstRadius = first.GetOuterRadius();
	double secondRadius = second.GetOuterRadius();

	double hypotenus = sqrt((abs(firstX - secondX) * abs(firstX - secondX))
		+ (abs(firstY - secondY) * abs(firstY - secondY)));

	return hypotenus < (firstRadius + secondRadius);
}