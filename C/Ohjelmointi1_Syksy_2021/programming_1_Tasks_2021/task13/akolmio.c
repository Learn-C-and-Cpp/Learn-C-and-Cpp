/* c program to print a pattern(right-angle triagle) useing repeat structures */

#include <stdio.h>

int main(void)
{
    int sizeOfPattern = 8; // initialize number of rows and columns

    // loop through rows
    for (int row = 1; row <= sizeOfPattern; ++row)
    {
        // loop through columns print "a" the number of row times
        for (int column = 1; column <= row; ++column)
        {
            // output letter a
            printf("%s", "a");
        }
        printf("\n");
    }
    return 0;
}
