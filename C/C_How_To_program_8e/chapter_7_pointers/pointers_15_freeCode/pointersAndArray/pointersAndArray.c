#include <stdio.h>

int sumOfArray(int* A, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += A[i];
        //sum += *(A+i);
    }
    return sum;
}
void doubleA(int* A, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        A[i] = A[i] *2;
        //sum += *(A+i);
    }

}

int main(void)
{
    int A[] = {1, 2, 3, 4, 5};

    // get number of elements in an array
    int size = sizeof(A) / sizeof(A[0]);

    int total = sumOfArray(A, size);
    printf("sum = %d\n", total);

    // print doubled array
    doubleA(A, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}