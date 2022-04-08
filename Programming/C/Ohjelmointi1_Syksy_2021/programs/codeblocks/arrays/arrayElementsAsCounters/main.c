/* a c program to count the frequency of each element in an array
   e.g int array[10] = {1, 1, 3, 4, 5, 5, 6, 4, 9, 10}; what is the frequency

 */

#include <stdio.h>
#include <stdlib.h>

#define DATA_SIZE 40
#define FREQUENCY_SIZE 11


int main()
{
    int frequency[FREQUENCY_SIZE] = { 0 };// initialize all elements to zero

    int data[DATA_SIZE] = { 1, 2, 6, 4, 8, 5, 9, 7, 8, 10,
    1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6,
    5, 6, 7, 5, 6, 4, 8, 6, 8, 10};


    // count frequency
    for( size_t count = 0; count <DATA_SIZE; ++count)
    {
        // increment an array element position based on the number we come across in the number array
        ++frequency[data[count]]; //  ++frequency[3] = add frequency of 2


    }

    for( size_t count = 0; count <DATA_SIZE; ++count)
    {

       printf("%10d", data[count]);

        if( count % 10 == 0)
        {
            puts("");
        }

     }
     puts("");


    // print in tabular
    printf("%s%15s\n", "count", "frequency");

    for(size_t i = 1; i < FREQUENCY_SIZE; ++i)
    {
        printf("%5u%15d\n", i, frequency[i]); // print frequency array
    }

    return 0;
}
