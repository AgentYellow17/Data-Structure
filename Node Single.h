#ifndef NODESINGLE_H
#define NODESINGLE_H

class node_s
{
public:
	node_s *next;
	int data;
	node_s(int x)
	{
		data = x;
		next = 0;
	}
};

#endif