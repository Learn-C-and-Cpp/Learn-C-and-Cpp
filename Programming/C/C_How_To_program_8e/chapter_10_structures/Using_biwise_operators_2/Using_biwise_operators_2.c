// using AND, OR, XOR and ~ operators

#include <stdio.h>

// prototypes
void displayBits(unsigned int value);

int main(void)
{
    // using bitwise AND (&)
    unsigned int number1 = 65535;
    unsigned int mask = 1;
    puts("The results of combining the following");
    displayBits(number1);
    displayBits(mask);
    puts("Using the bitwise & is ");
    displayBits(number1 & mask);

    // demostrate bitwise inclusive OR (|)
    number1 = 15;
    unsigned int setBits = 241;
    puts("\nThe results of combining the following");
    displayBits(number1);
    displayBits(setBits);
    displayBits(number1 | setBits);

    // demostrate bitwise exclusive OR (|)
    number1 = 139;
    unsigned int number2 = 199;
    puts("\nThe results of combining the following");
    displayBits(number1);
    displayBits(number2);
    displayBits(number1 ^ number2);

    // demostrate bitwise complement (~)
    number1 = 21845;
    puts("\nThe one's complement of");
    displayBits(number1);
    puts("is");
    displayBits(~number1);

    return 0;
}
void displayBits(unsigned int value)
{
    // declare displayMask and left shift 31 bits
    unsigned int displayMask = 1 << 31;
    printf("%10u = ", value);
   
   // loop through bits
    for (unsigned int c = 1; c <= 32; ++c)
    {
        putchar(value & displayMask ? '1' : '0');    
        // printf("%u", value & displayMask ? 1 : 0);
        //  value = value << 1;
        value <<= 1;

        // output a space after 8 bits
        if (c % 8 == 0)
        {
            putchar(' ');
        }
    }
    putchar('\n');
}
