#include "stack.h"

// add in the beginning  

Stack* push( Stack *head, int data)
{
    Stack *newNode = (Stack *)malloc(sizeof(Stack));
    newNode->data = data;
    newNode->next = NULL;

    if(head == NULL)
    {
        head = newNode;
    }
    else{
        Stack *temp = head;
        newNode->next = temp;
        head = newNode;
    }
    return head;
}
