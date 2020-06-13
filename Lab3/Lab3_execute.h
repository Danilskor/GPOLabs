#pragma once

#include <iostream>
#include <ctime>
#include "Book.h"
#include "../Common/Input.h"
#include "../Common/Constants/Consts.h"
#include "Rectangle.h"
#include "Time.h"
#include "Flight.h"
#include "Route.h"
#include "Band.h"

void Lab3();

void DemoBook();
void WriteBookInConsole(Book& book);
void ReadBookFromConsole(string& name, int& year, int& pages, 
	int& numberOfAuthors, string*& authors);
Book* FindBookByAuthor(Book* books, int booksCount, string author);

void DemoRectangleWithPoint();

void DemoFlightWithTime();
void WriteFlightToConsole(Flight* flight);
void WriteTimeToConsole(Time* time);
Time GetFlightTimeMinutes(Flight* flight);

void DemoRoute();
void WriteRouteInCounsole(Route& route);
void ReadRouteFromConsole(int& number, int& timeAverageMinutes, int& frequencyMinutes, 
	string*& stops, int& stopsCount); 
Route* FindRouteByStop(Route* routes, int routesCount, string stopName);

void DemoBand();
void WriteSongToConsole(Song* songs);
void WriteSongsToConsole(Song* songs, int songCount);
void WriteAlbumToConsole(Album* albums);