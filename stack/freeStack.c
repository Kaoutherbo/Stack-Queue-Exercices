#include "stack.h"

/**
 * freeStack - function to free the stack
 * 
 * @head: pointer to pointer of the head element in stack
 * Return: pointer to NULL
*/
StackNode* freeStack(StackNode** head) {
    while (*head != NULL) {
        *head = pop(*head);
    }
}
