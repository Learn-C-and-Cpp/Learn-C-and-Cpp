// Pointer as a function returns
#include <stdio.h>
#include <stdlib.h>

void printHelloWorld()
{
    printf("Hello World\n");
}

int *add(int *x, int *y) // returns pointer to integer
{
    // x and y are pointer to integers
    // printf("address of x in add = %d\n", &x);
    // printf("Value of x in add(address of x of main) = %d\n", x);
    // printf("Value at address stored in x of add) = %d\n", *x);

    // because returning local variables is an error allocate momory on the heap  
    int *sum = (int *)malloc(sizeof(int)); // get memory on heap 
    *sum = (*x) + (*y);
    return sum; // pass the address of c
}

int main(void)
{
    int x = 2, y = 4;
    int *sum = add(&x, &y);
    printHelloWorld();
    printf("%d\n", *sum);

    return 0;
}