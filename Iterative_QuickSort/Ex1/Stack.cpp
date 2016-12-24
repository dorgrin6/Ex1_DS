#include "Stack.h"
#include <iostream>

void Stack::printStack(){
	node *cur = top;
	int count = 0;
	while (cur != nullptr){
		std::cout << "item " << count++ << " Line:" << cur->data->getLine() << std::endl;
		cur = cur->next;
	}
}

void Stack::makeEmpty(){
	node *cur = top;
	node *temp;
	while (cur != nullptr){
		temp = cur;
		cur = cur->next;
		delete temp;
	}
}

void Stack::push(ItemType *item){
	node *n = createNode(item);
	insertNodeToHead(n);
}

ItemType Stack::pop()
{
	node *temp = top;
	ItemType *item = top->data;
	
	top = top->next;
	delete temp;
	return *item;
}

Stack::~Stack()
{
	makeEmpty();
}

Stack::node * Stack::createNode(ItemType *item){
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

