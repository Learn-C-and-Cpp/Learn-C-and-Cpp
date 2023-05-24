// multi-dimensional arrays
#include <stdio.h>

void func_1D(int *A, int size) // passing pointer to 1D array(int *)
{
    printf("A %d %d %d %d\n", A, *A, A[0], &A);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(A+i));
    }
    printf("\n");
}

void func_2D(int (*B)[3]) // passing pointer to 1D of 3 elements(int*[3])
{
}

void func3_D(int (*C)[2][2]) // passing 1-D array
{
}

int main(void)
{
    int C[3][2][2] =
        {
            {{2, 5}, {7, 9}},
            {{3, 4}, {6, 1}},
            {{0, 8}, {11, 13}}};

    int A[] = {1, 2};
    int B[2][3] = {{2, 4, 6}, {5, 7, 8}}; // B returns int(*)[3](pointer to 1-D array of 3 integers)

    func_1D(A, 2); // A returns int* (pinter to integer)
    func_2D(B);
    func3_D(C);

    printf("%d %d %d %d\n", C, *C, C[0], &C[0][0]);
    printf("%d\n", *(C[0][0] + 1));
    return 0;
}