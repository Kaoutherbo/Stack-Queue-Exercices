#include "stack.h"
/**
 * getExpression - function to get an expression from the user
 * 
 * @mes: a message to print in screen
 * Return: a string for the expression
*/
char* getExpression(char* mes)
{
    char *expression ;
    printf("%s", mes);
    scanf("%s", &expres);
    
    return expres;
}
