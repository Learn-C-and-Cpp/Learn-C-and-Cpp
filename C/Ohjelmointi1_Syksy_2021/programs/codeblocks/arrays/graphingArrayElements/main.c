// Displaying a histogram execution

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main(void)
{
    int n[SIZE] = { 19, 3, 15, 7, 11 };
    printf("%s%13s%17s\n", "Element", "Value", "Histogram");

    // for each element of array n, outpun a bar of the histogram
    for(size_t i = 0; i < SIZE; ++i)
    {
        printf("%7u%13d         ", i, n[i]);

        for(int j = 1; j <= n[i]; ++j)
        {
            printf("%c",'*');
        }
         puts(""); // end a histogram bar with a newline


    }

    return 0;
}
