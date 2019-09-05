#include "DLL.h"
DLL::DLL(){
    head = 0;
    tail = 0;
    size = 0;
}
void DLL::addatBegin(int x){
    if(head == 0){
        head = new node_d(x);
        size++;
        tail = head;
    }
    else{
        node_d *temp = new node_d(x);
        size++;
        node_d *current = head;
        temp -> next = current;
        current -> prev = temp;
        head = temp;
    }
}

void DLL::addatEnd(int x){
    if(tail == 0){
        tail = new node_d(x);
        size++;
        head = tail;
    }
    else{
        node_d *temp = new node_d(x);
        size++;
        node_d *current = tail;
        current -> next = temp;
        temp -> prev = current;
        tail = temp;
    }
}

void DLL::addatPos(int x, int n){
    if(head == 0){
        head = new node_d(x);
        size++;
        head = tail;
    }
    else if(head != 0 && n <= size){
        if(n == 0){
            addatBegin(x);
        }
        else if(n == size){
            addatEnd(x);
        }
        else{
            node_d *current = head;
            int i = 0;
            while(i != n)
            {
                current = current -> next;
                i++;
            }
            node_d *temp = new node_d(x);
            size++;
            node_d *follow = current -> prev;
            temp -> next = current;
            temp -> prev = follow;
            current -> prev = temp;
            follow -> next = temp;
        }
    }
    else if(n > size){
        std::cout << "List only contains " << size << std::endl;
    }
}

void DLL::removeatBegin(){
    if(head == 0)
        std::cout << "Empty List" << std::endl;
    else{
        node_d *current = head;
        head = head -> next;
        current -> next = 0;
        head -> prev = 0;
        delete current;
        size--;
    }
}

void DLL::removeatEnd(){
    if(tail == 0){
        std::cout << "Empty List" << std::endl;
    }
    else{
        node_d *current = tail;
        tail = tail -> prev;
        current -> prev = 0;
        tail -> next = 0;
        delete current;
        size--;
    }
}

void DLL::removeatPos(int n){
    if(head == 0)
        std::cout << "Empty List" << std::endl;
    else if(head != 0 && n <= size){
        if(n == 0)
            removeatBegin();
        else if(n == size)
            removeatEnd();
        else{
            node_d *current = head;
            int i = 0;
            while(i != n){
                current = current -> next;
                i++;
            }
            node_d *behind = current -> prev;
            node_d *front = current -> next;
            current -> prev = 0;
            current -> next = 0;
            behind -> next = front;
            front -> prev = behind;
            delete current;
            size--;
        }
    }
    else if(n > size)
        std::cout << "List only contains " << size << std::endl;
}

int DLL::GetSize(){
    return size;
}
int DLL::peek(int n){
    if(head == 0){
        std::cout << "Empty List" << std::endl;
        return 0;
    }
    else if(head != 0 && n <= size){
        if(n == 0)
            return head -> data;
        else if(n == size)
            return tail -> data;
        else{
            node_d *current = head;
            int i = 0;
            while(i != n){
                current = current -> next;
                i++;
            }
            return current -> data;
        }
    }
    else if(n > size){
        std::cout << "List contains " << size << std::endl;
        return 0;
    }
}

void DLL::printList(){
    if(head == 0)
        std::cout << "Empty List" << std::endl;
    else{
        node_d *current = head;
        while(current -> next != 0){
            std::cout << current -> data << " ";
            current = current -> next;
        }
        std::cout << current -> data << std::endl;
    }
}