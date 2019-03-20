#include <iostream>
using namespace std;

struct node {
	int data;
	node *next;
};


void insert_number(struct node**head, int number)
{
	node*temp = *head;
	node *t = new node;
	//if list is empty
	if (*head == NULL)
	{
		*head = new node;
		(*head)->data = number;
		(*head)->next = NULL;
	}

	else
	{

		if (number < temp->data) //start node
		{
			t = new node;
			t->data = number;
			t->next = *head;
			*head = t;
		}

		else
		{
			while (temp->next != NULL and !(number < temp->next->data && number >= temp->data)) //as it is sorted so X must lie between the consecutive values or else at end
				temp = temp->next;

			if (temp->next == NULL) //number will go to end
			{
				temp->next = new node;
				temp = temp->next;
				temp->data = number;
				temp->next = NULL;
			}
			else //number is inserted in between some nodes in list
			{
				t = new node;
				t->data = number;
				t->next = temp->next; //make the new node's next as the next of current node because the 't' node will lie between consecutive nodes
				temp->next = t;
			}
		}
	}
}

void display(struct node**head)
{
	struct node*temp = *head;
	while (temp != NULL)
	{
		if (temp->next != NULL)
			cout << temp->data << endl;
		else
			cout << temp->data;

		temp = temp->next; //move to next node
	}
	//O(number of nodes)
	cout << endl;
}


int main()
{

	struct node *head = NULL; //initial list has no elements
	insert_number(&head, 10);
	insert_number(&head, 6);
	insert_number(&head, 98);
	insert_number(&head, 33);
	insert_number(&head, 55);
	display(&head);
	system("pause");
	return 0;
}