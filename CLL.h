#include <iostream>
#include "Node Single.h"
#ifndef CLL_H
#define CLL_H

class CLL{
private:
    node_s *head;
    int size;
public:
    CLL();
    void addatBegin(int x);
    void addatEnd(int x);
    void addatPos(int x, int n);
    void removeatBegin();
    void removeatEnd();
    void removeatPos(int n);
    int peek(int n);
    int GetSize();
    void printList();
};

#endif