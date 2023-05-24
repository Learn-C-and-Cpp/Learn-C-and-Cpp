/* sorting and array's values into ascending order. using bubble sort or sinking sort 
 */

#include <stdio.h>
#define SIZE 10 // size of an array to sort

// void bubbleSort(int arrayToSort[])
// {
//      //bobble sort
//     //loop to control number of passes
//     for(unsigned int pass = 1; pass < SIZE; ++pass) // loop through the array
//     {
    
//        //loop to control the number of comparison per pass
//         for (size_t i = 0; i < SIZE - 1; ++i) // -1 means don not over flow 
//         {
//            /* compare adjucent elements and swap them if first
//             * element is greater than second element
//             */

//             if( arrayToSort[i] > arrayToSort[i + 1]) // i +1 means the number after i
//             {
//                 int temp = arrayToSort[i];
//                 arrayToSort[i] = arrayToSort[i + 1];
//                 arrayToSort[i + 1] = temp;
                
                
//             }
//         }
        
        
        
//     }
// }

// void swap(int arrayToSort[], int index1, int index2)
// {
//     int temp = arrayToSort[index1];
//     arrayToSort[index1] = arrayToSort[index2];
//     temp = arrayToSort[index2];
// }

//function main begins the program execution
int main()
{
    // initialize a 
    int arrayToSort[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    puts("Data items in original order");
    
    //output original array
    for (size_t i = 0; i < SIZE; ++i)
    {
        printf("%4d", arrayToSort[i]);
    }
    puts("");

    //buble sort
    //loop to control number of passes
    for(unsigned int pass = 1; pass < SIZE; ++pass) // loop through the array
    {
       
       //loop to control the number of comparison per pass
        for (size_t i = 0; i < SIZE - 1; ++i)
        {
           /* compare adjucent elements and swap them if first
            * element is greater than second element
            */

            if( arrayToSort[i] > arrayToSort[i + 1]) // means out of order
            {
                int temp = arrayToSort[i];
                arrayToSort[i] = arrayToSort[i + 1];
                arrayToSort[i + 1] = temp;
                
            }
        }
        
    }
    puts("\nData items in ascending order sorted list ");
    
    //output sorted array
    for(size_t i = 0; i < SIZE; ++i)
    {
        printf("%4d", arrayToSort[i]);
    }
    puts("");
    
    return 0;
}




