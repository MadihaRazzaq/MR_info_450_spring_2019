#include <iostream>
#include<string>
#include <stdlib.h>
#include<fstream>
using namespace std;

///Define the base class for vehicles
class road_vehicle {
	int wheels;
	int passengers;
	string vtype;
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

void node::print_data() {
	cout << data;
	if (next != NULL) { return next->print_data(); }
	//return next->print_data();
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
	int value,w,p,c;
	char myvalue[255];
	string str;
	string vtype;
	ifstream in;
	//in.open("C:/Users/Madiha/Desktop/mr_info_450_spring_2019/Week9/Program2/Program2/output.txt");
	in.open("C:/Users/Madiha/Desktop/mr_info_450_spring_2019/output.txt");

	while (in) 
	{
		
		in.getline(myvalue,255);// delim defaults to '\n'
		in >> vtype;
		//cout <<vtype;
		in.getline(myvalue, 255);
		w= atoi(myvalue) ;
		//cout << w;
		in.getline(myvalue, 255);
		p= atoi(myvalue) ;
		//cout << p;
		in.getline(myvalue, 255);
		if (vtype == "truck")
		{
			c = atoi(myvalue);
		}
		else
		{

			in >> str;
		}
		//cout << str;
			
		vehicle.set_vtype(vtype);
		vehicle.set_wheels(w);
		vehicle.set_passengers(p);
		vehicle.set_str(str);
		linked_list.insert(vehicle);

		
		}
	linked_list.print_data();
	in.close();
	system("pause");
	return 0;
}