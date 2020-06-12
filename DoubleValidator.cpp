#include "DoubleValidator.h"

bool DoubleValidator::IsValuePositive(double value)
{
	return (value >= 0.0);
}

bool DoubleValidator::IsValueInRange(double value, double min, double max)
{
	return (value >= min && value <= max);
}

void DoubleValidator::AssertPositiveValue(double value)
{
	if (!IsValuePositive(value))
	{
		throw std::exception("Значение не может быть отрицательным.");
	}
}

void DoubleValidator::AssertValueInRange(double value, double min, double max)
{
	if (!IsValueInRange(value, min, max))
	{
		throw std::exception("Значение не попадает в диапазон между min и max.");
	}
}