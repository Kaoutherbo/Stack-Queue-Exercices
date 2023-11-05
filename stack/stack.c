#include "stack.h"

int main()
{
    Stack *list = NULL;
    int size = getSize("How many elements you want in the stack ? : ");
    list = creatStack(size);
    displayStack(list);
    
    return 0;
}