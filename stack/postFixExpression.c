#include "stack.h"
int postFixExpression(char* arr, int size)
{
    StackNode* stack = NULL;
    int num1, num2;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= '0' && arr[i] <= '9')
        {
            stack = push(stack, arr[i] - '0');
        }
        else
        {
            if (!isEmpty(stack))
            {
                num1 = summit(stack);
                stack = pop(stack);

                if (!isEmpty(stack))
                {
                    num2 = summit(stack);
                    stack = pop(stack);

                    switch (arr[i])
                    {
                    case '+':
                        stack = push(stack, num2 + num1);
                        break;
                    case '-':
                        stack = push(stack, num2 - num1);
                        break;
                    case '*':
                        stack = push(stack, num2 * num1);
                        break;
                    case '/':
                        if (num1 == 0)
                        {
                            printf("Error: Division by zero\n");
                            exit(EXIT_FAILURE);
                        }
                        else
                        {
                            stack = push(stack, num2 / num1);
                        }
                        break;

                    default:
                        printf("Invalid operation !\n");
                        exit(EXIT_FAILURE);
                    }
                }
                else
                {
                    printf("Error: Insufficient operands for operation\n");
                    exit(EXIT_FAILURE);
                }
            }
        }
    }
}