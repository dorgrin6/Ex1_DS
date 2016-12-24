class ItemType;
#ifndef _STACK_H
#define _STACK_H
#include "ItemType.h"

class Stack{
	//data node to store ItemType
	struct node {
		ItemType *data;
		node *next;
	};
	
	node *top; // top of stack
	int size; // size of stack

public:
	Stack() { top = nullptr; size = 0; }
	bool isEmpty() const { return (top == nullptr); }
	node *getTop() const { return top; }

	void printStack();
	void makeEmpty();
	void push(ItemType *item);
	ItemType pop();
	~Stack();

private:

	
	node* createNode(ItemType *item);
	void insertNodeToHead(node *n);
	int deleteNodeFromTop();
	

};



#endif

