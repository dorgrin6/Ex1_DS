class ItemType;
#ifndef _STACK_H
#define _STACK_H
#include "ItemType.h";
class Stack{
	int top;
	int size; // physical size of stack
public:
	Stack() { top = 0; size = 0; }
	bool IsEmpty() { return (top == 0); };
	bool IsFull() { return (top == size); }

	void push(ItemType x);
	ItemType pop();

};



#endif

