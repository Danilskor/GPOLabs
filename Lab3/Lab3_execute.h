#pragma once

#include "Book.h"
#include "Common/ConsoleOutput/ConsoleOutput.h"
#include "Common/InputChecking/IntegerReading.h"

void Lab3();

void DemoBook();
void WriteBookInConsole(Book& book);
void ReadBookFromConsole(string& name, int& year, int& pages, 
	int& numberOfAuthors, string*& authors);
Book* FindBookByAuthor(Book* books, int booksCount, string author);