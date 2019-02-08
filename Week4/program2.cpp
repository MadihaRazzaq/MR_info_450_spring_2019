#include <iostream>
#include <cstdio>
#include <stdio.h>
using namespace std;
int main()
{
	int t, i;
	char names[30][40];
	cout << "Enter names (first middle last) that you want to display and simply press enter twice when you are done." << endl << endl;
	for (t = 0; t < 30; t++)
	{
		cin.getline(names[t], 40);	
		if (!names[t][0])
		{
			break;
		}
	}
	for (i = 0; i <= t; i++)
	{
		cout << names[i] << endl;
	}
		system("pause");
		return 0;
}
	