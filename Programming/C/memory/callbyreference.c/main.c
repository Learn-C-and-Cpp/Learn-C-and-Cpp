#include <stdio.h>
#include <stdlib.h>

void increment(int* a)
{
    *a = (*a) + 1;
    printf("address of variable a in increment = %d\n",&a);
}

int main()
{
    int a;
    a = 10;
    increment(&a);
     printf("address of variable a in main = %d\n",&a);
    printf("a = %d\n", a);
    return 0;
}
