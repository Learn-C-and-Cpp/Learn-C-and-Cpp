/*
Non-Tail recursion:
If the recursive call is not the last thing done by the function.
After returning back there is sometheing left to evaluate.
 */

#include <stdio.h>
void func();

int main()
{
    int x = 3;
    func(x);

    return 0;
}

void func(int x)
{
    if (x == 0)
        return;
    func(x-1);
        printf("%d\n", x);
}
