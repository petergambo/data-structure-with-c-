// C++ program for the above approach
#include <iostream>
using namespace std;

// Node class to represent
// a node of the linked list.
class Node {
public:
	int data;
	Node* next;

	// Default constructor
	Node()
	{
		data = 0;
		next = NULL;
	}

	// Parameterised Constructor
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

// Linked list class to
// implement a linked list.
class Linkedlist {
	Node* head;

public:
	// Default constructor
	Linkedlist() { head = NULL; }

	// Function to insert a
	// node at the end of the
	// linked list.
	void insertNode(int);

	// Function to print the
	// linked list.
	void printList();

	// Function to delete the
	// node at given position
	void deleteNode(int);
};

// Function to delete the
// node at given position
void Linkedlist::deleteNode(int nodeOffset)
{
	Node *temp1 = head, *temp2 = NULL;
	int ListLen = 0;

	if (head == NULL) {
		cout << "List empty." << endl;
		return;
	}

	// Find length of the linked-list.
	while (temp1 != NULL) {
		temp1 = temp1->next;
		ListLen++;
	}

	// Check if the position to be
	// deleted is greater than the length
	// of the linked list.
	if (ListLen < nodeOffset) {
		cout << "Index out of range"
			<< endl;
		return;
	}

	// Declare temp1
	temp1 = head;

	// Deleting the head.
	if (nodeOffset == 1) {

		// Update head
		head = head->next;
		delete temp1;
		return;
	}

	// Traverse the list to
	// find the node to be deleted.
	while (nodeOffset-- > 1) {

		// Update temp2
		temp2 = temp1;

		// Update temp1
		temp1 = temp1->next;
	}

	// Change the next pointer
	// of the previous node.
	temp2->next = temp1->next;

	// Delete the node
	delete temp1;
}

// Function to insert a new node.
void Linkedlist::insertNode(int data)
{
	// Create the new Node.
	Node* newNode = new Node(data);

	// Assign to head
	if (head == NULL) {
		head = newNode;
		return;
	}

	// Traverse till end of list
	Node* temp = head;
	while (temp->next != NULL) {

		// Update temp
		temp = temp->next;
	}

	// Insert at the last.
	temp->next = newNode;
}

// Function to print the
// nodes of the linked list.
void Linkedlist::printList()
{
	Node* temp = head;

	// Check for empty list.
	if (head == NULL) {
		cout << "List empty" << endl;
		return;
	}

	// Traverse the list.
	while (temp != NULL) {
		cout << temp->data << "=>";
		temp = temp->next;
	}
}

void printlist(Linkedlist list){
	// Print the list
	list.printList();
	cout<<endl <<"--------------------------------------------------------------"<<endl;
}

Linkedlist list;

// insert list node
	void insertD(int value)	{
	if (value)	{
		list.insertNode(value);
	}
}

void delete_node(int position) {
	// Delete node at user provided position.
	list.deleteNode(position);
}



// Driver Code
int main()
{
	
	int val;
	int ch;
	cout<<"1) Insert to LinkedList"<<endl<<"2) Show LinkedList"<<endl<<"3) Delete LinkedList"<<endl;

	

	do {
		cout<<"Select Choice: "<<endl;
		cin>>ch;

		switch (ch)
		{
		case 1:{
			/* code */
			cout<<"Enter value to add: "<<endl;
			cin>>val;
			insertD(val);
			cout<<"\t\tInsert operation complete!"<<endl<<"---------------------------------------"<<endl;
			break;
		}

		case 2:{
			/* code */
			printlist(list);
			break;
		}
		case 3:{
			/* code */
			cout<<"Enter node position: "<<endl;
			cin>>val;
			delete_node(val);
			cout<<"\t\t Delete operation complete!"<<endl<<"---------------------------------------"<<endl;
			break;
		}
		
		default:{
			break;
		}
		}

	}

	while (ch!=4);
	return 0;

}
