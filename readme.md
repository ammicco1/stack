HERE'S AN IMPLEMENTATION OF A STACK. 
THE STACK CONTAINS: 
 - AN INT TO KEEP THE HEAD OF THE STACK.
 - AN ARRAY OF ELEMENT DEFINIED FROM THE CONST \_\_MAX_ELEM\_\_.

OBVIUSLY THE STACK FOLLOWS THE RULE "LIFO"

THE STACK HAS THE ESSENTIAL FUNCTIONS LIKE:
 - INZIALIZE STACK
 - PUSH
 - POP
 - HEAD
 - IS EMPTY?
 - PRINT ALL THE STACK

WITH THE STACK_MAIN TEST PROGRAM YOU CAN TEST ALL THE FUNCTIONS AND AFTER THAT YOU CAN MODIFY THE CODE OF KEY, ELEMENT AND STACK TO CREATE THE STACK THAT YOU WILL SERVE

IF YOU USE LINUX USE THE MAKEFILE, IF YOU USE WINDOWS:
 - PASTE THEESE COMMANDS IN CMD TO COMPILE:
    - gcc -Wall -ansi -pedantic -c key.c element.c stack.c stack_main.c
    - gcc -Wall -ansi -pedantic -o stack_main.exe key.o element.o stack.o stack_main.o

- AND THEESE TO CLEAN:
    - del *.o 
    - del *.exe