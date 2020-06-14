#include "CertificateDiscount.h"

void CertificateDiscount::SetAmount(double amount)
{
	if (amount < 0 || amount > 100000)
	{
		throw std::exception("Wrong amount range");
	}
	_amount = amount;
}

double CertificateDiscount::GetAmount()
{
	return _amount;
}

CertificateDiscount::CertificateDiscount(CategoryType category, double amount) :
	DiscountBase(category)
{
	SetAmount(amount);
}

double CertificateDiscount::Calculate(Product* product)
{
	if (product->GetCategory() == this->GetCategory())
	{
		double newCost = product->GetCost() - _amount;
		if (newCost <= 0.0)
		{
			_amount = _amount - product->GetCost();
			return 0.0;
		}
		else
		{
			_amount = 0.0;
			return newCost;
		}
	}
	return product->GetCost();
}