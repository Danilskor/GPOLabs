#include<iostream>

using namespace std;

void main()
{
	int n;
	cout << "Enter char array size: ";
	cin >> n;
	cout << endl;
	char* array = new char[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Enter a[" << i << "]: ";
		cin >> array[i];
	}
	cout << "Your char array is:\n";
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << ' ';
	}
	delete[] array;
}