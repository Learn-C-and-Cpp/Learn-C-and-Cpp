#include <stdio.h>

int main()
{
    int box = 5;
    int *ptr;
    ptr = &box;
    int **dPtr = &ptr;
    printf("%d \n", *ptr);
    printf("%d \n", **dPtr);

    return 0;
}