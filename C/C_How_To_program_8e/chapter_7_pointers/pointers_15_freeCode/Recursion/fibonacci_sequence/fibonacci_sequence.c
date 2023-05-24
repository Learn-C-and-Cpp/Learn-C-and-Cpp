// recursion with momoization

#include <stdio.h>

long int F[51]; // global

int fib(int n)
{
    if(n <= 1)
    {
        return n;
    }

    // if F[n] is in memory it is already calculated just return F[n]
    if (F[n] != -1)
    {
        return F[n];        
    }
    // calculate fibonacci    
    F[n] = fib(n-1) + fib(n-2);
    return F[n];
}
int main(void)
{
    for (size_t i = 0; i < 51; i++)
    {
        F[i] = -1; // F[i] is not yet calculated
    }
    //F[0] = 0; F[1] = 1; // is also posible
    
    int n;
    printf("Enter a value\n");
    scanf("%d", &n);

    int results = fib(n);

    printf("fibonacci = %d\n", results);


    return 0;
}