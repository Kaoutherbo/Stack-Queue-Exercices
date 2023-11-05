#include "stack.h"


StackNode *creatStack(int size)
{
    StackNode *head = (StackNode *)malloc(sizeof(StackNode));
    if(!head)
    {
        printf("Memory can't be alocated !");
        return NULL;
    }
    head = NULL;
    for (size_t i = 0; i < size; i++)
    {
        int data;
        printf("Enter element number %d : ",i+1);
        scanf("%d",&data);
        head->next = push(head, data);
    }
    return head;    
}