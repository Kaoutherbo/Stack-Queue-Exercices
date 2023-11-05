#include "stack.h"

// Delete in the beginning  

StackNode* pop(StackNode *head){
    if(head != NULL)
    {
        StackNode* oldHead = head;
        head = head->next;
        free(oldHead);
    }
    return head;
}