#ifndef NODETREE_H
#define NODETREE_H
class node_t
{
public:
	node_t *left;
    node_t *right;
	int data;
	node_t(int x)
	{
		data = x;
		left = 0;
        right = 0;
	}
};

#endif