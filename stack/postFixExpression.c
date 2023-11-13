#include "stack.h"


/**
 * isOperator - function that checks if the character is an operation or not
 * 
 * @ch: a character to be checked
 * Return: true or false
*/
bool isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

/**
 * postFixExpression - function that takes a post fix exression
 * and performs the corresponding operations.
 * @arr: the post fix expression it containes commas between
 * each element
 * 
 * Return: the result after performing coressponding operations
 * 
*/

int postFixExpression(char* arr) {
    StackNode* stack = NULL;
    int len = strlen(arr);
    char* token = strtok(arr, ","); // strtok tokenize the input string based on commas
    
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