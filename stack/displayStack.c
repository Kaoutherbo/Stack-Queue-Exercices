#include "stack.h"

/**
 * displayStack - Function to display the elements of the stack
 * 
 * @head: pointer to the first element in the stack
 * Retrun: void
*/

void displayStack(StackNode* head) {
    StackNode* temp = NULL;
    
    if (head == NULL) {
        printf("Stack is empty\n");
        return;
    }
    
    printf("Stack elements: ");
    
    // Create a copy of the stack in 'temp'
    while (head != NULL) {
        temp = push(temp, summit(head));
        head = pop(head);
    }
    
    // Display the elements from 'temp'
    while (temp != NULL) {
        printf("%d ", summit(temp));
        temp = pop(temp);
    }
    
    printf("\n");
    
    // Free the 'temp' stack
    while (temp != NULL) {
        StackNode* next = temp->next;
        free(temp);
        temp = next;
    }
}
