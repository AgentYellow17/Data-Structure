#include "SLL.h"
SLL::SLL(){
    head = 0;
    size = 0;
}
void SLL::addatBegin(int x){
    if(head == 0){
        head = new node_s(x);
        size++;
    }
    else{
        node_s *current = head;
        head = new node_s(x);
        size++;
        head -> next = current;
    }
}
void SLL::addatEnd(int x){
    if(head == 0){
        head = new node_s(x);
        size++;
    }
    else{
        node_s *current = head;
        while(current -> next != 0){
            current = current -> next;
        }
        node_s *temp = new node_s(x);
        size++;
        current -> next = temp;
    }
}

void SLL::addatPos(int x, int n){
    if(head == 0){
        head = new node_s(x);
        size++;
    }
    else if(head != 0 && n <= size){
        if(n == 0){
            addatBegin(x);
        }
        else if(n == size){
            addatEnd(x);
        }
        else{
            node_s *current = head;
            node_s *previous = current;
            int i = 0;
            while(i != n){
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

void SLL::removeatBegin(){
    if(head == 0)
        std::cout << "Empty list" << std::endl;
    else{
        node_s *temp = head;
        head = head -> next;
        temp -> next = 0;
        delete temp;
        size--;
    }
}

void SLL::removeatEnd(){
    if(head == 0){
        std::cout << "Empty List" << std::endl;
    }
    else{
        node_s *temp = head;
        node_s *prev = temp;
        while(temp -> next != 0){
            prev = temp;
            temp = temp -> next;
        }
        prev -> next = 0;
        delete temp;
        size--;
    }
}
void SLL::removeatPos(int n){
    if(head == 0){
        std::cout << "Empty List" << std::endl;
    }
    else if(head != 0 && n <= size){
        node_s *temp = head;
        node_s *prev = temp;
        int i = 0;
        while(i !=n){
            prev = temp;
            temp = temp -> next;
            i++;
        }
        prev -> next = temp -> next;
        temp -> next = 0;
        delete temp;
        size--;
    }
    else if(n > size)
        std::cout << "List only contains " << size << std::endl;
}

int SLL::peek(int n){
    if(head == 0){
        std::cout << "Empty List" << std::endl;
        return 0;
    }
    else{
        node_s *current = head;
        int i = 0;
        while(i != n){
            current = current -> next;
            i++;
        }
        return current -> data;
    }
}

int SLL::GetSize(){
    return size;
}
void SLL::printList(){
    if(head == 0)
        std::cout << "Empty List" << std::endl;
    else{
        node_s *current = head;
        while(current -> next != 0){
            std::cout << current -> data << " ";
            current = current -> next;
        }
        std::cout << current -> data << std::endl;
    }
}
void SLL::remove(int y, int z){
    ActualRemove(head, y, z);
}

void SLL::ActualRemove(node_s *x, int y, int z){
    if(head == 0)
        std::cout << "Empty List" << std::endl;
        
    else
    {
        while(y != 0)
        {
            if(x -> next == 0){
                std::cout << "End of List" << std::endl;
                break;
            }
            else{
                x = x -> next;
                y--;
            }
        }
        while(z != 0)
        {
            if(x -> next == 0){
                std::cout << "End of List" << std::endl;
                break;
            }
            else{
                node_s *temp = x -> next;
                x-> next = temp -> next;
                temp -> next = NULL;
                delete temp;
                z--;
            }
        }
    }
}