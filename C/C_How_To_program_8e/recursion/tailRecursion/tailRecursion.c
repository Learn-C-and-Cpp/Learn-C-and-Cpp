/*
Tail recursion:
    If the recursive call is the last thing done by the function.
    There is no need to keep the record of the previous state.

 */
#include <stdio.h>
void fun1();
void fun2(int n);
void func(int y);

int main()
{
    int x = 3;
     func(x);
   // fun1(x);
    //fun2(x);

    return 0;
}

void func(int x)
{
    if (x == 0)
        return;
    else
        printf("%d\n", x);
    return func(x - 1);
}

void fun1(int n) // non-tail
{
    if (n == 0)
        return;
    fun1(n/2);
    printf("%d", n%2);
}

void fun2(int n) // non-tail
{
    if (n <= 0)
       return;
    printf("%d", n);
    fun2(n*2);
    printf("%d", n);
}

