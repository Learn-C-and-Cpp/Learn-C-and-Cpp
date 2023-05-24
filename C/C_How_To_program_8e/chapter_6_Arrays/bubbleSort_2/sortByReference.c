// bubble sort using pass-by-reference

#include<stdio.h>
#define SIZE 10 // array size  

// function prototypes
void bubbleSort(int *const array, const size_t size );  // constant pointer and constant data
//void swap(int *element1Ptr, int *element2Ptr); // swap elements


// function main begins programm execution
int main()
{
    // initilize an array
    int someArray[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

    // print out the array
    puts("Data items in original order");
   for (size_t i = 0; i < SIZE ; ++i)
   {
       printf("%4d", someArray[i]);
   }

   //sort array using bubble sort algorithm
   bubbleSort(someArray, SIZE);
   
   
   puts("\nData items in ascending order: sorted list ");
   
   // print out the array
   for (size_t i = 0; i < SIZE ; ++i)
   {
       printf("%4d", someArray[i]);
   }
   puts("");

  
    return 0;
}

//void swap(int *element1Ptr, int *element2Ptr); // swap function can be declared here
 // sort array  by reference
void bubbleSort(int  *const array, const size_t size )
{
   // swap function can be declared here before its first use
   // to enforce the princople of least privilege
   void swap(int *element1Ptr, int *element2Ptr); 

    // loop to control passes
    for (size_t pass = 0; pass < size - 1; ++pass)
    {
        // loop to control comparison during each pass
        for (size_t i = 0; i < size - 1; ++i)
        {
            if(array[i] > array[i +1])
            {
                swap(&array[i], &array[i + 1]);
            }
        }
        
    }
    
}

// swap the elements if element at i(current pasition) is gretar than the element at i + 1(adjucent position)
//swap values at memory locations to which element1Ptr ant element2Ptr point 
void swap(int *element1Ptr, int *element2Ptr)
{
    int temp = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = temp; 

}




