#include <iostream>
#include "Node Single.h"
#ifndef QUEUE_H
#define QUEUE_H
class Queue
{
private:
    int size;
    node_s* head;
    node_s* tail;
public:
    Queue();
    void enqueue(int x);
    void dequeue();
    int peek();
    bool isEmpty();
    void printQueue();
};
#endif