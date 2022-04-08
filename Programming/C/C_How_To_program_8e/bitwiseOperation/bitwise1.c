/* bitwise operation
 * byte = 00000000 = char = 8bits
 * Bitwise AND, OR, EOR compare their two operands bit by bit
 * AND = sets each bit in the result to  1 if both bits are 1
 * OR  = sets each in the result bit to  1 if either of the bits is 1
 * EOR = sets each bit in the result to  1 if the corresponding bits are different
 * >> shift bits to the right by number specified in its right operand
 * << shift bits to the left by number specified in its right operand
 * ~ complement set all 0 bits to 1 and all 1 bits to 0 in the results (toggling the bits)
 *

*/
 // displaying an unsigned int in bits


#include <stdio.h>
#include <stdlib.h>

// function prototypes
void displayBits(unsigned int value);

void intToBinary(int n, char * p)
{
    if(NULL == p)
    {
        return;

        do
        {
            if (n % 2 == 0)
            {
                /* code */
            }
            
        } while (n > 0);
        
    }
}

int main()
{
    unsigned int x; // variable to hold user input
    printf("%s","Enter a nonnegative int: \n");
    scanf("%u",&x);

    displayBits(x);

    return 0;
}
// display bits of an unsigned int value
void displayBits(unsigned int value )
{
    // define displayMask left shift 31 bits
  //  unsigned int displayMask = 1 << 31;

    printf("%10u = ", value);


    putchar(' ');   
}

