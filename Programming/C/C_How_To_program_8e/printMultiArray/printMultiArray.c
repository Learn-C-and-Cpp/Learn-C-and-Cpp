// c program to print out a multdimension array

#include<stdio.h>

#define ROW  2
#define COLUMN 3

// function prototype
void printOutArray( const int arr[][COLUMN]);

// function main to begin program execution
int main()
{
    // define an array
    int arr[ROW][COLUMN] = {{1, 2, 3,},{4, 5, 6}};
    
    // print array
    printOutArray(arr);
        
    return 0;
}

void printOutArray( const int arr[][COLUMN])
{
    // go through the loop
    for (size_t row = 0; row < ROW; ++row)
    {
        //print colums
        for (size_t column = 0; column < COLUMN; ++column)
        {
            printf("%d ",arr[row][column]);
        }
        puts(""); // print new line
        
    }
    

}