// calculate pow of a positive integer in A and B where B is better
// https://www.youtube.com/watch?v=IJDJ0kBx2LM&ab_channel=freeCodeCamp.org

#include <stdio.h>
// A
int pow_A(int x, int n)
{
    // base condition
    if (n == 0) // x power 0 = 1
    {
        return 1;
    }
    else
    {
        return x * pow_A(x, n - 1) ; // iterate n times and multilply x n times
    }
}
// B

int pow_B(int x, int n)
{
    // base condition
    if (n == 0)
    {
        return 1;
    }
    else if (n % 2 == 0)
    {
        int y = pow_B(x, n / 2);
        return y * y;
    }

    else
    {
        return x * pow_B(x, n - 1);// iterate n times
    }
}

int main(void)
{
    int x;
    printf("Enter a number\n");
    scanf("%d", &x);

    int n;
    printf("Enter exponent \n");
    scanf("%d", &n);

    // print A
    int A = pow_A(x, n);
    printf("result A = %d", A);

    // print B
    // int B = pow_A(x, n);
    // printf("result B = %d", B);

    return 0;
}