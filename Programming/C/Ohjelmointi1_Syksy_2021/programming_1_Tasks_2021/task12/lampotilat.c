/* c program that prints celsius degrees and corresponding Fahrhenheit from -100  to 100
 * celsius to farhenheit formular is (celsius *1.8) add 32

*/
#include <stdio.h>

int main(void)
{
    // initialize print after every 10 degrees
    int range = 10;

    printf("%7s%12s", "Celsius", "Fahrenheit");
    puts("");
    for (int celsius = -100; celsius <= 100; ++celsius)
    {
        if (celsius % range == 0)
        {
            printf("%5d %11.2f\n", celsius, (celsius * 1.8) + 32);
        }
    }
}