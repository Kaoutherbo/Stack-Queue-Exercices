#ifndef STACK_H
#define STACK_H

// Header files
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Define the struct
typedef struct StackNode StackNode;

struct StackNode
{
    int data;
    StackNode *next;
};

// Prototypes of functions
StackNode* pop(StackNode*);
StackNode* push( StackNode*, int);
bool isEmpty(StackNode*);
int summit(StackNode*);
StackNode* createStack(int);
void displayStack(StackNode*);
int getSize(char*);
bool compareTwoStacks(StackNode *, StackNode *);
StackNode* freeStack(StackNode**) ;
char* getExpression(char*);
bool isValidExpresion(char*, int);

void oddEvenStacks(StackNode *, StackNode *);

#endif /* STACK_H */
