/*
need to know

in C ->  malloc, calloc, realloc, free

in C++ ->new and delete

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a; // goes to stack

    int *p;
    p = (int*)malloc(sizeof(int));
    *p = 10;
    free(p);


    p = (int*)malloc(20 * sizeof(int));
    *p = 20;

    // c++

    // int *b;
    // b = new int;
    // *b = 10;
    // delete b;

    // b= new int[20];
    // delete[]b;


    printf("Hello world!\n");
    return 0;
}
