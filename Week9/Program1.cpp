//Demonstrate inheritance
#include <iostream>
#include<string>
#include <stdlib.h>
using namespace std;

///Define the base class for vehicles
class road_vehicle {
	int wheels;
	int passengers;
	string ct;
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
	void set_str(string str)
	{
		ct = str;
	}

	string get_str()
	{
		return ct;
	}
};

//Define a truck
class truck : public road_vehicle {
	int cargo;
public:
	void set_str(int size) {
		cargo = size;
	}
	int get_str() {
		return cargo;
	}
};


enum type { car, van, wagon };
class automobile : public road_vehicle {
	enum type car_type;
public:
	void set_str(type t) { car_type = t; }
	enum type get_str() { return car_type; }
};
class node
{public:
	road_vehicle data;
	node *next;
	node()
	{
		next = NULL;
	}
	void insert(road_vehicle data);
	void print_data();
};

ostream &operator<<(ostream &stream, road_vehicle data)
{
	stream << data.get_wheels() << endl;
	stream << data.get_passengers() << endl;
	stream << data.get_str() << endl;
	return stream;
}

void node::print_data() {
	cout << data << endl;
	return next->print_data();
}
void node::insert(road_vehicle d) {
	if (next == NULL) {
		next = new node;
		next->data = d;
	}
	else {
		next->insert(d);
	}
}



int main() {
	node linked_list;
	string myvalue;
	bool c = true;
	int value;
	while (c)
	{
		cout << "Is this an automobile or a truck? Enter 'automobile' or 'truck'" << endl;
		getline(cin, myvalue);
		if (myvalue == "truck")
		{
			cout << "1How many wheels does this vehicle have?" << endl;
			cin >> value;
			linked_list.data.set_wheels(value);

			cout << "How many passengers can this vehicle hold?" << endl;
			cin >> value;
			linked_list.data.set_passengers(value);

			cout << "How much cargo (in pounds) can this vehicle hold?" << endl;
			cin >> value;
			string i = to_string(value);
			linked_list.data.set_str(i);
			

		}
		else

		{
			cout << "2How many wheels does this vehicle have?" << endl;
			cin >> value;
			linked_list.data.set_wheels(value);

			cout << "How many passengers can this vehicle hold?" << endl;
			cin >> value;
			linked_list.data.set_passengers(value);

			cin.ignore();
			cout << "What type of automobile is this?   Enter van, car or wagon" << endl;
			getline(cin,myvalue);
			linked_list.data.set_str(myvalue);
		}
		linked_list.insert(data);
		cout << "Do you wish to make another entry?" << endl;
		cout << " Enter 1 for yes and 0 for no" << endl;
		cin >> c;
		cin.ignore();
		
	}
	
	linked_list.print_data();
	system("pause");
	return 0;
}