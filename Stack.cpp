#include "Stack.h"

Stack::Stack()
{
	top_item = 0;
}



bool Stack::is_empty() const
{
	return top_item == 0;
}

bool Stack::is_full() const 
{
	return top_item == MAX;
}

bool Stack::push(const Item& item)
{
	if (top_item < MAX) {
		items[top_item++] = item;
		return true;
	}
	else {
		return false;
	}
}

bool Stack::pop(Item& item)
{
	if (top_item > 0) {
		item = items[--top_item];
		return true;
	}
	else {
		return false;
	}
}

void Stack::view_stack() const
{
	for (int i = 0; i < top_item; i++) {
		std::cout << i+1 << ". - " << items[i] << std::endl;
	}
}
