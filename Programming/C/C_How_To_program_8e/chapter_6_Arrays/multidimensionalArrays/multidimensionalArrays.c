// multidimensional arrays represent information arranged in rows and columns.
// tables or arrays that require two indices to identify a particular element are called 2D arrays
// initializing multidimentinal arrays
// multidimensional array totaling
// umltidimesional array manipulations

#include<stdio.h>
#define ROW 2
#define COLUMN 3
// function prototypes 
void printArray(int a[][COLUMN]);


// function main begins program execution
int main()
{
    int array1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    puts("Values in array1 by row are:");
    printArray(array1);

    int array2[2][3] = { 1, 2, 3, 4, 5, 6};
    puts("Values in array2 by row are:");
    printArray(array2);

    int array3[2][3] = { {1, 2}, {4}};
    puts("Values in array3 by row are:");
    printArray(array3);

    puts(""); // new line   

    int b[2][3] = { {1, 2, 3},{4, 5, 6}};
    
    
    for (size_t i = 0; i < 2; ++i)
    {
        for (size_t j = 0; j < 3; ++j)
        {
            
            printf("%d ",b[i][j]);
        }
        puts(""); // new line        
    }
    
    // totaling array elemtnts
    int total = 0;
    for (size_t row = 0; row < ROW; ++row)
    {
        for (size_t column = 0; column < COLUMN; ++column)
        {
            total += b[row][column];
        }
                
    }
    printf("Total = %d\n", total);
               
    


    return 0;
}
// function to output arry with two rows and three columns
void printArray(int a[][COLUMN])
{
    // loop through rows
    for (size_t i = 0; i < ROW; ++i)
    {
        // output coumn values
        for (size_t j = 0; j < COLUMN; ++j)
        {
            printf("%d ", a[i][j]);
        }
        puts(""); // new line   
        //printf("\n"); // start a new line output
        
    }
    
}
