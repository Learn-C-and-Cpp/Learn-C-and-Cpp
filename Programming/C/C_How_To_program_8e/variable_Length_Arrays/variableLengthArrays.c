// using variable-length arrays in c 99

#include <stdio.h>

// function prototypes
void print1DArray(size_t size, int array[size]);
void print2DArray(int row, int col, int array[row][col]);
int getInteger();
void clearBuffer();

// function main begins program execution
int main()
{
    // demonstrate scanf return 
    int integer;
    char character;
    puts("Enter int and char");
    int status =  scanf("%d%c",&integer, &character);
    printf("status = %d integer = %d, character = %c\n", status, integer, character );

    
    // get size using getInteger function
    printf("%s", "Enter size of a one-dimensional array > ");
    int arraySize = getInteger();

    // declare 1-D variable-length array
    int array[arraySize];

    // array1 get rows and columns using getInteger function
    printf("%s", "Enter number of rows and columns in a two-dimensional array1 > ");
    int row1 = getInteger();
    int col1 = getInteger();

    // declare 2-D variable-length
    int array2D1[row1][col1];

    // array2 get rows and columns using getInteger function
    printf("%s", "Enter number of rows and columns is a two-dimensional array2 > ");
    int row2 = getInteger();
    int col2 = getInteger();

    // declare 2-D variable-length
    int array2D2[row2][col2];

    // test the size operator on VLA
    printf("\nsizeof(array) yields 1-D array of %d bytes\n", sizeof(array));

    // assign elements of 1-D VLA
    for (size_t i = 0; i < arraySize; ++i)
    {
        array[i] = i * i;
    }

    // assign elements of first 2-D VLA
    for (size_t i = 0; i < row1; ++i) // rows
    {
        for (size_t j = 0; j < col1; ++j)
        {
            array2D1[i][j] = i + j;
        }
    }

    // assign elements of 2-D VLA
    for (size_t i = 0; i < row2; ++i) // rows
    {
        for (size_t j = 0; j < col2; ++j)
        {
            array2D2[i][j] = i + j;
        }
    }

    // pass 1-D VLA to function
    puts("\nOne-dimensional array:");
    print1DArray(arraySize, array);

    // pass 2-D VLA to function
    puts("\nFirst two-dimensional array:");
    print2DArray(row1, col1, array2D1);

    // pass 2-D VLA to function
    puts("\nSecond two-dimensional array:");
    print2DArray(row2, col2, array2D2);

    return 0;
}
// print one-D array
void print1DArray(size_t size, int array[size])
{
    // output 1-D array contents
    for (size_t i = 0; i < size; ++i)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }
}

// Print two-D array
void print2DArray(int row, int col, int array[row][col])
{
    //printf("%s", "2-D array [2][3] expected = {{0, 1, 2},{1, 2, 3}}");
    //printf("%s", "2-D array  [3][4] expected = {{0, 1, 2, 3},{1, 2, 3, 4},{2, 3, 4, 5}}");
    for (size_t i = 0; i < row; ++i)
    {
        for (size_t j = 0; j < col; ++j)
        {
            printf("%-5d ", array[i][j]);
        }
        puts("");
    }
}

// validate integer input
int getInteger()
{
    int integer;
    char character;
    int status;
    while ((status = scanf("%d%c", &integer, &character)) == 0 || (2 == status && character != '\n'))
    {
        clearBuffer();
        printf("%s", "You did not enter and integer. Please try again > ");
    }
    return integer;
}
// clear stdin (standard input stream)
void clearBuffer()
{
    while (fgetc(stdin) != '\n')
        ;
}