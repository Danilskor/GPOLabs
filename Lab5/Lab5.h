#pragma once
#pragma once
#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "User.h"
#include "PaidUser.h"
#include "Post.h"
#include "CategoryType.h"
#include "DiscountBase.h"
#include "CertificateDiscount.h"
#include "Product.h"
#include "PercentDiscount.h"

using namespace std;

void ShowName(Person* person);
User* Login(User** users, int usersCount,
	string enteredLogin, string enteredPassword);
void DemoInheritance();
void DemoRefactoring();
void ShowCheckWithDiscount(DiscountBase* discount, Product**
	products, int productsCount);
void Lab5();