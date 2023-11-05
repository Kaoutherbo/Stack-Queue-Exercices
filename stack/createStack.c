#include "stack.h"

// Function to create a stack with 'size' elements
StackNode* createStack(int size) {
    StackNode* head = NULL;
    for (int i = 0; i < size; i++) {
        int data;
        printf("Enter element number %d: ", i + 1);
        scanf("%d", &data);
        head = push(head, data);
    }
    return head;
}