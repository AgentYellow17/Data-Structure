#include "Queue.h"
Queue::Queue(){
    size = 0;
    head = 0;
    tail = 0;
}
void Queue::enqueue(int x){
    if(head == 0){
        head = new node_s(x);
        tail = head;
        size++;
    }
    else{
        node_s* temp = new node_s(x);
        tail -> next = temp;
        tail = temp;
        size++;
    }
}
void Queue::dequeue(){
    if(size == 0)
        std::cout << "Empty Queue" << std::endl;
    else{
        int temp = head -> data;
        node_s* current = head;
        head = current -> next;
        free(current);
        size--;
        //return temp;
    }
}
int Queue::peek(){
    if(size == 0)
        return 0;
    else
        return tail->data;
}
bool Queue::isEmpty(){
    if(size != 0)
        return false;
    else
        return true;
}
void Queue::printQueue(){
    if(size == 0)
        std::cout << "Empty Queue"<< std::endl;
    else{
        node_s* current = head;
        while(current->next !=0){
            std::cout << current -> data << " ";
            current = current ->next;
        }
        std::cout <<current -> data << std::endl;
    }
}