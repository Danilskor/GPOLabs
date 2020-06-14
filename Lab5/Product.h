#pragma once
#include <iostream>
#include "CategoryType.h"

using namespace std;

class Product
{
private:
	CategoryType _category;
	string _name;
	double _cost;

public:
	Product(CategoryType category, string name, double  cost);

	void SetCategory(CategoryType category);
	void SetName(string name);
	void SetCost(double cost);

	CategoryType GetCategory();
	string GetName();
	double GetCost();
};