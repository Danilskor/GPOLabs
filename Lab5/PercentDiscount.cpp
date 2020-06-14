#include "PercentDiscount.h"

void PercentDiscount::SetPercent(double percent)
{
	if (percent < 0.0 || percent > 100.0)
	{
		throw std::exception("Wrong percentage");
	}
	_percent = percent;
}

double PercentDiscount::GetPercent()
{
	return _percent;
}

PercentDiscount::PercentDiscount(double percent, CategoryType category) :
	DiscountBase(category)
{
	SetPercent(percent);
}

double PercentDiscount::Calculate(Product* product)
{
	if (product->GetCategory() == this->GetCategory())
	{
		return product->GetCost() * ((100.0 - _percent) / 100);
	}
	return product->GetCost();
}