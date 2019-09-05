#include <iostream>
#include "SLL.h"
#include "DLL.h"
#include "CLL.h"
#include "Stack.h"
#include "BST.h"
#include "Queue.h"

//This is a program used to test the Singly Linked List(SLL), 
//Doubly Linked List(DLL), Circular Linked List(CLL)
//Stack, Queue, and BST that I implemented.
int main(){

//SLL Test
//Insert all integers in [0,25] at the beginning of SLL
//Insert all integers in [75,101] at the end of the SLL
//Insert all integers in [26,74] at position 25
//Remove the first integer
//Remove the last integer
//Remove the integer at position 37
    SLL list;
    int i = 25;
    while(i >= 0){
        list.addatBegin(i);
        i--;
    }
    int j = 75;
    while(j <= 101){
        list.addatEnd(j);
        j++;
    }
    int k = 74;
    int l = 25;
    while(k > 25){
        list.addatPos(k,l);
        k--;
    }
    list.addatPos(150,150);
    list.removeatBegin();
    list.removeatEnd();
    list.removeatPos(37);
    list.removeatPos(150);
    list.printList();
    std::cout << std::endl;

//DLL Test
//Insert all even numbers in [0,100] at the beginning of the DLL
//Insert all integers in [101,151] at the end of the DLL
//Insert all odd numbers in [0,100] in its appropriate position
//Remove the first integer
//Remove the last integer
//Remove the integer at position 36th
    DLL doubly;
    int m = 100;
    while(m >=0){
        doubly.addatBegin(m);
        m-=2;
    }
    int n = 101;
    while(n <= 151){
        doubly.addatEnd(n);
        n++;
    }
    int o = 1;
    int p = 1;
    while(o <= 100){
        doubly.addatPos(o, p);
        o+=2;
        p+=2;
    }
    doubly.addatPos(200,200);
    doubly.removeatBegin();
    doubly.removeatEnd();
    doubly.removeatPos(36);
    doubly.removeatPos(200);
    doubly.printList();
    std::cout << std::endl;

//CLL Test
//Insert all integer in [0,30] at the beginning
//Insert all integer in [31,60] at the end
//Insert all integer in [61,100] at position 61
//Remove the fist integer in the list
//Remove the last integer in the list
//Remove the integer at the 36th position
    CLL circle;
    int r = 30;
    while(r >= 0){
        circle.addatBegin(r);
        r--;
    }
    int q = 31;
    while(q <= 60){
        circle.addatEnd(q);
        q++;
    }
    int g = 101;
    while(g >= 61){
        circle.addatPos(g, 61);
        g--;
    }
    circle.removeatBegin();
    circle.removeatEnd();
    circle.removeatPos(36);
    circle.removeatPos(200);
    circle.printList();
    std::cout << std::endl;
//Stack Test
//Print all multiples of 5 in the interval [0,100]
    stack stest;
    int a = 100;
    while(a >= 0){
        stest.push(a);
        a-=5;
    }
    stest.printStack();
    while(!stest.isEmpty())
        stest.pop();
    stest.pop();
    std::cout << std::endl;

//Queue Test
//Printing all integer in [0,20]
    Queue test;
    int b = 0;
    while(b < 21){
        test.enqueue(b);
        b++;
    }
    test.printQueue();
    while(!test.isEmpty())
        test.dequeue();
    test.dequeue();
    std::cout << std::endl;
 
// BST Test
// Insert a series of number
// Print inOrder
// Delete the whole tree
// Print inOrder
    BST quiz;
    quiz.insert(15);
    quiz.insert(27);
    quiz.insert(32);
    quiz.insert(8);
    quiz.insert(-12);
    quiz.insert(9);
    quiz.insert(17);
    quiz.Print();
    std::cout << std::endl;
    quiz.del();
    quiz.Print();
    std::cout << std::endl;

//Traverse x elements and delete y elements
    SLL exam;
    for(int z = 0; z < 51; z++)
    {
        exam.addatEnd(z);
    }
    exam.printList();
    std::cout << std::endl;
    exam.remove(10,10);
    exam.printList();
    std::cout << std::endl;
    exam.remove(60,10);
    exam.printList();
    std::cout << std::endl;
    exam.remove(5,60);
    exam.printList();
    std::cout << std::endl;
    exam.remove(30,30);
    exam.printList();
    std::cout << std::endl;
    return 0;
}