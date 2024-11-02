

/*
                +-----------------------------------------+
                | He spent hours Tinkering with the code  |
                +-----------------------------------------+
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>

float iam_global = 3.14;

void pintMessage(float arg);
float calculateArea(float);
void send_message(char message[2048]);

int counter(void);

int main()
{
        __int16_t kokonaisLuku = -124;
        __uint16_t unsignedInteger = 3333;
        __uint32_t lont_integer = 0x12345678;
        double floatingNumber = 1.234;
        float small_floatingNumber = 1.2e-10;

        __int8_t c = 'c';
        int b;
        printf("a = %d b= %d\n", sizeof(c), sizeof(b));
        printf("uint8_t = %c\n", c);

        __uint8_t x = 33;
        __uint8_t y = 101;
        __uint8_t z = x + y;
        printf("z = %d", c);

        double q = sqrt(x);
        printf("q = %d", q);

        return 0;
}
int counter(void)
{
        static __uint64_t lukkumaara = 0;
        lukkumaara++;
}
