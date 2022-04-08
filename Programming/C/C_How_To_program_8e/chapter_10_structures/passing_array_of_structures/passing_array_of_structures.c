// passing array of structures to function

#include<stdio.h>

// defining a structure
struct point
{
    int x;
    char y;
};

void print(struct point arr[]);

int main(void)
{
    // declare an array of type struct abc
    struct point arr[2] = { {1, 2}, {3, 4}};

    // passing
    print(arr);

    return 0;
}

void print(struct point arr[])
{
    int i; // initialize counter
    for (i = 0; i < 2;  i++)
    {
        printf("%d %d\n", arr[i].x, arr[i].y);
    }
}