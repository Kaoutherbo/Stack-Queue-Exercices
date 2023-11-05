#include "stack.h"

// add in the beginning  

StackNode* push( StackNode *head, int data)
{
    StackNode *newNode = (StackNode *)malloc(sizeof(StackNode));
    newNode->data = data;
    newNode->next = NULL;

    if(head == NULL)
    {
        head = newNode;
    }
    else{
        StackNode *temp = head;
        newNode->next = temp;
        head = newNode;
    }
    return head;
}
