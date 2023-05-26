#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	int noMhs;
	string name;
	Node* next;
	Node* prev; 
};

class DoubleLinkedList{
private:
	Node* START;
public:
	DoubleLinkedList();
	void addNode();
	bool search(int ro11No, Node** current);
	bool deleteNode(int ro11No);
	bool listEmpty();
	void traserve();
	void revtraserve();
	void hapus();
	void searchData();
};

DoubleLinkedList::addNode() {
	START = NULL;
}

void DoubleLinkedList::addNode() {
	int nim; 
	string nm;
	cout << "\nEnter the ro11 number of the student: ";
	cin >> nim;
	cout << "\nEnter the name of the student: ";
	cin >> nm;
	Node* newNode = new Node(); //step 1
	newNode->noMhs = nim; // step 2
	newNode->name = nm;

	//insert a node in the beginning of a doubly - linked list*

	if (START == NULL || nim <= START->noMhs) {
		if (START != NULL && nim == START->noMhs) {
			cout << "\nDuplicate number not allowed" << endl;
			return;
		}
		newNode->next = START; //step 3
		if (STARt != NULL)
			START->prev = newNode; //step 4
		newNode->prev = NULL; //step 5
		START = newNode; // step 6
		return;
	}

	/*insertting a Node between Two Nodes In the list*/
	Node* current = START; //step 1.a
	Node* previoous = NULL; // step 1.b
	while
}








