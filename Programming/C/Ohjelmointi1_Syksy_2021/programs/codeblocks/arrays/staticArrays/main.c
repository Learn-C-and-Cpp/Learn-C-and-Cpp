// static arrays are initialized to zero if not explicitly initilized

#include <stdio.h>
#include <stdlib.h>
void staticArrayInit(void); // function prototype
void automaticArrayInit(void); // function prototype

// function main begins program execution
int main()
{
    puts("First call to each function:");
    staticArrayInit();
    automaticArrayInit();

    return 0;
}

// function to demostrate a static local array
void staticArrayInit(void)
{
    //initialize elements to 0 before function is called
    static int array1[3];
    puts("\nValues on entering a staticArrayInit:");
    // output contens on the array1
    for(size_t counter = 0; counter <= 2; ++counter )
    {
        printf("array1[%u] = %d \n", counter, array1[counter]);

    }

    puts("\nValues on exiting staticArrayInit:");

    // modify and output contents of an array
    for(size_t counter = 0; counter <= 2; ++counter )
    {
        printf("array1[%u] = %d \n", counter, array1[counter] +=5);

    }

}

// function to demostrate automatic local array
void automaticArrayInit(void)
{
    //initilizes elements each time fuction is called
    int array2[3] = {1, 2, 3};
    puts("\nValues on entering automaticArrayInit:");

    // output contents of array2
    for(size_t counter = 0; counter <= 2; ++counter )
    {
        printf("array2[%u] = %d \n", counter, array2[counter]);

    }

    puts("\nValues on exiting automaticArrayInit:");

    // modify and output contents of array2
    for(size_t counter = 0; counter <= 2; ++counter )
    {
        printf("array2[%u] = %d \n", counter, array2[counter] =+ 5);

    }

}
