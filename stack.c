#include "stack.h"
#include <stdio.h>

stack *inizialize_stack(element *e){
    int i;
    stack *tmp = (stack*) malloc(sizeof(stack));

    for(i = 0; i < __MAX_ELEM__; i++){
        tmp -> elem[i] = NULL;
    }

    tmp -> top = 1;
    tmp -> elem[tmp -> top] = e;

    return tmp;
}

bool stack_empty(stack *s){
    if(s -> elem[s -> top] == NULL){
        return true;
    }else{
        return false;
    }
}

int push(stack *s, element *e){
    if(s -> top + 1 > __MAX_ELEM__){
        printf("STACK IS FULL!");
        return -1;
    }

    s -> top = s -> top + 1;
    s -> elem[s -> top] = e;

    return 0;
}

element *pop(stack *s){
    element *tmp;

    if(stack_empty(s)){
        printf("STACK IS EMPTY");
        return NULL;
    }

    tmp = s -> elem[s -> top];
    s -> elem[s -> top] = NULL;

    if(s -> top - 1 >=  0){
        s -> top = s -> top - 1;  
    }    

    return tmp;
} 

element *head(stack *s){
    if(stack_empty(s)){
        printf("STACK IS EMPTY");
        return NULL;
    }
    
    return s -> elem[s -> top];
}

void print_all_stack(stack *s){
    int i;

    for(i = s -> top; i >= 0; i--){
        if(s -> elem[i] != NULL){
            if(get_element_key(s -> elem[i]) < 10){
                printf("---------\n|   %d   |\n---------\n", get_element_key(s -> elem[i]));
            }else if(get_element_key(s -> elem[i]) >= 100){
                printf("---------\n|  %d  |\n---------\n", get_element_key(s -> elem[i]));
            }else{
                printf("---------\n|   %d  |\n---------\n", get_element_key(s -> elem[i]));
            }
        }
    }
}