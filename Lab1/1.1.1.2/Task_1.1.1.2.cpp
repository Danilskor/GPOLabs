#include "..\..\Common\Lab1Header.h"

void Breakpoints_1_1_1_2()
{
    double add = 1.0;
    double sum = 0.0;
    for (int i = 0; i < 1000; i++)
    {
        sum += add * i; // Поставьте условную точку останова здесь
        if (i % 3 == 0)
        {
            add *= 1.1;
        }
        else
        {
            add /= 3.0;
        }
    }
    cout << "Total sum is " << sum << endl;
}

void Task_1_1_1_2()
{
    Breakpoints_1_1_1_2();
    //add	1.1194811001398437e-236	double
}