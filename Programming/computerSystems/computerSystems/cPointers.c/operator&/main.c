/*
Operator  &
 -> query any variable for its address in memory

Operator *
 -> pointer to a variable
 -> placement operator used to place a new variable
 ->retrieve a value

*/


#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int main()
{
    int8_t x = 0x47;
   // Operator  &  -> query any variable for its address in memory
    int8_t *xPtr = &x;
    printf(" value = %d address is = %p\n",x, &x);
    //pointer to a variable
    int8_t *yPtr = NULL;

    //placement operator used to place a new variable
    *xPtr = 0x23;
    printf(" value = %d address is = %p\n",x, &x);

    int16_t n = 0xBEEF;
    int16_t *nPtr = &n;

    printf(" n  = %x\n",*nPtr);


    return 0;
}
