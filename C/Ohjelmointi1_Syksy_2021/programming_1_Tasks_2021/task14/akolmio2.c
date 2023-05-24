/* c program to print a pattern(right-angle triagle) useing repeat structures */

#include <stdio.h>

int main(void)
{
    int patternSize = 8; // initialize number of rows and columns

    // loop through rows
    for (int row = 1; row <= patternSize; ++row)
    {
        // loop through rows and subtrack rows from current row replacing with empty space
        for (int currentRow = 1; currentRow <= patternSize - row; ++currentRow)
        {
            printf(" ");
        }
        //loop through colums
        for (int column = 1; column <= row; ++column)
        {
            printf("a");
        }
        // print new line
        puts("");
    }
    return 0;
}