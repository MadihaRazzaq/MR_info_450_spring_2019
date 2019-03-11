#include <iostream>
#include <cstdio>
using namespace std;

class PhoneEntry
{
private:
	char first_name[255]; // First Name
	char middle_initial[2]; // Middle Initial
	char last_name[255]; // Last Name
	char area_code[4]; // Area Code
	char phone_number[8]; // Phone Number
	bool is_private; // Kept private? Not printed?
public:
	void set_first_name(const char* in_name) { strcpy_s(first_name, in_name); }
	void set_middle_initial(char* in_name) { strcpy_s(middle_initial, in_name); }
	void set_last_name(const char* in_name) { strcpy_s(last_name, in_name); }
	void set_area_code(const char* in_name) { strcpy_s(area_code, in_name); }
	void set_phone_number(const char* in_name) { strcpy_s(phone_number, in_name); }
	void set_is_private(bool in_p) { is_private = in_p; }
	void printEntry() {
		if (!is_private) {
			cout << last_name << ", ";
			cout << first_name << " " << (char)*middle_initial;
			cout << " ...... ";
			cout << "(" << area_code << ") " << phone_number << endl;
		}
	}
};
int main()
{
	const int MAX = 3;
	PhoneEntry entries[MAX];
	for (int x = 0; x < MAX;x++)
	{
		cout << "Entry: " << x << endl;
		char *myvalue = (char *)malloc(255);

		cout << "Enter a first name: ";
		cin.getline(myvalue, 255);
		entries[x].set_first_name(myvalue);

		cout << "Enter a middle initial: ";
		cin.getline(myvalue, 2);
		entries[x].set_middle_initial(myvalue);

		cout << "Enter a last name: ";
		cin.getline(myvalue, 255);
		entries[x].set_last_name(myvalue);

		cout << "Enter an area code: ";
		cin.getline(myvalue, 4);
		entries[x].set_area_code(myvalue);


		cout << "Enter a phone number: ";
		cin.getline(myvalue, 8);
		entries[x].set_phone_number(myvalue);

		entries[x].set_is_private(false);
	}

	for (int x = 0; x < MAX;x++)
	{
		entries[x].printEntry();
	}
	system("pause");
	return 0;
}
