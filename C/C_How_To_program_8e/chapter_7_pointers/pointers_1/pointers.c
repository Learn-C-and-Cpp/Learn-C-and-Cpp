// demonstrating the & (address operator) and * (indirection operator)
#include <stdio.h>
// function prototype
int cubeByValue(int n);
void cubeByReference(int *nPtr);

// main 
int main()
{
    int number = 5; // initialize number
    int number2 = 5;
    
    printf("The original value of number is %d", number);
    printf("\nThe original value of number2 is %d\n", number2);
    
    // pass by value to coubeByValue
    int number3 = cubeByValue(number);
    printf("\nThe new value of number is %d\n", number);
    printf("\nThe new value of number3 is %d\n", number3);

    // pass address of an number to cubeByReference
    
    cubeByReference(&number2);
    printf("\nThe new pass by address value of number is %d\n", number2);

    printf("\nThe original value of number is %d\n", number);
    printf("The original value of number2 is %d\n", number2);
    
    return 0;
}
// calculate and return cube of integer argument
int cubeByValue(int n)
{
    return (n * n * n);
}

// function take as aparmeter pointer to integer nPtr 
void cubeByReference(int *nPtr)
{
    *nPtr  = (*nPtr) * (*nPtr) * (*nPtr); // dereference the pointer and cube *nPtr
    
   
}