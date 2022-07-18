/* usage of function pointer and callbacks
 * callback function should compare two integers, should return 1 if first element
   has higher rank, 0 if elements are equal and -1 if second element has higher rank
 */

#include <stdio.h>
#include <math.h>

void A()
{
    printf("Hello\n");
}

void B(void (*ptr)())// function pointer as arguments 
{
    ptr(); // call-back funtion that "ptr" points to
}

int compare(int a, int b)
{
    if(a > b) return -1;
    //else if(a==b) return 0;
    else  return 1;
}

// usage of function pointer and call-backs 
void bubbleSort(int *A, int n, int (*compare)(int, int))// set a flag(1= increasing, 0 = decreasing order)
{
    int i,j,temp;
    for (size_t i = 0; i < n; i++) // n passes
    {
        for (size_t j = 0; j < n-1; j++) // each pass
        {
            if(compare(A[j], A[j+1]) > 0) // compare A[j] with A[j+1] and swap if needed
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;  
            }
        }
        
    }    

}
 
int main(void)
{
    // declare and initialize function pointer
    void (*p)() = A;    
    B(p); // call B passing function pointer p
    //B(A); alternative call back

    // call-backs usage
    int A[] = {-31,22,-1,50,-6,4}; // sort in increasing order {1,2,3,4,5,6}
    bubbleSort(A, 6, compare);

    for (size_t i = 0; i < 6; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n"); // print new line

   
    return 0;
}