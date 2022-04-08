/* logical operators in c */

#include <stdio.h>

#define SIZE 20
#define MAXIMUM 100
#define MINIMUM 10

int main()
{
    int number;

    int i = 1;

    int n = 100;
    // read number
    printf("\nEnter number %d > ", i);
    scanf("%d", &number);

    if ((number > 0) && (number <= 50))
    {
        printf("the entered number is in the range 0 - 50");
    }
    else if ((number > 50) && (number <= 100))
    {
        printf("The the entered number is in the range 50 - 100");
    }
    else
    {
        printf("please the entered number is not in the defined range ");
    }

    // while (i <= 5)
    // {
    //     // read number
    //     printf("\nEnter number %d > ", i);
    //     scanf("%d", &number);

    //     // check if number if valid
    //     if ((number < MINIMUM) && (number <= MAXIMUM))
    //     {
    //         printf("%s", "Invalid!\nTry again > ");
    //         scanf("%d", &number);
    //         // // puts("Target is out of range!");
    //     }
    //     else
    //     {
    //         i++;
    //         // printf("%s", "Invalid!\nTry again > ");
    //         // scanf("%d", &number);
    //         // // puts("Target is out of range!");
    //     }

    // }

    return 0;
}