#include <iostream>
using namespace std;
int main()
{
	int num[10];
	int averageTotal = 0;
	int stdTotal = 0;
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter a number for your array for index " << i <<" : ";
		cin >> num[i];
		cout << endl;
		averageTotal += num[i];

	}
	double mean = averageTotal / 10;
	for (int i = 0; i < 10; i++)
	{
		stdTotal += pow(num[i] - mean, 2);
	}
	double std = sqrt(stdTotal / 10);
	cout << "The mean of your numbers is " << mean << endl;
	cout << "The standard deviation of your numbers is " << std << endl;
	system("pause");
	return 0;
}



	