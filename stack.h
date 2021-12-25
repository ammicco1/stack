#include "element.h"
#include <stdbool.h>

#define __MAX_ELEM__ 50

typedef struct stack{
    int top;
    element *elem[__MAX_ELEM__]; 
} stack;

stack *inizialize_stack(element *element);

bool stack_empty(stack *stack);

int push(stack *stack, element *element);

element *pop(stack *stack);

element *head(stack *stack);

void print_all_stack(stack *stack);