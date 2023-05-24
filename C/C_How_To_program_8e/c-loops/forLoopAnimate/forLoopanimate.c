/* a program to print a pattern i for raw and j for column
 */
#include<stdio.h>

int main()
{
    // printing a pattern in using nested for loop
    for(int outer = 0; outer < 5; ++outer)
    {
        //printf("%d",outer);
        for (int inner = 3; inner >= 1; --inner)
        {
            printf("%d",inner);
        
        }
        
        puts("");
    }
    

     
    return 0;
}
