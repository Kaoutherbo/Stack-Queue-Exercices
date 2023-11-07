#include "stack.h"

/**
 * main - check the code
 * 
 * Return: Always 0
*/
int main()
{
    // char *expression = getExpression("Enter an expression : ");

    int size1 = getSize("How many elements you want in the stack 1 ? : ");
    //int size2 = getSize("How many elements you want in the stack 2 ? : ");

    printf("Enter the elements of first stack : \n");
    StackNode* stack = createStack(size1), *evenStack, *oddStack;
   /* printf("Enter the elements of second stack : \n");
    StackNode* stack2 = createStack(size2);

    // Check the two stacks if they're identitic or not
    
   /* if(compareTwoStacks(stack1, stack2))
        printf("They are equal ");
    else
        printf("They aren't equal ");

    if(isValidExpresion(expression, strlen(expression)))
        printf("The expression is valid ");
    else
        printf("The expression isn't valid ");*/

    // call the oddEvenStacks procedure
    oddEvenStacks(stack,&evenStack,&oddStack);

     // Display the even elements
    printf("The even elements are: ");
    displayStack(evenStack);

    // Display the odd elements
    printf("The odd elements are: ");
    displayStack(oddStack);
    
    return (0);
}
