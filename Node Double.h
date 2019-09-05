#ifndef NODEDOUBLE_H
#define NODEDOUBLE_H

class node_d
{
public:
    node_d *prev;
	node_d *next;
	int data;
	node_d(int x)
	{
        prev = 0;
		data = x;
		next = 0;
	}
};

#endif