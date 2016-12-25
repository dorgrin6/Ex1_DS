#include <iostream>
class ItemType;
#ifndef _STACK_H
#define _STACK_H
#include "ItemType.h"
using namespace std;
class Stack{	
	struct node;
	node *top; // top of stack
	int size; // size of stack

public:
	//CTOR
	Stack() { top = nullptr; size = 0; }
	//isEmpty: returns true iff stack is empty
	bool isEmpty() const { return (top == nullptr); }
	node *getTop() const { return top; }


	void printStack();
	//makeEmpty: deletes all stack's nodes, inits stack
	void makeEmpty();
	//push: pushing item to stacl
	void push(ItemType *item);
	//pop: removes and returns the last element inserted onto stack
	ItemType pop();
	//DTOR
	~Stack();
	

private:
	//createNode: creates and returns node with item
	node* createNode(ItemType *item);
	//insertNodeToHead: inserts node to head of list (top)
	void insertNodeToHead(node *n);
	
	//data node to store ItemType
	struct node {
		ItemType *data;
		node *next;
	};

};



#endif

