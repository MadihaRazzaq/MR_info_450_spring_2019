#include <iostream>
using namespace std;
int main()
{
	const double PI = 3.14;
	int radius = 5;
	double area;
	double circumference;
	circumference = 2 * PI * radius;
	area = PI * radius * radius;
	cout << "The circumference is : " << circumference << endl;
	cout << "The area is : " << area << endl;
	system("pause");
	return 0;
}