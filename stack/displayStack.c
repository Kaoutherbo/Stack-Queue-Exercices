#include "stack.h"

void displayStack(Stack *head)
{
    if(!head)
    {
        printf("The stuck is empty!");
        return;
    }
    else{
        Stack* temp = head;
        printf("The elsements of this stack are : \n");
        while (temp != NULL){
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
    }
}