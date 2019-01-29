#include <iostream>
using namespace std;
int main()
{
	int value,i;
	bool isPrime = true;
	cout << "This program will display if the number you input is prime or not." << endl;
	cout << "If you wish to end the program at anytime type 0." << endl;
	cout << "Please enter a number that you want to check : ";
	cin >> value;
	while (value != 0)
	{
		for (i = 2; i <=value/2; ++i)
		{
			if (value % i == 0)
			{
				isPrime = false;
				break;
			}
		}
					   
		if (isPrime == true)
			cout << "The number you entered is a prime number. " << endl;
	    else
		    cout << "The number you entered is not a prime number. " << endl;
		cout << "Enter any number or press 0 to end the program : ";
		cin >> value;
		isPrime = true;
	}
		
	return 0;
}