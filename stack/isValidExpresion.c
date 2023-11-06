#include "stack.h"

bool isValidExpresion(char *expre, int n)
{
    int i = 0;
    StackNode *stack;
    while ( i< n)
    {
        if (expre[i] ==  '(' || expre[i] == '[')
        {
            stack = push(stack , expre[i]);
        }
        if( expre[i] == ')')
        {
            if(summit(stack) != '(' || isEmpty(stack))
            {
                return false;
            }
            else
            {
                stack = pop(stack);
            }
        }

        if( expre[i] == ']')
        {
            if(summit(stack) != '[' || isEmpty(stack))
            {
                return false;
            }
            else
            {
                stack = pop(stack);
            }
        }

        i++;
    }


    if(isEmpty(stack)) return true;
    else return false;
}