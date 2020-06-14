#pragma once

#include <exception>

static class DoubleValidator
{
public:
	static bool IsValuePositive(double value);
	static void AssertPositiveValue(double value);

	static bool IsValueInRange(double value, double min, double max);
	static void AssertValueInRange(double value, double min, double max);
};