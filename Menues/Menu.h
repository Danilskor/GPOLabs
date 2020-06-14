#pragma once

#include <iostream>
#include "..\Common\Input.h"
#include "..\Common\Lab1Header.h"
#include  "..\Lab2\Execute.h"
#include "../Lab3/Lab3_execute.h"
#include "../Lab4/GeometricProgram.h"
#include "../Lab5/Lab5.h"

using namespace std;

const int EXIT_MENU_VALUE = 0;

int MainMenu(GeometricProgram* lab4);
void PrintMainMenu();

int FirstLabMenu();
void PrintFirstLabMenu();

void PrintGeometricProgrammMenu();
void GeometricProgrammMenu(GeometricProgram* geometricProgram);