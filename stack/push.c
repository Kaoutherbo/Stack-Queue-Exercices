#include "stack.h"

// Function to push an element onto the stack
StackNode* push(StackNode* head, int data) {
    StackNode* newNode = (StackNode*)malloc(sizeof(StackNode));
    if (!newNode) {
        printf("Memory allocation error\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = head;
    return newNode;
}