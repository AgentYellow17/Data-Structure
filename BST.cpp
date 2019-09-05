#include "BST.h"
BST::BST(){
    root = 0;
}
void BST::add(int x, node_t *y)
{
    if(root == 0){
        root = new node_t(x);
    }
    else if(x < y -> data){
        if(y -> left == 0)
            y -> left = new node_t(x);
        else
            add(x, y -> left);
    }
    else if(x > y -> data){
        if(y -> right == 0)
            y -> right = new node_t(x);
        else
            add(x, y -> right);
    }
}
void BST::deleteTree(node_t *x){
    node_t *current = x;
    if(current -> left == 0 && current -> right == 0){
        delete current;
    }
    else{
        if(current -> left != 0)
            deleteTree(x -> left);
        if(current -> right != 0)
            deleteTree(x -> right);
    }
}
void BST::preOrderPrint(node_t *y){
    std::cout << y -> data << " ";
    if(y -> left  != 0)
        preOrderPrint(y -> left);
    if(y -> right != 0)
        preOrderPrint(y -> right);
}
void BST::Print(){
    if(root == 0)
        std::cout << "Empty" << std::endl;
    else
        preOrderPrint(root);
}
void BST::del(){
    deleteTree(root);
    root = 0;
}
void BST::insert(int x){
    add(x, root);
}