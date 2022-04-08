/* recursion a function calls itself directly or indirectly
Note: how you are calling a function and how you will return back

   int func()
   {
       func();
   }
*/
#include<stdio.h>

int func(int n)
{
    if(n==0)
    return 1;
    else
    return 7 + func(n-2); // return 1 + n-1(n=3| 3-1, 2-1, 1-1-> return 1) 
}

int main()
{
    int n =4;
    printf("%d\n", func(n));

    return 0;
}