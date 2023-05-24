
// cube a variable using pass-by-value and by-reference
#include<stdio.h>

int cubeByValue(int n); // prototype by value

// prototype by reference function take a pointer as parameter
void cubeByReference(int *nPtr); 

int main(void)
{
    // data
    int number_1 = 5; // initialize number
    int number_2 =5; // initialize number_2
    
    printf("The original value of number_1 is %d\n", number_1);

    printf("The original value of number_2 is %d\n\n", number_2);

    number_1 = cubeByValue(number_1); // number_1 is copied to function
    cubeByReference(&number_2); // the address of number_2  is passed


    printf("The original value of number_2 is %d\n", number_2);

    return 0;
}

// calculate and return cube of integer argument 
int cubeByValue(int n)
{
    return n * n * n; // cube local variabe and return results
}

// calculate cube of *nPtr; modifies number in main
void cubeByReference(int *nPtr) // nPtr points to the address of number_2
{
    *nPtr = *nPtr * *nPtr * *nPtr;  // cube *nPtr
    // int y = *nPtr; = 5
}

