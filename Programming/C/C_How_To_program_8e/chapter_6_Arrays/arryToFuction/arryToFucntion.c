
// passig arrays and individual elements to function
#include<stdio.h>
#define SIZE 5

// function prototypes
void modifyArrayByReference(int *b, size_t size);
void modifyArrayElement(int e);

int main(void)
{
    // initialize array a
    int a[SIZE] = {0, 1, 2, 3, 4}; // initialize arry a

    puts("Effectes of passing an entire array by reference:\n\nThe"
    "values of the array are:");

    // output original array 
    for(size_t i = 0; i < SIZE; ++i)
    {
        printf("%3d", a[i]);
    }
    puts(""); // outputs a newline

    /*-- pass array  to modifyArray by reference --*/

    modifyArrayByReference(a, SIZE);
    puts("The values of the modified array are:");

    // output modified arrat
    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%3d", a[i]);
    }
    
    // output value of a[3]
    printf("\n\nEffects of passing array element"
    "by value:\n\nThe value of a[3] is %d\n", a[3]);
    
    // /*-- pass array element a[3] by value --*/

     modifyArrayElement(a[3]); 
    
    // // output value of a[3]
    printf("The value of a[3] if %d\n", a[3]);    
    


    return 0;
}

// in modifyArrayByReference, "b" points to the original array "a" in memory
void modifyArrayByReference(int *b, size_t size)
{
    // multyply each array element by 2
    for (size_t i = 0; i < SIZE; i++)
    {
        b[i] *= 2; // this modifies the original array.
    }
}

// in fuction modifyElement, "e" is a local copy of element a[3] passed from main
 void modifyArrayElement(int e)
{
    // multiply parameter by 2
    printf("Value in modifyElement is %d\n", e *=2);
}
