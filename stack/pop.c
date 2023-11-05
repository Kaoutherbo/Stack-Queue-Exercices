#include "stack.h"

// Delete in the beginning  

Stack* pop(Stack *head){
    if(head != NULL)
    {
        Stack* oldHead = head;
        head = head->next;
        free(oldHead);
    }
    return head;
}