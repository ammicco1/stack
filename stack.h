#include "element.h"
#include <stdbool.h>

#define __MAX_ELEM__ 50

typedef struct stack{
    int top;
    element *elem[__MAX_ELEM__]; 
} stack;

stack *inizialize_stack(element *);

bool stack_empty(stack *);

int push(stack *, element *);

element *pop(stack *);

element *head(stack *);

void print_all_stack(stack *);