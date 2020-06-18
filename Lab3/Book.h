#pragma once
#include <string>
#include <iostream>

using namespace std;

class Book
{

private:
	 string _name;
	 int _year = 0;
	 int _pages = 0;
	 int _authorsCount = 0;
	 string* _authors;

public:
	Book();
	Book(string name, int year, int pages, 
		string* authors, int authorsCount);
	~Book();

	

	void SetName(string name);
	void SetYear(int year);
	void SetPages(int pages);
	void SetAuthors(string* authors, int authorsCount);

	int GetYear();
	int GetPages();
	int GetAutorsCount(); // TODO: грамошибка
	string& GetName();
	string* GetAuthors();

	Book* FindAuthor(string author);

	Book& operator = (const Book& other);
};

