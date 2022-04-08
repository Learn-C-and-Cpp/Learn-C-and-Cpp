
// initilizing elements of an array and summing all the elements
// using array to summarize survey results


#include <stdio.h>
#include <stdlib.h>

#define SIZE 12

//function main begins program execution
int main(void)
{
    // use initilizer list to initilize array n
    int n[SIZE] = {1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45};
    int total = 0; // sum of array

    // sum contents of array n
    for(size_t i = 0; i < SIZE; ++i)
    {
        total += n[i];
    }

    printf("Total of array element values is %d\n", total);

//
//    printf("%s%13s\n", "Element","Value");
//    //output contents of an array in a tabular format
//    for(size_t i = 0; i < 5; ++i)
//    {
//        printf("%7u%13d\n", i, n[i]);
//
//    }
    return 0;
}
