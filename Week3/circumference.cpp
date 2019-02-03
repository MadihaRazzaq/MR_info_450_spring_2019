#include <iostream>
using namespace std;
double calculateCircumference(double radius);
const float PI = 3.14159265358979323846;
int main()
{
	double radius;
	double circumference;
	cout << "This program will calculate the circumference of a circle." << endl;
	cout << "Enter any radius : ";
	cin >> radius;
	circumference = calculateCircumference(radius);
	cout << "The circumference of a circle with radius " << radius << " is " << circumference << endl;	
	system("pause");
	return 0;
	
}
double calculateCircumference(double radius)
{
	double circumference;
	circumference = 2 * PI * radius;
	return circumference;
}

