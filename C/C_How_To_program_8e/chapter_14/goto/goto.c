// using goto

#include <stdio.h>

int main(void)
{
    int count = 1;

start:

    if (count > 10)
    {
        goto end;
    }
    printf("%d ", count);
    ++count;

    goto start; // on line 9

    end:
    putchar('\n');

    return 0;
}
