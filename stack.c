#include "stack.h"
#include <stdio.h>

stack *inizialize_stack(element *element){
    int i;
    stack *tmp = (stack*) malloc(sizeof(stack));

    for(i = 0; i < __MAX_ELEM__; i++){
        tmp -> elem[i] = NULL;
    }

    tmp -> top = 1;
    tmp -> elem[tmp -> top] = element;

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
    if(stack -> top + 1 > __MAX_ELEM__){
        printf("STACK IS FULL!");
        return -1;
    }

    stack -> top = stack -> top + 1;
    stack -> elem[stack -> top] = element;

    return 0;
}

element *pop(stack *stack){
    element *tmp;

    if(stack_empty(stack)){
        printf("STACK IS EMPTY");
        return NULL;
    }

    tmp = stack -> elem[stack -> top];
    stack -> elem[stack -> top] = NULL;

    if(stack -> top - 1 >=  0){
        stack -> top = stack -> top - 1;  
    }    

    return tmp;
} 

element *head(stack *stack){
    if(stack_empty(stack)){
        printf("STACK IS EMPTY");
        return NULL;
    }
    
    return stack -> elem[stack -> top];
}

void print_all_stack(stack *stack){
    int i;

    for(i = stack -> top; i >= 0; i--){
        if(stack -> elem[i] != NULL){
            if(get_element_key(stack -> elem[i]) < 10){
                printf("---------\n|   %d   |\n---------\n", get_element_key(stack -> elem[i]));
            }else if(get_element_key(stack -> elem[i]) >= 100){
                printf("---------\n|  %d  |\n---------\n", get_element_key(stack -> elem[i]));
            }else{
                printf("---------\n|   %d  |\n---------\n", get_element_key(stack -> elem[i]));
            }
        }
    }
}