#include "stack.h"



int main() {
    char expression[100];
    printf("Enter the postfix expression (e.g., 2,3,+,4,5,-,*): ");
    fgets(expression, sizeof(expression), stdin);

    // Remove the newline character from the input
    size_t len = strlen(expression);
    if (len > 0 && expression[len - 1] == '\n') {
        expression[len - 1] = '\0';
    }

    int result = postFixExpression(expression);
    printf("Result: %d\n", result);

    return 0;
}


/**
 * main - check the code
 * 
 * Return: Always 0
*//*
int main()
{
    // char *expression = getExpression("Enter an expression : ");

   // int size1 = getSize("How many elements you want in the stack 1 ? : ");
    
    //int size2 = getSize("How many elements you want in the stack 2 ? : ");

    /*printf("Enter the elements of first stack : \n");
    StackNode* stack1 = createStack(size1);//*evenStack, *oddStack;
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
    //oddEvenStacks(stack1, &evenStack, &oddStack);

     // Display the even elements
   /* printf("The even elements are: ");
    displayStack(evenStack);

    /* Display the odd elements
    printf("The odd elements are: ");
    displayStack(oddStack);*/
    /*char postfix[] = "23*5+";
    int result = postFixExpression(postfix, sizeof(postfix) - 1);
    printf("Result: %d\n", result);
    
    return (0);
}
*/