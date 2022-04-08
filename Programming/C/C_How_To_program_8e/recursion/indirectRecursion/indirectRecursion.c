/*indirecursion:
 A program to print numbers from 1 to 10 in such a way that when a number is odd, add 1 and subtruct
 1 from even numbers
 */
#include <stdio.h>
void odd();
void even();
int n = 1;

int main()
{
    int a = 1;
    odd();

    return 0;
}


void even()
{
    
    if (n <= 10)
    {
        printf("%d is even\n", n - 1);
        n++;
        odd();
        return;
    }
}
void odd()
{
    
    if (n <= 10)
    {
        printf("%d is odd\n", n + 1);
        n++;
        even();
        return;
    }
}

