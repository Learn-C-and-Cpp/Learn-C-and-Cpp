
// array to summurise survey data

#include <stdio.h>
#include <stdlib.h>

#define STUDENTS_SIZE 40
#define FREQUENCY_SIZE 11

int main()
{
    int total = 0;
    int frequncy[FREQUENCY_SIZE] = {0}; // initilize frequency counter to zero

    // array size equals to number of responses
    int responses[STUDENTS_SIZE] = { 1, 2, 6, 4, 8, 5, 9, 7, 8, 10,1, 6, 3, 8, 6, 10,
     3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10};


    for(size_t i = 0; i < 40; i++)
    {
        total += responses[i];
    }
    printf("The poll result is %d\n", total);
    return 0;
}
