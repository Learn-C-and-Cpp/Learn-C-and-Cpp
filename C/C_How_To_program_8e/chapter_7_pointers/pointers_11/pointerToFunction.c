// multipurpose sorting program using funciton pointers
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

// function prototypes
void bubble(int work[], size_t size, int (*compare)(int a, int b));
int ascending(int a, int b);  // return b < a
int descending(int a, int b); // return b > a

//void swap(int *elementXPtr, int *elementYPtr);

int getOrderValue(); // rename get choice
void clearBuffer();
// function maing begins execution
int main()
{
    // initilize unordered array arr
    int arr[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};


    puts("\nData items in original order\n");
    for (size_t counter = 0; counter < SIZE; ++counter)
    {
        printf("%-5d", arr[counter]);
    }
    puts("");

    // promt user for order input
    int orderSelection; // 1 for ascending and 2 for descending order
    printf("%s", "Enter 1 to sort in ascending order or 2 to sort in descending order > \n");
    
    orderSelection = getOrderValue();
    // validade order to only 1 or 2

    while (orderSelection != 1 || orderSelection != 2)
    {
        if(orderSelection == 1)
        {
            bubble(arr, SIZE, ascending);
            puts("\nData in ascending order\n");
            break;

        }else if (orderSelection == 2)
        {
            bubble(arr, SIZE, descending);
            puts("\nData in ascending order\n");
            break;
        }
        else
        {
            orderSelection = getOrderValue();

        }
        

    }

    
    

   


    /* sort array in ascending order; pass function ascending as an
       argument to specify ascending sorting order
    */

    // validade order to only 1 or 2+
      
    /*

    switch (orderSelection)
    {
    case 1:
        bubble(arr, SIZE, ascending);
        puts("\nData in ascending order\n");
        break;
    case 2:
        bubble(arr, SIZE, ascending);
        puts("\nData in ascending order\n");
        break;

    default:
       printf("%s", "\nEnter 1 to sort in ascending order,\n"
                     "\nEnter 2 to sort in descending order > \n");
         
        break;
    } // end switch 
   */

    // output sorted array
    for (size_t counter = 0; counter < SIZE; ++counter)
    {
        printf("%-5d", arr[counter]);
    }
    puts("");
    /* 
    if (orderSelection > 0 && orderSelection < 3)
    {
        printf("%s", "\nEnter 1 to sort in ascending order,\n"
                     "\nEnter 2 to sort in descending order > \n");
    }
    if (orderSelection == 1)
    {
        bubble(arr, SIZE, ascending);
        puts("\nData in ascending order\n");
    }
    else if (orderSelection == 2)
    {
        bubble(arr, SIZE, descending);
        puts("\nData in descending order\n");
    }

    // output sorted array
    for (size_t counter = 0; counter < SIZE; ++counter)
    {
        printf("%-5d", arr[counter]);
    }
    puts("");
 */
    return 0;
}
/* multipurpose bubble sort; parameter compare is a pointer to the comparison
 * function that determine sorting order
 */
void bubble(int work[], size_t size, int (*compare)(int a, int b))
{
    // to enforce the princople of least privilege
    void swap(int *element1Ptr, int *element2Ptr);

    // loop to control number of passes
    for (size_t pass = 0; pass < size - 1; ++pass)
    {
        // loop to control the number of comparisons per pass
        for (size_t count = 0; count < size - 1 - pass; ++count)
        {
            // if adjusent elements are out or order, swap them
            if ((*compare)(work[count], work[count + 1]))
            {
                swap(&work[count], &work[count + 1]);
            }
        }
    }
}

// swap values at memory locations to which element1Ptr and element2Ptr point
void swap(int *element1Ptr, int *element2Ptr)
{

    int temp = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = temp;
}

// determine wheter elements are out of order for an ascending order sort
int ascending(int a, int b)
{
    return b < a; // should swap if b is less than a
}
// determine wheter elements are out of order for an descending order sort
int descending(int a, int b)
{
    return b > a; // should swap if b is greater than a
}
// prompt user to input only positive integers
int getOrderValue()
{
    int integer;
    char character;
    int status;

    while ((status = scanf("%d%c", &integer, &character)) == 0 || (2 == status && character != '\n'))
    {
        clearBuffer();
        printf("%s", "You did not enter a non negative value please,  try again > ");
    } // end while

    return integer;
}
// clear stdin
void clearBuffer(void)
{
    while (fgetc(stdin) != '\n')
        ;
}