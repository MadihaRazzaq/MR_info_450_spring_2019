#include <iostream>
#include<string>
#include <stdlib.h>
#include<fstream>
using namespace std;

///Define the base class for vehicles
class road_vehicle {
	string wheels;
	string passengers;
	string vtype;
	string ct;
public:
	void set_wheels(string num) {
		wheels = num;
	}
	string get_wheels() {
		return wheels;
	}
	void set_passengers(string num) {
		passengers = num;
	}
	string get_passengers() {
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
	void set_vtype(string str)
	{
		vtype = str;
	}
	string get_vtype()
	{
		return vtype;
	}
};

//Define a truck
class truck : public road_vehicle {
	string cargo;
public:
	void set_str(string size) {
		cargo = size;
	}
	string get_str() {
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
{
public:
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
	stream << data.get_vtype() << endl;
	stream << data.get_wheels() << endl;
	stream << data.get_passengers() << endl;
	stream << data.get_str() << endl;
	return stream;
}

void node::print_data()
{
	if (data.get_vtype() == "truck" || data.get_vtype() == "automobile") {
		cout << "{\"road_vehicle\": \"" << data.get_vtype() << "\"";
		cout << ", \"wheels\": " << data.get_wheels();
		cout << ", \"passengers\": " << data.get_passengers();
		if (data.get_vtype() == "truck") {

			cout << ", \"cargo\": " << data.get_str() << "}" << endl;
		}
		else
		{
			cout << ", \"type\": \"" << data.get_str() << "\"}" << endl;
		}
	}
	if (next != NULL) {
		return next->print_data();
	}


}
void node::insert(road_vehicle v) {
	if (next == NULL) {
		next = new node;
		next->data = v;
	}
	else {
		next->insert(v);
	}
}



int main()
{
	road_vehicle vehicle;
	node linked_list;
	string value, w, p, c;
	string str;
	string vtype;
	string currentValue;
	ifstream in;
	int i = 0;

	std::ifstream file("output.txt");
	if (file.is_open()) {
		string line;
		while (getline(file, line)) {

			currentValue = line;

			if (currentValue == "truck")
			{
				vtype = currentValue;
				getline(file, line);
				w = line;
				getline(file, line);
				p = line;
				getline(file, line);
				str = line;
			}
			else if (currentValue == "automobile")
			{
				vtype = currentValue;
				getline(file, line);
				w = line;
				getline(file, line);
				p = line;
				getline(file, line);
				str = line;
			}
			vehicle.set_vtype(vtype);

			vehicle.set_wheels(w);
			vehicle.set_passengers(p);
			vehicle.set_str(str);
			linked_list.insert(vehicle);
		}
		linked_list.print_data();
		file.close();

	}

	in.close();
	return 0;
}