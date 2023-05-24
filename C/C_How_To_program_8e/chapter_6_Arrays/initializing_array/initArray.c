// initializing the elements of an arry to zeros
#include <stdio.h>
#include <string.h>

int main()
{
    int n[5]; // create an array of 5 elements
    int i; // counter

    // // set element on n to zero
    for ( i = 0; i < 5; i++)
    {
        n[i] = 0; // set elements to at location i to 0
    }

    // printf("%s%13s\n","Elements", "Values");
    // memset(n, 0, 5*sizeof(n));

    // print array in tapulay format
    for ( i = 0; i < 5; i++)
    {
        printf("%7d%13d\n", i, n[i]);
    }
    


    return 0;
}