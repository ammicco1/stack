#include "stack.h"
#include <stdio.h>

int main(){
    int choise, key, ret;
    bool init = false;
    stack *stack;

    while(1){
        printf("\n---------------------------------------------\n");
        printf("WHAT DO YOU WANT TO DO?\n");
        printf("\t- 1: INIZIALIZE A STACK\n");
        printf("\t- 2: PUSH AN ELEMENT\n");
        printf("\t- 3: POP AN ELEMENT\n");
        printf("\t- 4: HEAD AN ELEMENT\n");
		printf("\t- 5: IS EMPTY?\n");
		printf("\t- 6: PRINT ALL STACK\n");
        printf("---------------------------------------------\n");
        printf("\nCHOISE: "); scanf("%d", &choise);

        switch (choise){
            case 1: if(!init){
                        printf("INSERT THE FIRST KEY: "); scanf("%d", &key); stack = inizialize_stack(inizialize_element(inzialize_key(key))); printf("DONE!\n"); init = true;
                    }else{
                        printf("THE STACK ALREADY EXIST!");
                    } break;
            case 2: if(init){
                        printf("INSERT THE ELEMENT TO PUSH: "); scanf("%d", &key); ret = push(stack, inizialize_element(inzialize_key(key))); if(ret == 0){printf("DONE!\n");}
                    }else{
                        printf("INIZIALIZE THE STACK FIRST!");
                    } break;
            case 3: if(init){
                        key = get_element_key(pop(stack));
                        if(key != NULL){
                            printf("POP THE ELEMENT: %d", key);
                        }
                    }else{
                        printf("INIZIALIZE THE STACK FIRST!");
                    } break;
            case 4: if(init){
                        printf("HEAD THE ELEMENT: %d", get_element_key(head(stack)));
                    }else{
                        printf("INIZIALIZE THE STACK FIRST!");
                    } break;
            case 5: if(init){
                        if(!stack_empty(stack)){
                            printf("THE STACK'S NOT EMPTY");
                        }else{
                            printf("THE STACK IS EMPTY");
                        }
                    }else{
                        printf("INIZIALIZE THE STACK FIRST!");
                    } break;
            case 6: if(init){
                        print_all_stack(stack);
                    }else{
                        printf("INIZIALIZE THE STACK FIRST!");
                    } break;
            default: printf("WRONG CHOISE!"); break;
        }
    }

    return 0;
}
