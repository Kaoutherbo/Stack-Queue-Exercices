#include "stack.h"

StackNode* freeStack(StackNode** head) {
    while (*head != NULL) {
        *head = pop(*head);
    }
}
