#include "stack.h"

/**
 * main - check the code
 * 
 * Return: Always 0
*/
int main()
{
    int size1 = getSize("How many elements you want in the stack 1 ? : ");
    int size2 = getSize("How many elements you want in the stack 2 ? : ");
    char *expression = getExpression("Enter an expression : ");
    
    printf("Enter the elements of first stack : \n");
    StackNode* stack1 = createStack(size1);
    printf("Enter the elements of second stack : \n");
    StackNode* stack2 = createStack(size2);

   

    // Check the two stacks if they're identitic or not
    if(compareTwoStacks(stack1, stack2))
        printf("They are equal ");
    else
        printf("They aren't equal ");

    
    return 0;
}