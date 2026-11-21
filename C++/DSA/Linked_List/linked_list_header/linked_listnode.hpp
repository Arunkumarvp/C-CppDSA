#ifndef LINKED_LISTNODE_HPP
#define LINKED_LISTNODE_HPP 

    
struct Node{
    int data;
    Node* next;
    
    Node(int value){
        this->data = value;
        this->next = nullptr;
    }

};
#endif // LINKED_LISTNODE_HPP