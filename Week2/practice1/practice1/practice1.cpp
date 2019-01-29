#include <iostream>
using namespace std;
int main()
{
	int value;
	cout << "This pogram will diplay the square of positive integers." << endl;
	cout << "If you wish to end the program at anytime type 0." << endl;
	cout << "Please enter a positive integer : ";
	cin >> value;
	while (value != 0)
	{
		if (value > 0)
		{
			cout << "Your value squared is : " << pow(value, 2) << endl;
			cout << "Enter a positive number or press 0 to end the program : ";
			cin >> value;
		}
		else
		{
			cout << "The number you entered is not positive." << endl;
			cout << "Enter a positive number or press 0 to end the program : ";
			cin >> value;
		}

	}

	return 0;
}
