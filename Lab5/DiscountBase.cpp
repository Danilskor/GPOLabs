#include "DiscountBase.h"

void DiscountBase::SetCategory(CategoryType category)
{
	this->_category = category;
}

CategoryType DiscountBase::GetCategory()
{
	return this->_category;
}

DiscountBase::DiscountBase(CategoryType category)
{
	SetCategory(category);
}