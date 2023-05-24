/* c aprogram to demonstarate  searching an arry with linear search
   Linear search compares each element of the array with the search key. 
*/

#include <stdio.h>
#define SIZE 100

// function prototype
size_t linearSearch(const int array[], size_t size, int key);

// integer input funtion prototype
int integerInput();
// function prototype
void clearBuffer();

// function main begins program execution
int main()
{
    // create an array dataSet[]
    int dataSet[SIZE];

    // create some data
    for (size_t counter = 0; counter < SIZE; ++counter)
    {
        dataSet[counter] = 2 * counter;
    }
   
    //promt for search key
    printf("%s", "Enter integer search key: ");

    // value to locate in array dataSet
    int searchKey = integerInput();

    // attempt to locate  searchKey in array dataSet
    size_t index = linearSearch(dataSet, searchKey, SIZE);

    // display results
    if(index != -1)
    {
        printf("Found value at index  %d\n", index);
    }
    else
    {
        puts("Value not found");
    }


    return 0;
}

/* compare key to every element of array until the location is found
   or untill the end of array if reached; return index of element
   if key if found or -1 if key is not found 
*/
size_t linearSearch(const int dataSet[], size_t size, int key)
{
    for (size_t index = 0; index < size; ++index)
    {
        if (dataSet[index] == key)
        {
            return index; // return location of key
        }
    }
    return -1;
}


int integerInput()
{
    int integer;
    char character;
    int status;

    while ((status = scanf("%d%c", &integer, &character)) == 0 || (2 == status && character != '\n'))
    {
        // clear buffer
        clearBuffer();
        printf("%s", "You din not enter an integer. please try again > ");
    }

    return integer;
}
// clear stdin buffer
void clearBuffer()
{
    while (fgetc(stdin) != '\n');
}
