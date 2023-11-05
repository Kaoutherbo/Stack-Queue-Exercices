#include "stack.h"

/**
 * createStack - Function to create a stack with 'size' elements
 * 
 * @size: an integer that display the size of the stack
 * Return: pointer to the first element of the created stack
*/
 
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