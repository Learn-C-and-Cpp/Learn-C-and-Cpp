
#include <stdio.h>
#define SIZE 5

int main()
{
    // array decleration
    int number[SIZE]; // values

    int min = 10;
    int max = 100;
    int i =0;

    // // // check if range is between 10-100
    while(min <= max)
    {
        // read input into the array
        int j = 1; 
        while(j<= SIZE)
        {
            printf("Enter value between 10...100  %d> ", j);
            scanf("%d", &number[j]);

            if ((number[j] >= min) && (number[j] <= max))
            {
                printf("number %d is within range \n", number[j]);
            }
            else
            {
                printf("%s", "Invalid!\nTry again > ");
                scanf("%d", &number[j]);
            }
            j++;
        }
        i++; // increment i
    }


  
  
return 0;
}
    