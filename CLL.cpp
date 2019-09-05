#include "CLL.h"

CLL::CLL(){
    head = 0;
    size = 0;
}

void CLL::addatBegin(int x){
    if(head == 0){
        head = new node_s(x);
        head -> next = head;
        size++;
    }
    else{
        node_s *current = head;
        node_s *temp = new node_s(x);
        size++;
        while(current -> next != head)
            current = current -> next;
        current -> next = temp;
        temp -> next = head;
        head = temp;
    }
}

void CLL::addatEnd(int x){
    if(head == 0){
        head = new node_s(x);
        head -> next = head;
        size++;
    }
    else{
        node_s *temp = new node_s(x);
        size++;
        node_s *current = head;
        while(current -> next != head)
            current = current -> next;
        current -> next = temp;
        temp -> next = head;
    }
}

void CLL::addatPos(int x, int n){
    if(head == 0){
        head = new node_s(x);
        head -> next = head;
        size++;
    }
    else if(head != 0 && n <= size){
        if(n == 0)
            addatBegin(x);
        else if(n == size)
            addatEnd(x);
        else{
            int i = 0;
            node_s *current = head;
            node_s *previous = current;
            while (i != n){
                previous = current;
                current = current -> next;
                i++;
            }
            node_s *temp = new node_s(x);
            size++;
            previous -> next = temp;
            temp -> next = current;
        }
    }
    else if(n > size)
        std::cout << "List only contains " << size << std::endl;
}

void CLL::removeatBegin(){
    if(head == 0)
        std::cout << "Empty List" << std::endl;
    else{
        node_s *temp = head;
        node_s *current = head;
        while(current -> next != head){
            current = current -> next;
        }
        head = head -> next;
        current -> next = head;
        temp -> next = 0;
        delete temp;
        size--;
    }
}

void CLL::removeatEnd(){
    if(head == 0)
        std::cout << "Empty list" << std::endl;
    else{
        node_s *temp = head;
        node_s *previous = head;
        while(temp -> next != head)
        {
            previous = temp;
            temp = temp -> next;
        }
        previous -> next = head;
        temp -> next = 0;
        delete temp;
        size--;
    }
}

void CLL::removeatPos(int n){
    if(head == 0)
        std::cout << "Empty list" << std::endl;
    else if(head != 0 && n <= size)
    {
        if(n == 0)
            removeatBegin();
        else if(n == size)
            removeatEnd();
        else{
            node_s* current = head;
            node_s* previous = current;
            int i = 0;
            while(i != n){
                previous = current;
                current = current -> next;
                i++;
            }
            previous -> next = current -> next;
            current -> next = 0;
            delete current;
            size--;
        }
    }
    else if(n > size)
        std::cout << "List contains " << size << std::endl;
}

int CLL::peek(int n){
    node_s *current = head;
    int i = 0;
    while(i != n)
        current = current -> next;
        i++;
    return current -> data;
}

int CLL::GetSize(){
    return size;
}

void CLL::printList(){
    node_s *current = head;
    while(current -> next != head){
        std::cout << current -> data << " ";
        current = current -> next;
    }
    std::cout << current -> data << std::endl;
}

