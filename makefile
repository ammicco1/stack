FLAGS = -Wall -ansi -pedantic
OBJS = stack_main.o key.o element.o stack.o
EXEC = stack

$(EXEC): $(OBJS)
	gcc $(FLAGS) -o $(EXEC) $(OBJS)

$(EXEC).o: $(EXEC).c
	gcc $(FLAGS) -c $(EXEC).c

stack.o: stack.c
	gcc $(FLAGS) -c stack.c

element.o: element.c
	gcc $(FLAGS) -c element.c

key.o: key.c
	gcc $(FLAGS) -c key.c

clean: 
	rm -f *.o $(EXEC) $(OBJS)