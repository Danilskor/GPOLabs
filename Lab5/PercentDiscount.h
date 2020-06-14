#pragma once
#include "DiscountBase.h"

class PercentDiscount : public DiscountBase
{
private:
	double _percent;

public:

	void SetPercent(double percent);
	double GetPercent();
	PercentDiscount(double percent, CategoryType category);

	double Calculate(Product* product) override;
};
