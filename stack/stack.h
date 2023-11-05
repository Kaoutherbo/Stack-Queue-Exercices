#ifndef MAIN_H
#define MAIN_H

// Header files
#include <stdio.h>
#include <stdlib.h>

// Define the struct
typedef struct stack Stack;

struct stack
{
    int val;
    Stack *next;
};

// Prototypes of functions
Stack* pop(Stack*);
Stack* push(int, Stack*);


#endif
