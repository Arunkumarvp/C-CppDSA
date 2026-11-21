#include <bits/stdc++.h>

#include "linked_list_header/linked_listnode.hpp"
using namespace std;

class Linked_operation
{

   public:     
    void display(struct Node *head)
    {

        struct Node *current = head;
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

public:
    struct Node *insert_at_begin(struct Node *head, int value){
        
        struct Node *newNode = new struct Node(sizeof(struct Node));
        newNode->data = value;
        newNode->next = head;
        return newNode;

    }

    struct  Node*insert_at_end(struct Node *head, int value){
        struct Node *newNode = new  struct Node(sizeof(struct Node));
        newNode->data = value;
        newNode->next = nullptr;
        if(head== nullptr){
            return newNode;
        }
        struct Node *current = head;
        while(current->next!= nullptr){
            current = current->next;
        }
        current->next = newNode;
        return head;
    }
};