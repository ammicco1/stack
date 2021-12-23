#include "stack.h"
#include <stdio.h>

int main(){
    int i;
    stack *stack = inizialize_stack(inizialize_element(inzialize_key(0)));

    push(stack, inizialize_element(inzialize_key(10)));
    push(stack, inizialize_element(inzialize_key(20)));
    push(stack, inizialize_element(inzialize_key(30)));
    push(stack, inizialize_element(inzialize_key(40)));
    push(stack, inizialize_element(inzialize_key(50)));

    for(i = 0; i < 6; i++){
        printf("%d\n", get_element_key(pop(stack)));
    }

    return 0;
}
