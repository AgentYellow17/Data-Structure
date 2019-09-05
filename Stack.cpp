#include "Stack.h"
stack::stack() {
	top = 0;
	head = 0;
}
void stack::pop()
{
	if(isEmpty()){
		std::cout << "Empty Stack" << std::endl;
	}
	else{
		node_s *current = head;
		int temp = head->data;
		head = head->next;
		free(current);
		top--;
		//return temp;
	}
}
void stack::push(int x)
{
	node_s *temp = new node_s(x);
	temp->next = head;
	head = temp;
	top++;
}
bool stack::isEmpty() {
	if (top == 0)
		return true;
	else
		return false;
}
int stack::size() {
	return top;
}
bool stack::operator==(const stack& B) {
	node_s *currentA = head;
	node_s *currentB = B.head;

	if (top == 0 && B.top == 0)
		return true;

	while (currentA->next != NULL && currentB->next != NULL) {
		if (currentA->data != currentB->data)
			return false;
		else
		{
			currentA = currentA->next;
			currentB = currentB->next;
		}
	}
	if (currentA->data == currentB->data)
		return true;
}
void stack::printStack() {
	if(isEmpty())
		std::cout << "Empty Stack" << std::endl;
	else{
		node_s *current = head;
		while (current->next != 0)
		{
			std::cout << current -> data << " ";
			current = current->next;
		}
		std::cout << current -> data << std::endl;
	}
}