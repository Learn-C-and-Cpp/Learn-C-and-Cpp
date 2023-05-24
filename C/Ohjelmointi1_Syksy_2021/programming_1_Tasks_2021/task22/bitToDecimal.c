/* c program that reads a five-digit binary number and converts it to a decimal number and
 * prints the result on the screen.
 */

#include <stdio.h>
#include <math.h>

// funtion main begins program execution
int main(void)
{
    int counter = 0;
    //char binaryNumber = 0;
    int binaryNumber = 0;   // store user binary
    int decimalNumber = 0;  // store decimal nuber
    int remainder;          // store remainder
    int exponentiation = 1; // initilize exponentiation  to 1 that is  2**n or 2⁰

    // prompt user to a five digit binary number
    printf("Enter a five digit binary number\n");
    scanf("%d", &binaryNumber);

    int binary = binaryNumber; // to retain binaryNumber value

    while (binary != 0)
    {
        // check that the input is a five-digit number
        binary = binary / 10;
        counter++;
    }

    // check if counter equal to 5 then it is five-digit
   /*  if (counter != 5)
    {
        //printf("Syote ei ole viisinumeroinen positiivine luku\n");

        return 0;
    } */

    // loop to check that binaryNumber is not equal to zero
    while (binaryNumber != 0)
    {
        // calculate mod 10 of binaryNumber to get remainder value
        remainder = binaryNumber % 10;
        decimalNumber += (remainder * exponentiation);

        // divide binaryNumber by 10 to get quotient value which is the remainig binary in the queue
        binaryNumber = binaryNumber / 10;

        // calculate the next power of two
        exponentiation = exponentiation * 2;
    }
    // print the results on the screen
    printf("%d", decimalNumber);

    return 0;
}