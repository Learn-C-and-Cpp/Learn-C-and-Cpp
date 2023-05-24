//relationship between array and pointer 
#include<stdio.h>
#define ARRAY_SIZE 4

//function maing begins programm execution 
int main()
{
    int b[ARRAY_SIZE] = {10, 20, 30, 40}; // create and initialize array b
    int *bPtr = b; // create bPtr and point it to array b

    // output array index notation
    puts("array index notation");
    for (size_t i = 0; i < ARRAY_SIZE; ++i)
    {
        printf("b[%u] = %d\n", i, b[i]);
    }
    puts("");
    
    puts("pointer offset notation where the pointer is the array name");
    for (size_t index = 0; index < ARRAY_SIZE; ++index)
    {
        printf(" *(b + %u)  = %d\n", index, *(b + index));
    }
    puts("");


    puts("pointer index notation");
    for (size_t index = 0; index < ARRAY_SIZE; ++index)
    {
        printf(" bPtr[%u] = %d\n", index, bPtr[index]);
    }
    puts("");
    
    
    puts("pointer offsent notation ");
    for (size_t offset = 0; offset < ARRAY_SIZE; ++offset)
    {
        printf("*(bPtr + %u) = %d\n", offset, *(bPtr + offset));
    }
    puts("");
    


    return 0;
}