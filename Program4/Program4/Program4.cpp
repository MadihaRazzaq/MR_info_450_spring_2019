#include <iostream>
using namespace std;
int main()
{
	/* This program converts gallons to liters using floating point numbers. */
	double gallons, liters;
	cout << "Enter number of gallons : ";
	cin >> gallons; // this inputs from the user
	liters = gallons * 3.7854;
	cout << "Liters = " << liters << endl;
	system("pause");
	return 0;
}