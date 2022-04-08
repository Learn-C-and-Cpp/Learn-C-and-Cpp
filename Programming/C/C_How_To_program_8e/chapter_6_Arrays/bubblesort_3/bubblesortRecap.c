// bubble sort recap 
// initilize array to be sorted
// bubble sort funcion
// swap function
#include<stdio.h>
#define SIZE 5

// function prototypes

// bubble sort funcion
void bubbleSort(int *const arr, const size_t size);
// swap function
//void swap(int *elementXPtr, int *elementYPtr);

//void bubbleSort(const int *a);

// funtion main begins program execution
int main()
{
    // initilize array to be sorted
    unsigned int arr[SIZE] = {150, 40, 90, 30, 10};
    // output array before swap

    puts("Array before swap ");
    for(size_t i = 0; i < SIZE; ++i)
    {
        printf("%3d", arr[i]);
    }
    puts("");
    // bubble sort funcion
    bubbleSort(arr, SIZE); 

    // output array after swap
    puts("Array after swap ");
    for(size_t i = 0; i < SIZE; ++i)
    {
        printf("%-4d", arr[i]);
    }
    puts("");   
    
    return 0;
}

// bubble sort funcion
void bubbleSort(int *const arr, const size_t size)
{
    void swap(int *elementXPtr, int *elementYPtr); // because of principles of least privilege 
    // loop to control number of pass
    for(size_t pass = 0; pass < size -1; ++pass)
    {
        // loop to control the number of swaps
        for(size_t j = 0; j < size - 1 - pass; ++j)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }

        }

    }

}
// swap function
void swap(int *elementXPtr, int *elementYPtr)
{

        int temp = *elementXPtr;
        *elementXPtr = *elementYPtr;
        *elementYPtr = temp;
}
