#include "stack.h"

/**
 * getSize - function that get the size of the stack
 * 
 * @mes: message to print
 * Return: size of the stack 
*/
int getSize(char *mes)
{
    int size;
    printf("%s",mes);
    scanf("%d",&size);

    if(size <= 0)
    {
        printf("Error: The entered value is not valid.\n");
        return getSize(mes);
    }
    else
        return size;
}