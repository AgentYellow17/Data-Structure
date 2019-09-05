#include <iostream>
#include "Node Double.h"

#ifndef DLL_H
#define DLL_H

class DLL{
private:
    node_d *head;
    node_d *tail;
    int size;
public:
    DLL();
    void addatBegin(int x);
    void addatEnd(int x);
    void addatPos(int x, int n);
    void removeatBegin();
    void removeatEnd();
    void removeatPos(int n);
    int GetSize();
    int peek(int n);
    void printList();
};

#endif