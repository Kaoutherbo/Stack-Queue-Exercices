#include "stack.h"

/**
 * oddEvenStacks - Function to split elements into even and odd stacks
 * 
 * @stack: pointer to StackNode
 * @evenStack: pointer to the pointer that point for StackNode ,this is for evenStack
 * @oddStack: pointer to the pointer that point for StackNode ,this is for oddStack
 * 
 * Return: void
 */ 
void oddEvenStacks(StackNode *stack, StackNode **evenStack, StackNode **oddStack) {
    *evenStack = NULL;
    *oddStack = NULL;

    while (!isEmpty(stack)) {
        int element = stack->data;
        if (element % 2 == 0) {
            *evenStack = push(*evenStack, element);
        } else {
            *oddStack = push(*oddStack, element);
        }
        stack = pop(stack);
    }
}