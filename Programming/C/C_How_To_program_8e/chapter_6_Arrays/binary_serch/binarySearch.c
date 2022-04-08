//Binary search of a sorted array
#include<stdio.h>
#define SIZE 15 // arry size

// funciton prototypes
int integerInput();
void clearBuffer();
size_t binarySearch(const int integerArray[], int searchKey, size_t low, size_t high);
void printHeader(void);
void printRow(const int integerArray[], size_t low, size_t mid, size_t high);

// function main begins the program execution
int main()
{
    int integerArray[SIZE]; // create array arrayData 
    
    // crate data
    for(size_t i = 0; i < SIZE; ++i)
    {
        integerArray[i] = 2 * i;
    }

    // promt for a search Key
    printf("%s", "Enter a number between 0 and 28: ");
    int key = integerInput();

    printHeader(); // print header

    // search for key in array arrayData 
    // pass: array[28 elements], key= user input, low value = 0, high value = SIZE -1(15-1) 
    binarySearch(integerArray, key, 0, SIZE -1); 

  
    
    return 0; // end main
}

// function to perform binary search of an array
size_t binarySearch(const int integerArray[], int searchKey, size_t low, size_t high)
{
    // loop until low index is greater than high index
    while (low  <= high) // 0 <= 14
    {
        // determine middle element of subarray being searched
        size_t middle = (low + high) / 2; // 0+28/2 = 14 
        
        //display subarray used in this loop iteration
        printRow(integerArray, low, middle, high);
        
        // if searchKey matched middle element, return middle
       if(searchKey == integerArray[middle])
       {
           return middle;
       } // end if

       //if searchKey is less than middle element, set new high
       else if( searchKey < integerArray[middle])
       {
           high = middle -1; // search low end of array
       }
       // if searchKey is greater than middle element, set new low
       else
       {
           low = middle + 1; // search high end of array
       }

    } // end while

    return -1; // searchKey not found   

}






// print header for output
void printHeader(void)
{
     puts("\nIndices:");
    
    // output column head
    for(size_t i = 0; i < SIZE; ++i)
    {
        printf("%3u ", i);
    }

    puts(""); // start new line of output

    // outPut line of -charachers
    for (size_t i = 1; i <= 4 * SIZE; ++i)
    {
        printf("%s","-");
    
    }
    puts(""); // start a new output

}

void printRow(const int integerArray[], size_t low, size_t mid, size_t high)
{
    // loop through entire array
    for(size_t i = 0; i < SIZE; ++i)
    {
        //display spaces if outside current subarray range
        if(i < low || i > high)
        {
            printf("%s", "  ");
            
        }
        else if(i == mid)// display middle element
        {
            printf("%3d*", integerArray[i]); // mark middle value
        }
        else // display other elements in subarray 
        {
            printf("%3d ",integerArray[i]);
        }
    }
    puts("");// start new line of output
}

// validate user input only integers alowed
int integerInput()
{
    int integer;
    char character;
    int status;

    while ( (status = scanf("%d%c",&integer, &character)) == 0 || 2 == status && character != '\n' )
    {
        clearBuffer();
        printf("%s", "You did not enter an integer, please try again > ");
    }

    return integer;
}
// clear input buffer 
void clearBuffer()
{
    while (fgetc(stdin) != '\n');
   
}