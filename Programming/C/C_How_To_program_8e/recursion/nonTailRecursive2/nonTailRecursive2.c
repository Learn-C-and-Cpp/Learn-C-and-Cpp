/*
Non-Tail recursion 2:
If the recursive call is not the last thing done by the function.
After returning back there is something left to evaluate.
 */

#include <stdio.h>
int func();

int main()
{
    int x = 8;
    printf("%d\n", func(x));

    return 0;
}

int func(int x)
{
    if (x == 1)
        return 0;
    else
    return 1 + func(x/2);
        //printf("%d\n", x);
}
