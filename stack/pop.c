#include "stack.h"
/**
 * pop - function that delete the first element in stack (top element)
 * 
 * @**head: pointer to the head pointer in the stack 
 * Return: pointer to the new head pointer after deleting the first (top) element
 * */ 

StackNode* pop(StackNode** head) {
    if (*head != NULL) {
        StackNode* oldHead = *head;
        *head = (*head)->next;
        free(oldHead);
    }
    return *head;
}