#include "Lab5.h"

void ShowName(Person* person)
{
	cout << person->GetName() << " " << person->GetSurname() << " " <<
		person->GetPatronymic();
}

User* Login(User** users, int usersCount, string enteredLogin,
	string enteredPassword)
{
	for (int i = 0; i < usersCount; i++)
	{
		if (users[i]->GetLogin() == enteredLogin)
		{
			if (users[i]->IsCorrectPassword(enteredPassword))
			{
				return users[i];
			}
			else
			{
				throw exception("Uncorrect password");
			}
		}
	}
	return nullptr;
}

void DemoInheritance()
{
	Person person("Ivanov", "Ivan", "Ivanovich");
	ShowName(&person);
	cout << endl;

	Student student("Petrov", "Alex", "Pogchampovich", 105331554, 2017);
	ShowName(&student);
	cout << endl;

	Teacher teacher("Bagrotion", "Lidia", "Rudolfovna", "Docent");
	ShowName(&teacher);
	cout << endl;
}

void DemoRefactoring()
{
	User** users = new User * [8] //TODO: магические числа перенести в переменные
	{
		new User(100000, "morkovka1995", "1995morkovka"),
		new User(100001, "ilon_mask", "X ae A-12"),
		new User(100002, "megazver", "password"),
		new User(100003, "yogurt", "ksTPQzSu"),
		new PaidUser(200000, "TheKnyazz", "JHPzPGFG"),
		new PaidUser(200001, "system_exe", "UgfkDGmU"),
		new PaidUser(200002, "RazorQ", "TBgRnbCP"),
		new PaidUser(200003, "schdub", "CetyQVID")
	};

	string login = "megazver";
	string password = "password";
	User* loginedUser = Login(users, 8, login, password); //TODO: мч

	cout << "Signed in as: " << loginedUser->GetLogin() << endl;

	login = "system_exe";
	password = "UgfkDGmU";
	loginedUser = Login(users, 8, login, password); //TODO: мч

	cout << "Signed in as: " << loginedUser->GetLogin() << endl;

	try
	{
		User user1(1, "fd{dw}", "1234");
	}
	catch (const std::exception& ex)
	{
		cout << "Exception: " << ex.what() << endl;;
	}

	for (int i = 0; i < 8; i++) //TODO: магическое число
	{
		delete users[i];
	}
	delete[] users;
}

void ShowCheckWithDiscount(DiscountBase* discount, Product** products,
	int productsCount)
{
	double totalCost = 0;
	for (int i = 0; i < productsCount; i++)
	{
		cout << endl << products[i]->GetName() << " " << "Old Cost: "
			<< products[i]->GetCost() << " New Cost: ";
		double newCost = discount->Calculate(products[i]);
		cout << newCost;
		totalCost = totalCost + newCost;
	}
	cout << endl << "Total Cost with discount: " << totalCost;
}

void Lab5()
{
	DemoInheritance();
	system("pause");
	DemoRefactoring();
	system("pause");
	Product** products = new Product * [4] //TODO: магическое число
	{
		new Product(TVs, "BetterTV", 5000.0),
		new Product(Phones, "Suphone", 1500.0),
		new Product(Laptops, "Asus Vivibook 15", 35000.0),
		new Product(Fans, "Super Fan 2000", 5000.0)
	};

	PercentDiscount percent(99.0, Fans);
	CertificateDiscount certificate(Phones, 300.0);

	cout << endl << "Check with 99% discount on Fans: ";
	ShowCheckWithDiscount(&percent, products, 4); //TODO: мч

	cout << endl << endl << "Check with 300 bonus sertificate for Fans:" << endl;
	ShowCheckWithDiscount(&certificate, products, 4); //TODO: мч

	cout << endl;
	cout << "Amount left on certificate: " << certificate.GetAmount() << endl;
	
	for (int i = 0; i < 4; i++) //TODO: мч
	{
		delete products[i];
	}
	delete[] products;

	system("pause");
}