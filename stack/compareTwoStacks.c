#include "stack.h"

bool compareTwoStacks(StackNode* head1, StackNode* head2) {
    // Check for NULL stacks
    if (head1 == NULL && head2 == NULL) {
        return true;
    } else if ((head1 == NULL && head2 != NULL) || (head1 != NULL && head2 == NULL)) {
        return false;
    }

    StackNode* temp1 = NULL;
    StackNode* temp2 = NULL;

    // Compare the elements of the two stacks
    while (head1 != NULL && head2 != NULL) {
        if (summit(head1) != summit(head2)) {
            return false;
        }

        // Create temporary stacks to preserve the original stacks
        temp1 = push(temp1, summit(head1));
        temp2 = push(temp2, summit(head2));

        head1 = pop(head1);
        head2 = pop(head2);
    }

    // If one stack has more elements, they are not equal
    if (head1 != NULL || head2 != NULL) {
        return false;
    }

    // Restore the original stacks
    while (temp1 != NULL && temp2 != NULL) {
        head1 = push(head1, summit(temp1));
        head2 = push(head2, summit(temp2));
        temp1 = pop(temp1);
        temp2 = pop(temp2);
    }

    return true;
}