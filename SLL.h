#include <iostream>
#include "Node Single.h"
#ifndef SLL_H
#define SLL_H
class SLL{
private:
    node_s *head;
    int size;
public:
    SLL();
    void addatBegin(int x);
    void addatEnd(int x);
    void addatPos(int x, int n);
    void removeatBegin();
    void removeatEnd();
    void removeatPos(int n);
    int peek(int n);
    int GetSize();
    void printList();
    void remove(int y, int z);
    void ActualRemove(node_s *x, int y, int z);
};
#endif