#include <iostream>
using namespace std;
int main()
{
	int value;
	bool isYear = false;
	cout << "This pogram will let you know if the year you eneterd is a leap year or not." << endl;
	cout << "If you wish to end the program at anytime type 0." << endl;
	cout << "Please enter a year you want to check : ";
	cin >> value;

	while (value != 0)
	{
		if (value % 4 == 0)
			isYear = true;
		if (value % 100 == 0)
			isYear = false;
		if (value % 400 == 0)
			isYear = true;
		if (isYear == true)
			cout << "The year you entered is a leap year." << endl;
		if (isYear == false)
			cout << "The year you entered is not a leap year." << endl;
		cout << "If you wish to end the program type 0 or enter a year you would like to check :" << endl;
		cin >> value;
		isYear = false;

	}
	return 0;
}