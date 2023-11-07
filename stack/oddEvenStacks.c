#include "stack.h"

// Function to split elements into even and odd stacks
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