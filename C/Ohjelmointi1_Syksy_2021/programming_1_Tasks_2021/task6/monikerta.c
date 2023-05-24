/* c program to read two integers then examines
 * whether the first is a multiple of the second number
 * that is exaclty divisible
*/
/*
+--------------------------+
| 6 tests run/4 test passed| 
+--------------------------+
*/
#include <stdio.h>

// function main begins program execution
int main()
{
    int firstDigit = 0;  //  first number
    int secondDigit = 0; //  second number
    // prompt user for the first number
    printf("%s", "Enter the first number >");
    scanf("%d", &firstDigit);

    // prompt user for the second number
    printf("%s", "Enter the second number >");
    scanf("%d", &secondDigit);

    // the imput should be greter than zero
    if (secondDigit != 0)
    {
        // check if the first number is a multiple of the second number
        if (firstDigit % secondDigit == 0)
        {
            printf("Luku %d on luvun %d monikerta.", firstDigit, secondDigit);
        }
        else
        {
            printf("Luku %d ei ole luvun %d monikerta.", firstDigit, secondDigit);
        }
    }
    /*
    while (secondDigit <= 0)
    {
        if (secondDigit < 1)
        {
            printf("%s", "Enter the second number greater than zero >");
            scanf("%d", &secondDigit);
        }
    }

    */

    return 0;
}