#include "stack.h"

/**
 * isEmpty - a boolean function that check
 * if the stack is empty or not.
 * @head: pointer to the first (top) element in the stack.
 * Return: true or false.
*/

bool isEmpty(StackNode *head)
{
    if(head == NULL)
        return true;
    else
        return false;
}