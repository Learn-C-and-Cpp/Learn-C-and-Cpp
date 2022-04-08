# A simple Makefile with variables

#target -> dependencies
#	-> action

#declare variables

#compiler type is gcc
CC=gcc

#copiler flags are -c and -Wall
CFLAGS= -c -Wall

#use dolar sign to call variables

#the final executable is topDownNesed 
program: topDownNested

#compile *.o to get final_executable = final

topDownNested: topDownNested.o
	$(CC) topDownNested.o -o topDownNested
#all  *.c files are dependencies

# compile only to get *.o

topDownNested.o: topDownNested.c
	$(CC) $(CFLAGS) topDownNested.c 

#clean all object files and the executables
clean:
	rm -rf *.o topDownNested
