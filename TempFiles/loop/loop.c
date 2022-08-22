#include <stdio.h>
int main()
{
    int arr[10] ={1,2,3,4};
    int n = 4;
    for (size_t i = n-1; i >=0; i--)
    {
        arr[i+1] = arr[i];

        printf("%d", i);
    }
    
    
    return 0;
}
