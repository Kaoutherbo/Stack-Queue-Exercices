#include "stack.h"

void displayStack(StackNode *head)
{
    if(!head)
    {
        printf("The stuck is empty!");
        return;
    }
    else{
        StackNode* temp = head;
        printf("The elsements of this stack are : \n");
        while (temp != NULL){
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
    }
}