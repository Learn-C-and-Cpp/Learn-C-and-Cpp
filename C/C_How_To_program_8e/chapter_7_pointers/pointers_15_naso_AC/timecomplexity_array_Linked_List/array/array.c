// adding data at the beginning of array
#include <stdio.h>
#include <stdlib.h>
// prototypes
int add_beginning(int *arr, int n, int data);

int main()
{
    int arr[10], data = 10, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter an elements: ");
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
      //  n = add_beginning(arr, n, data);
    }

    for (size_t i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    

    return 0;
}

int add_beginning(int *arr, int n, int data)
{
    for (size_t i = n-1; i >= 0; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[0] = data;
    return n+1;
    
}