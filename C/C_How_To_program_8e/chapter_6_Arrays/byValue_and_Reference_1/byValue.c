// 

#include<stdio.h>

// character
void displayChar(char ch)
{
    printf("%c", ch);
}
// integer
void displayInt(int * num)
{
    printf("%d", *num);
}
// passing  the whole array

void passEntireArray(int * arr1, int numberOfElements)
{
    /*The pointer arr1 is pointing to the first element of
     *the array and the numberOfElements is the size of the array.
     *In the loop we are incrementing pointer so that it points to
     *the next element of the array on each increment 
     */
for (size_t i = 0; i < numberOfElements; i++)
{
    printf("Value of arr1[%d] is: %d \n", i, *arr1);
    // increment pointer for next element fetch
    arr1++;
}


}
int main()
{
    int byVal;
    int byRef;
    int i;

    
    char arr[] = {'a', 'b', 'c', 'd', 'e'}; // char array
    // to do input array by user
   
    for (i = 0; i < 5; i++)
    {
        displayChar(arr[i]); // passing elenemts one by one
    }
    puts("");
    //--------------------------------------------------------------------
     int intArr[] = {1, 2, 3, 4, 5};// int array

    printf("passing address of elements\n");
    for (i = 0; i < 5; i++)
    {
        displayInt(&intArr[i]); // passing address of array elements
    }
    puts("");
    
    // passing the entire array to a function as an argument
    int entireArray[] = {11, 22, 33, 44, 55, 66, 77};
    passEntireArray(entireArray, 7); // numberOfElements





    

    return 0;
}