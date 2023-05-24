/* function pointers points to a function
 * pointer to an array is;
 * int  * ptr[10] = ptr is an array of  10 pointers pointing to integers
 * int (*ptr)[10]; (*ptr) is a pointer pointing to an array  of 10 intergers
 * int (*fptr)(int, int); // pointer to a function receiving 2 arguments and returns an integer
 * double (*fPtr)(double, double); // pointer to a function receiving 2 arguments and returns a double
*/
#include<stdio.h>

// function prototypes
int add(int x, int y);

// function main begins program execution
int main()
{
    int x = 2;
    int y = 3;
    int sum = 0;
    // declare a pointer
    int *xPtr; // pointer to a variable
    xPtr = &x;
    printf("*xPtr = %d\n", *xPtr);

    // declare a pointer to a function
    int (*addPtr)(int, int); // pointer to a function receiving 2 arguments and returns an integer
    addPtr = &add;
        
    sum = (*addPtr)(2, 3); // dereference the pointer to call the function

    printf("(*addPtr) = %d\n",sum);

    return 0;
}
// function to add two intergers
int add(int x, int y)
{
    return (x + y);

}
