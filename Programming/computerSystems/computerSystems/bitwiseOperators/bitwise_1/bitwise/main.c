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

int main()
{
  int value = 0x04030201; //32 bit number

  // extracting each byte from value from MSB to LSB
  int a  = (value >> 24) & 0xff; // 04 (bits 24-32)
  int b  = (value >> 16) & 0xff; // 03 (bits 16-23)
  int c  = (value >> 8)  & 0xff;  // 02 (bits 8- 16)
  int d  = value         & 0xff;       // 01 (bits 0 7)

  printf("\na = %x", a);
  printf("\nb = %x", b);
  printf("\nc = %x", c);
  printf("\nd = %x", d);





  printf("\n%d", value);

//    unsigned int x; // variable to hold user input
//    printf("%s","Enter a nonnegative int: \n");
//    scanf("%u",&x);
//
//    displayBits(x);

    return 0;
}
// display bits of an unsigned int value
//void displayBits(unsigned int value )
//{
//    // define displayMask and left shift 31 bits
//    unsigned int displayMask = 1 << 31;
//    printf("%10u ", value);
//
//    // loop through bits
//    for(unsigned int c = 1; c <= 32; ++c)
//    {
//        putchar( value & displayMask ? '1':'0');
//        value <<= 1; // shift values left by 1
//
//        if(c % 8 == 0)
//        {
//            // output space after 8 bits
//            putchar(' ');
//
//        }
//
//    }
//    putchar('\n');
//
//}

