#include <stdio.h>
#include <stdlib.h>
#include "assertnode.h"



int insertNode(Node* head, int value){
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        fprintf(stderr, "Error: Failed to allocate memory for new node\n");
        return 1;
    }
    newNode->data[0] = value;
    
    newNode->next = head->next;
    head->next = newNode;
    return 0;
}



int main() {
    Node* head = (Node*)malloc(sizeof(Node));
    if (head == NULL) {
        fprintf(stderr, "Error: Failed to allocate memory for head node\n");
        return 1;
    }

    head->next = NULL;

    for(int i = 0; i < 50000; i++) {
        if (insertNode(head, i) != 0) {
            free(head);
            return 1;
        }
    }

    printf( "%d", Node* current = head->next;
    int count = 0;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    printf( "Total nodes: %d\n", count);
    printf( "Inserted 50000 nodes successfully.\n");




    free(head);
    return 0;
}