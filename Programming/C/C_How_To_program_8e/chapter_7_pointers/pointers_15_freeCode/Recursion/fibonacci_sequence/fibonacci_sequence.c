#include <stdio.h>
int fib(int n)
{
    if(n <= 1)
    {
        return n;
    }
    
    return fib(n-1) + fib(n-2);
}
int main(void)
{
    int n;
    printf("Enter a value\n");
    scanf("%d", &n);

    int results = fib(n);

    printf("fibonacci = %d\n", results);


    return 0;
}