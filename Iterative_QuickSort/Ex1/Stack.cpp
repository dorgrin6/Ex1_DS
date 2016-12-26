#include "Stack.h"
#include <iostream>

void Stack::makeEmpty(){
	node *cur = top;
	node *temp;

	//delete all nodes
	while (cur != nullptr){
		temp = cur;
		cur = cur->next;
		delete temp;
	}

	//init members
	size = 0;
	top = nullptr;
}

void Stack::push(ItemType item){
	node *n = createNode(item);
	insertNodeToHead(n);
}

ItemType Stack::pop()
{
	node *temp;
	ItemType item;

	//check stack validity
	if (isEmpty()){
		cout << "Stack underflow!\n";
		exit(1);
	}

	//get new top
	temp = top;
	item = top->data;
	
	//delete top
	top = top->next;
	delete temp;
	size--;

	return item;
}

Stack::~Stack()
{
	makeEmpty();
}

Stack::node* Stack::createNode(ItemType item){
	//init node
	node *n = new node;
	n->data = item;
	n->next = nullptr;
	return n;
}

void Stack::insertNodeToHead(node *n)
{
	//stack is empty
	if (isEmpty()){
		top = n;
	}
	else{
		n->next = top; //insert head top to head of stack
		top = n;
	}

	size++;
}


