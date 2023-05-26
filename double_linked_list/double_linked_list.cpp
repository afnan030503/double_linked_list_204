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
}








