// stact usage
#include <stdio.h>

int total;
int square(int x)
{
    return x*x;
}

int squareOfSum(int x, int y)
{
    int z = square(x+y);
    return z;
}
int main(void)
{
    int a = 4, b = 8;
    total = squareOfSum(a, b);
    printf("output = %d", total);
    
    return 0;
}