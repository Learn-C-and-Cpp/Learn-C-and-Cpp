/*that reads 20 numbers with values ​​between 10 and 100*/

#include <stdio.h>

#define SIZE 20

// function prototype
int getValue(int number[], int size);

// function main begis a program execution
int main()
{
    int number[SIZE]; // store values

    getValue(number, SIZE);

    return 0;
}

int getValue(int number[], int size)
{
    int i = 1; // loop counter
    int appearance[SIZE] = {0};
    

    while (i <= size)
    {

        // while condition is true
        while ((number[i] < 10) && (number[i] < 100))
        {
            printf("Enter number %d > ", i);
            scanf("%d", &number[i]);
            if (number[i] >= 10 && number[i] <= 100)
            {
                for (int i = 0; i < size; i++)
                {
                    /* code */
                }
                
            }
            else
            {
                printf("%s", "Invalid!\nTry again > ");
                scanf("%d", &number[i]);
            }
        }
         

        // printf(" test %d\n", ((number[i] >= 10) && (number[i] <= 100)));
        i++;
    }
    // for (int i = 0; i < 1; i++)
    // {
    //     printf("number = %d", number[i]);
    // }
}
