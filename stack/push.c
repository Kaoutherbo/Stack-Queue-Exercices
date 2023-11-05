#include "stack.h"

 /**
  * push - Function to push an element onto the stack
  * 
  * @head: pointer to he first element in the stack
  * @data: an integer value to add it in the stack
  * Return: pointer to the first element of Stack
 */

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