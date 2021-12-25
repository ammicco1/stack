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

    printf("STACK IS FULL\n");
    return -1;
}

element *pop(stack *stack){
    element *tmp;

    if(stack_empty(stack)){
        printf("THE STACK IS EMPTY");
        return NULL;
    }

    tmp = stack -> elem[stack -> top];
    stack -> elem[stack -> top] = NULL;

    if(stack -> top + 1 <= __MAX_ELEM__ - 1){
        stack -> top = stack -> top + 1;
    }else{
        stack -> top = 0;
    }

    return tmp;
} 

element *head(stack *stack){
    if(stack_empty(stack)){
        printf("THE STACK IS EMPTY");
        return NULL;
    }
    return stack -> elem[stack -> top];
}

void print_all_stack(stack *stack){
    int i;

    for(i = stack -> top; i < __MAX_ELEM__; i++){
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

    for(i = 0; i < stack -> top; i++){
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