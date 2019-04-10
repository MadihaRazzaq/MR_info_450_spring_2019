//Demonstrate inheritance
#include <iostream>
using namespace std;
///Define the base class for vehicles
class road_vehicle {
	int wheels;
	int passengers;
public:
	void set_wheels(int num) {
		wheels = num;
	}
	int get_wheels() {
		return wheels;
	}
	void set_passengers(int num) {
		passengers = num;
	}
	int get_passengers() {
		return passengers;
	}
};

//Define a truck
class truck : public road_vehicle {
	int cargo;
public:
	void set_cargo(int size) {
		cargo = size;
	}
	int get_cargo() {
		return cargo;
	}
};


enum type { car, van, wagon };
class automobile : public road_vehicle {
	enum type car_type;
public:
	void set_type(type t) { car_type = t; }
	enum type get_type() { return car_type; }
};
class node
{
	road_vehicle data;
	node *next;
	node()
	{
		next = NULL;
	}
	void print_data();
};
void node::print_data() {
	cout << data << endl;
	next->print_data();
}

int main() {
	node linked_list;
	char myvalue[20];
	bool c = true;
	int value;
	while (c)
	{
		cout << "Is this an automobile or a truck? Enter 'automobile' or 'truck'" << endl;
		cin.getline(myvalue, 11);
		if (myvalue == "truck")
		{
			cout << "How many wheels does this vehicle have?" << endl;
			cin >> value;
			linked_list.get_wheels(value);

			cout << "How many passengers can this vehicle hold?" << endl;
			cin >> value;
			linked_list.get_passengers(value);

			cout << "How much cargo (in pounds) can this vehicle hold?" << endl;
			cin >> value;
			linked_list.get_cargo(value);

		}
		else

		{
			cout << "How many wheels does this vehicle have?" << endl;
			cin >> value;
			linked_list.get_wheels(value);

			cout << "How many passengers can this vehicle hold?" << endl;
			cin >> value;
			linked_list.get_passengers(value);

			cout << "What type of automobile is this?   Enter van, car or wagon" << endl;
			cin.getline(myvalue, 10);
			linked_list.get_type(myvalue);
		}
		cout << "Do you wish to make another entry?" << endl;
		cout << " Enter 1 for yes and 0 for no" << endl;
		cin >> c;
	}
	linked_list.print_data();
	system("pause");
	return 0;
}