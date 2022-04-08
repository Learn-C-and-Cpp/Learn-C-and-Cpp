// binary search example
#include<stdio.h>

#define SIZE 15

// function prototypes
size_t binarySearch(const int a[], int key, int size);
int inputInteger(); // get user input
void clearBuffer(); // clear stdin

int main()
{
    // create an integer array 
    int arrayValues[SIZE];

    // create array values
    for(size_t i = 0; i < SIZE; ++i)
    {
        arrayValues[i] = 2 * i;
    }

    // output array values
    for (size_t i = 0; i < SIZE; ++i)
    {
        printf("%u ", arrayValues[i]);
    }
    
    // get key 
    printf("%s", "Enter search key > ");
    int key = inputInteger();

    int index = binarySearch(arrayValues, key, SIZE);

    if(index != -1)
    {
        printf("\n%d found at index %d\n", key, index);
    }
    else
    {
        printf("\n%d Not found\n", key);
    }
      


    return 0;
}

size_t binarySearch(const int arrayValues[], int key, int size) // pass array, key and size
{
    int low = 0;
    int high = SIZE -1;

    while (low <= high)
    {
        //determine the middle of subarray being searched
        size_t mid = low + (high - low) / 2;

        // case 1:
        // if the element at mid == key then the search ends here and mid value is returned 
        if(key == arrayValues[mid]) 
        {
            return mid;

        }
        else if(key < arrayValues[mid])
        {
            high = mid -1;
            
        }
        else
        {
            low = mid + 1;
        }
        
    }
    return -1; // search key not found 

}

// get user input
int inputInteger()
{
    int integer;
    char character;
    int status;

    while ((status = scanf("%d%c", &integer, &character)) == 0 || (2 == status && character != '\n'))
    {
        clearBuffer();
        printf("%s", "You did not enter an integer. please try again > ");
    }

    return integer;
    
} 

// clear stdin
void clearBuffer()
{
    
    while (fgetc(stdin)!= '\n');
    
}


