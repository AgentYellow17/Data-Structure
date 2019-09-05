#include <iostream>
#include "Node Single.h"

class stack
{
private:
	int top;
	node_s *head;
public:
	stack();
	void pop();
	void push(int x);
	bool isEmpty();
	int size();
	bool operator==(const stack& B);
	void printStack();
};