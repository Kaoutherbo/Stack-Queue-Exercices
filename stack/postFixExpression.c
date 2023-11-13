#include "stack.h"


int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

int postFixExpression(char* arr) {
    StackNode* stack = NULL;
    int len = strlen(arr);
    char* token = strtok(arr, ",");
    
    while (token != NULL) {
        if (isOperator(token[0])) {
            if (!isEmpty(stack)) {
                int num1 = summit(stack);
                stack = pop(stack);
                
                if (!isEmpty(stack)) {
                    int num2 = summit(stack);
                    stack = pop(stack);

                    switch (token[0]) {
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
                            if (num1 == 0) {
                                printf("Error: Division by zero\n");
                                exit(EXIT_FAILURE);
                            } else {
                                stack = push(stack, num2 / num1);
                            }
                            break;
                        default:
                            printf("Invalid operation: %c\n", token[0]);
                            exit(EXIT_FAILURE);
                            break;
                    }
                } else {
                    printf("Error: Insufficient operands for operation\n");
                    exit(EXIT_FAILURE);
                }
            }
        } else if (*token >= '0' && *token <= '9') {
            stack = push(stack, atoi(token));
        } else {
            printf("Invalid token: %s\n", token);
            exit(EXIT_FAILURE);
        }

        token = strtok(NULL, ",");
    }

    if (!isEmpty(stack)) {
        int result = summit(stack);
        stack = pop(stack);
        return result;
    } else {
        printf("Error: Insufficient operands for operation\n");
        exit(EXIT_FAILURE);
    }
}