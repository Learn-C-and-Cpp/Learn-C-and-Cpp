// Initilizing an array size with symbolic canstant and calculations


#include <stdio.h>
#include <stdlib.h>

#define SIZE 5 // size of array


int main()
{
    // symbolic constant SIZE can be used to specify array size
    int s[SIZE]; // array size elements

    for(size_t j = 0; j < SIZE; ++j ) // set the values
    {
       s[j] =  2 + (2 * j);
    }

    printf("%s%13s\n","Element","Value");

    // output contents or array s in tabular format
    for(size_t j = 0; j < SIZE; ++j ) // set the values
    {
       printf("%7u%13d\n", j, s[j]);
    }



    return 0;
}
