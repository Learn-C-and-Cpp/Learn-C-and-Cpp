/*Daynamic memory allocation */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // create an array of size entered by the user
    int n;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int *A = (int *)malloc(n * sizeof(int)); // dynamically allocated array space using malloc
    // int *A = (int*)calloc(n, sizeof(int)); // dynamically allocated array space using calloc
    for (size_t i = 0; i < n; i++)
    {
        A[i] = i + 1;
    }

    // deallocate memory
    // free(A); 

    // A[2] = 6; // A can still be modified after free()
    // A = NULL; // After free, adjust pointer to NULL

    // realloc
    int *B = (int *)realloc(A, n * sizeof(int)); // coppy values from bloc A to B
    // int *A= (int*)realloc(A, 0);  // Equivalent to free(A)
    // int *B = (int *)realloc(NULL, n * sizeof(int)); // Equivalent to malloc()
    printf("Previous block address = %d, new address = %d\n", A, B);

    // print array data
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", B[i]);
    }

    return 0;
}