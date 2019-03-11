#include <iostream>
#include <cstdio>
using namespace std;

class EmployeeEntry
{
private:
	char first_name[255]; // First Name
	char last_name[255]; // Last Name
	bool emp_typ; // true is hourly compensation false is annual compensation
	int compensation; // salary
		
public:
	void set_first_name(const char* value) { strcpy_s(first_name, value); }
	void set_last_name(const char* value) { strcpy_s(last_name, value); }
	void set_emp_typ(bool v) { emp_typ = v; }
	void set_compensation(int v) 
	{
		if (emp_typ) { v = v * 2000; compensation = v; }
	    compensation = v;
	
	}

		
	void printEntry() {
		if (last_name) {
			cout << last_name << ", ";
			cout << first_name;
			cout << " : $ " << compensation << endl;
			
		}
	}
};
int main()
{
	const int MAX = 3;
	int v;
	bool b;
	EmployeeEntry entries[MAX];
	for (int x = 0; x < MAX;x++)
	{
		char *myvalue = (char *)malloc(255);
	

		cout << "Entry: " << x << endl;
		cout << "Enter a first name: ";
		cin.getline(myvalue, 255);
		entries[x].set_first_name(myvalue);
		

		cout << "Enter a last name: ";
		cin.getline(myvalue, 255);
		entries[x].set_last_name(myvalue);
		
		cout << "Enter employee type 1 for hourly salary employee and 0 for annual salary : ";
		cin >> b;
		entries[x].set_emp_typ(b);


		cout << "Enter a salary per hour or annual: ";
		cin >> v; 
		entries[x].set_compensation(v);
		cout << endl; 
		cin.ignore();

	}
	
	for (int x = 0 ; x < MAX ; x++)
	{
		entries[x].printEntry();
	}
	system("pause");
	return 0;
}

// different ways to cleay keyboard buffer
//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		//cin.ignore(120, '/n');
		//cin.clear();
		//cin.ignore();