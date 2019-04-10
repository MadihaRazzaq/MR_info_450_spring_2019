
#include <iostream>
using namespace std;

class node {
public:
	int road_vehicle;
	node *next;
	node() {
		next = NULL;
	}
	void insert_number(char str);
	void print_in_order();
};

void node::insert_number(char str) {
	if (next == NULL) {
		next = new node;
		next->road_vehicle = str;
	}
	else {
		next->insert_number(str);
	}
}


void node::print_in_order() {
	cout << road_vehicle << endl;
	if (next != NULL) {
		next->print_in_order();
	}
}



int main()
{
	node linked_list;
	char str[255];
	ifstream in;
	in.open("output.txt");

	while (in) {
		in.getline(str, 255);  // delim defaults to '\n'
		cout << "LINE:*" << str << "*" << endl;
		linked_list.insert_number(str);
	}
	system("pause");
	return 0;
}