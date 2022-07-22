#include <stdio.h>
int factorial(int n)
{
    printf("calculation f(%d)\n", n);
    if (n == 0)
    {
        return 1;
    }
    int f = n * factorial(n - 1);
    printf("Done ! f(%d) = %d\n", n, f);

    return f;
}

int main(void)
{
    int n;
    printf("Enter a value\n");
    scanf("%d", &n);

    int results = factorial(n);

    printf("factorial = %d\n", results);

    return 0;
}