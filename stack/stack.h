#ifndef STACK_H
#define STACK_H

// Header files
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Define the struct
typedef struct stack Stack;

struct stack
{
    int data;
    Stack *next;
};

// Prototypes of functions
Stack* pop(Stack*);
Stack* push( Stack*, int);
bool isEmpty(Stack*);
int summit(Stack*);
Stack* creatStack(int);
void displayStack(Stack*);
int getSize(char*);

#endif /* STACK_H */
