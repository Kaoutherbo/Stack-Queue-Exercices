#include "stack.h"

/**
 * displayStack - Function to display the elements of the stack
 * 
 * @head: pointer to the first element in the stack
 * Retrun: void
*/

void displayStack(StackNode* head) {
    if (head == NULL) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}
