CC=gcc
FLAGS= -Wall -g

all: connections 

connections: main.o my_mat.o
	$(CC) $(FLAGS) -o connections main.o my_mat.o -lm

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c -lm
	
my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c -lm
	
.PHONY: clean all 
 
clean:
	rm -f *.o *.so connections
	

