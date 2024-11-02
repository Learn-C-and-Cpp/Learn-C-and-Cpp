#include <stdio.h>
#include <stdlib.h>
#include <stdint-gcc.h>

int main()
{
    char x = 1; // x = 1(0000 0001)
    char y = 2; // y = 2(0000 0010)

    //
    printf(" biwise AND");
    if(x&y)                             // 1&2 = 0(0000 0000)
        printf("Result of x&y is 1\n");
    if(x&&y)                            // 1&&2 =  TRUE && TRUE = TRUE = 1
        printf("Result of x&&y is 1\n");

    //-----------------------------------------------------------------------------------------------
    printf("left shift operator trailling positions are filled wiht zeros ");
    char var = 3;// binary = 00000011
    printf("%d\n", var << 1);  // var << 1;  // left shift by 1    = 0000011_ =00000110 = 6 [3X2¹]
    printf("%d\n", var << 2); //[3 X 2²] = 12

    //------------------------------------------------------------------------------------------------
    printf(" Right shifting leadeing positions are filled wiht zeros ");
    char var2 = 3;// binary = 00000011
    printf("%d\n", var2 >> 1);  // var << 1;  // left shift by 1 = _0000001 =00000001 = 1 [3X2¹]
    printf("%d\n", var2 >> 2); //[3 / 2²] = 0

    //
    printf("XOR\n");

    int a = 4, b = 3;

    a = a ^ b;
    printf("After XOR, a = %d and b = %d\n", a, b);
    b = a ^ b;
    printf("After XOR, a = %d and b = %d\n", a, b);
    a = a ^ b;
    printf("After XOR, a = %d and b = %d\n", a, b);

    //----------------------------------------

    printf("\ncomputer systems\n");

    char bit0 = 0x01;//51;//18;
    char bit1 = 0x03;//28

    printf("bit operation =  %d",(bit0 << bit1)); // = 19


    /*
    ( 0b00010010
    | 0b00100011 )


    | 0b00011100








    */











    return 0;
}
