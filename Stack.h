#pragma once
#include <iostream>

typedef unsigned long Item;

class Stack
{
private:
	enum {MAX = 10}; // constant specific to the class
	Item items[MAX] = { 0 };
	int top_item;
public:
	Stack(); //create an empty stack
	bool is_empty() const;
	bool is_full() const;
	bool push(const Item& item);
	bool pop(Item& item);
	void view_stack() const;
};
//data is added or deleted from top of the stack
//methods:
//create an empty stack
//add an item to the top
//remove an item from the top 
//check whether the stack is full DONE
//check whether the stack is empty DONE