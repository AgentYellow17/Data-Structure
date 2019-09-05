#include <iostream>
#include "Node Tree.h"
#ifndef BST_H
#define BST_H
class BST
{
private:
    node_t *root;
public:
    BST();
    void insert(int x);
    void add(int x, node_t *y);
    void del();
    void deleteTree(node_t *x);
    void preOrderPrint(node_t *y);
    void Print();
};
#endif