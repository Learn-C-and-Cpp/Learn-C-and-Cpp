/* inserting data at the beginning of an arrays -  time complexity if array is not full
    elements will be moved from right to leff
*/

#include <stdio.h>
int add_at_end(int *arr, int n, int data);

int main()
{
    int arr[10], data = 10, n;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) // fix
    {
        printf("Enter element  %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    
    n = add_at_end(arr, n, data);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

int add_at_end(int *arr, int n, int data)
{
    for (int i = n-1; i >=0; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[0] = data;
       
    return n+1;
}