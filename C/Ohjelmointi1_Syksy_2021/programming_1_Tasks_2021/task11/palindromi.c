/* c program to determine if user digit is a palindrome number */

#include <stdio.h>

int main(void)
{
    int userNumber;           // user input
    int remainder;            // remainder of modulus of user input
    int palindromeResult = 0; // expected palindrome value
    int dividend;             // dividend operand



    // prompt user for a digit
    printf("Enter a five-digit number\n");
    scanf("%d", &userNumber); 

    int givenNumber = userNumber; // given number = to the user input

    // int checkDigits;
    if(givenNumber > 0) // n is a non-negative
    {
        int counter = 0; // digit counter
        while (givenNumber != 0)
        {
            givenNumber = givenNumber / 10; // divide the given number by 10 till its zero
            ++counter;                      // count number of division
        }

        // check if counter equal to 5 then it is five-digit
        if (counter != 5)
        {
            printf("Syote ei ole viisinumeroinen positiivinen kokonaisluku\n");
            // scanf("%d", &userNumber);
            return 0;
        }

        // determine a palindrome

        dividend = userNumber;

        while (dividend != 0)
        {
            // get mod tem of user input  to find the remainder 
            remainder = dividend % 10;

            // multiply result by ten and add remeinder to get a plindrome
            palindromeResult = (palindromeResult * 10) + remainder;

            // calculate the quotient of the user input
            dividend = dividend / 10;
        }
        // check  if user input is equal to the result of calculation
        if (palindromeResult == userNumber)
        {
            printf("Luku %d on palindromi\n", userNumber);
        }
        else
        {
            printf("Luku %d ei ole palindromi\n", userNumber);
        }
    }

    return 0;
}