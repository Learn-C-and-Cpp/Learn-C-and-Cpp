// demonstrating pointer intexing and offsets notation with arrays
#include <stdio.h>
#define ARRAY_SIZE 4

// function maing begins program execution
int main()
{
    int b[] = {10, 20, 30, 40}; // create and initialize array b
    int *bPtr = b;              // create bPtr and point it to array b

    // output array b using array indexing notation
    puts("Array b printed with Array index notaion");
    for (size_t i = 0; i < ARRAY_SIZE; ++i)
    {
        printf("b[%u] = %d\n", i, b[i]);
    }

    // output array b using array name and pointer/offset notation
    puts("\npointer/offset notaion where the pointer is the array name\n");

    // loop through array b
    for (size_t offset = 0; offset < ARRAY_SIZE; ++offset)
    {
        printf("*(b + %u) = %d\n", offset, *(b + offset));
    }

    // Output array b using bPtr and array index notation
    puts("\nPointer indexing natation");
    for (size_t index = 0; index < ARRAY_SIZE; ++index)
    {
        printf("bPtr [%u] = %d\n", index, bPtr[index]);
    }

    // Output array b using bPtr and pointer/offset
    puts("\nPoint/offset notation");
    for (size_t offset = 0; offset < ARRAY_SIZE; ++offset)
    {
        printf("*(bPtr + %u) = %d\n", offset, *(bPtr + offset));
    }

    return 0;
}