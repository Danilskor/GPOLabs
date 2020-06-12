#include "..\..\Common\Lab1Header.h"

void Breakpoints_1_1_1_1()
{
    double add = 1.0;
    double sum = 0.0;
    for (int i = 0; i < 10; i++)
    {
        sum += add * i;
        add *= 1.1;
    }
    cout << "Total sum is " << sum << endl;
}

void Task_1_1_1_1()
{
    Breakpoints_1_1_1_1();
    
    //add	1.0000000000000000	double
    //add	1.1000000000000001	double
    //add	1.2100000000000002	double
    //add	1.3310000000000004	double
    //add	1.4641000000000006	double
    //add	1.6105100000000008	double
    //add	1.7715610000000011	double
    //add	1.9487171000000014	double
    //add	2.1435888100000016	double
    //add	2.3579476910000019	double
    
}