#include "stack.h"
/**
 * getExpression - function to get an expression from the user
 * 
 * @mes: a message to print in screen
 * Return: a string for the expression
*/
char* getExpression(char* mes)
{
    char *expression = malloc(sizeof(char) * 1000);
    printf("%s", mes);
    scanf("%s", expression);
    
    return expression;
}
