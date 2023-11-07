#include "stack.h"

// Function to check if the expression is valid
bool isValidExpresion(char *expre, int len) {
    StackNode* stack = NULL; // Initialize an empty stack

    for (int i = 0; i < len; i++) {
        if (expre[i] == '(' || expre[i] == '[') {
            stack = push(stack, expre[i]);
        } else if (expre[i] == ')') {
            if (isEmpty(stack) || stack->data != '(') {
                return false;
            } else {
                stack = pop(stack);
            }
        } else if (expre[i] == ']') {
            if (isEmpty(stack) || stack->data != '[') {
                return false;
            } else {
                stack = pop(stack);
            }
        }
    }

    // If the stack is empty at the end, the expression is valid
    return isEmpty(stack);
}