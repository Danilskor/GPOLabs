#include <iostream>
#include "..\Lab2\Exception.h"

using namespace std;

//2.2.1.1 and 2.2.1.2
void Sort(double* values, int count)
{
	if (count <= 0)
	{
		throw exception("Error. Negative count.");
	}

	double swap;
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			if (values[i] < values[j])
			{
				swap = values[i];
				values[i] = values[j];
				values[j] = swap;
			}
		}
	}
}

void DemoSort()
{
	int count = 5;
	double* values = new double[count] {100.0, 249.0, 12.0, 45.0, 23.5};
	Sort(values, count);

	count = -1;
	try
	{
		Sort(values, count);
	}
	catch (exception)
	{
		cout << "Exception catched!" << endl;
	}
}