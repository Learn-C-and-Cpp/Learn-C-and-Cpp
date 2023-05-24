#include <stdio.h>

// prototypes
void increment(int *p);

int main(void)
{
    int a = 10;
    increment(&a); // call by refence
   // printf("Address of variable a in main = %d\n", &a);
    printf("a = %d\n", a);

    return 0;
}

// increment a value
void increment(int *p)
{
    *p = (*p) + 1; // dereference p
   // printf("Address of variable a in increment = %d\n", &a);
}