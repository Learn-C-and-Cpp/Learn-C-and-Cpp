#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter a value\n");
    scanf("%d", &n);

    int a = 0;
    int b = 1;

    for (size_t i = 1; i <= n; i++)
    {
       printf("%d ",a); // prints 0
       int result = a + b; // 0+1
       a = b;   // a = 1
       b = result; // b = 1

    }
    

    return 0;
}