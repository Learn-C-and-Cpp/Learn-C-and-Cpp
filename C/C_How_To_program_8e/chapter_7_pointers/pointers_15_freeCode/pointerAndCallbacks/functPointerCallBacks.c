/* usage of function pointer and callbacks // used also in event handling 
 * callback function should compare two integers, should return 1 if first element
   has higher rank, 0 if elements are equal and -1 if second element has higher rank
 */

#include <stdio.h>
#include <math.h>  // math functions
#include <stdlib.h> // for generic arrays (qsort)

void A()
{
    printf("Hello\n");
}

void B(void (*ptr)()) // function pointer as arguments
{
    ptr(); // call-back funtion that "ptr" points to
}

int compare(int a, int b)
{
    if (a > b)
        return -1;
    // else if(a==b) return 0;
    else
        return 1;
}

int absolute_Compare(int a, int b)
{
    if (abs(a) > abs(b))
        return 1;
    return -1;
}

// campare any kind of arry
int generic_compare(const void *a, const void *b) // void * is generic(can be casted to any data type)/ const(addresses cannot be changed)
{
    int A = *((int*)a); // typecasting a to int* and getting value by derferencing
    int B = *((int*)b);
        
    //return B - A; // return value > 1 if A is positive and 0 if(A==B) and -1 if (B>A) 
                // A-B returns a positive value if A is higher in ranking
    return abs(A) - abs(B);

}

// usage of function pointer and call-backs
void bubble_Sort(int *A, int n, int (*compare)(int, int)) // set a flag(1= increasing, 0 = decreasing order)
{
    int i, j, temp;
    for (size_t i = 0; i < n; i++) // n passes
    {
        for (size_t j = 0; j < n - 1; j++) // each pass
        {
            if (compare(A[j], A[j + 1]) > 0) // compare A[j] with A[j+1] and swap if needed (if condition is = 1 then swap)
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main(void)
{
    // declare and initialize function pointer
    void (*p)() = A;
    B(p); // call B passing function pointer p
    // B(A); alternative call back

    // call-backs usage
    int A[] = {-31, 22, -1, 50, -6, 4}; // sort in increasing order {-1,4,-6,22,-31,50}
    bubble_Sort(A, 6, compare);

    for (size_t i = 0; i < 6; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n"); // print new line

    // sort increasingly using absolute value of a number
    bubble_Sort(A, 6, absolute_Compare);
    for (size_t i = 0; i < 6; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n"); // print new line

    // sort using stdlib.h qsort
    qsort(A, 6, sizeof(int), generic_compare);
    for (size_t i = 0; i < 6; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n"); // print new line

    return 0;
}