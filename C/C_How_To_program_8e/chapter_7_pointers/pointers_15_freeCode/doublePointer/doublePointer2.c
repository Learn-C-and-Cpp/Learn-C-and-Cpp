// double pointer use case
#include <stdio.h>
#include <stdlib.h>

// function prototype
void returnPointer(int **ptr)
{
    int x = 10;
    int *newPtr = &x;
    //newPtr = malloc(sizeof(int));
    *newPtr = x;
    (*ptr) = newPtr;
    // printf("ptr in passPtr %d\n", ptr);
}

int main()
{
    int x = 10;
    int *ptr;
    printf("original ptr %p\n", ptr);
    returnPointer(&ptr);
    printf("original ptr %p *ptr = %d\n", ptr, *ptr);

    return 0;
}