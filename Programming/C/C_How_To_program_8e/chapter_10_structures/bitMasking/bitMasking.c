// demonstration checking bit at n masking
#include <stdio.h>

int main(void)
{
     unsigned int number = 14;  // 00000000000000000000000000001100
    // declare a musk
     unsigned int mask = 1;
    printf("%10u = ", number);
    // move the bit usint forloop
    for (unsigned int i = 1; i <= 32; i++)
    {
       // putchar(number & mask ? '1': '0');
       //printf("%u",number % mask ? 1 : 0);
        mask <<= 1;
    }
    printf("%u",number & mask ? 1 : 0); 
    //putchar(number & mask ? '1': '0');   
    putchar('\n');

    return 0;
}