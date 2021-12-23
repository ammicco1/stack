#include "stack.h"
#include <stdio.h>

stack *inizialize_stack(element *element){
    int i;
    stack *tmp = (stack*) malloc(sizeof(stack));

    for(i = 0; i < __MAX_ELEM__; i++){
        tmp -> elem[i] = NULL;
    }
    tmp -> elem[0] = element;
    tmp -> top = 0;

    return tmp;
}

bool stack_empty(stack *stack){
    if(stack -> elem[stack -> top] == NULL){
        return true;
    }else{
        return false;
    }
}

int push(stack *stack, element *element){
    int i;

    for(i = stack -> top; i < __MAX_ELEM__; i++){
        if(stack -> elem[i] == NULL){
            stack -> elem[i] = element;
            return 0;
        }
    }

    for(i = 0; i < stack -> top; i++){
        if(stack -> elem[i] == NULL){
            stack -> elem[i] = element;
            return 0;
        }
    }

    printf("STACK IS FULL");
    return -1;
}

element *pop(stack *stack){
    element *tmp = stack -> elem[stack -> top];
    stack -> elem[stack -> top] = NULL;

    if(stack -> top + 1 <= __MAX_ELEM__){
        stack -> top = stack -> top + 1;
    }else{
        stack -> top = 0;
    }

    return tmp;
} 