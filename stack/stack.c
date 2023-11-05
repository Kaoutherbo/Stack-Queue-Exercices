#include "stack.h"

int main()
{
    int size = getSize("How many elements you want in the stack ? : ");
    StackNode* stack = createStack(size);
    displayStack(stack);
    
    return 0;
}