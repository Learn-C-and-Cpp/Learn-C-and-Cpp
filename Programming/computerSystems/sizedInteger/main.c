
/*Precise size specification such as int8_t, uint16_t*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>

int main()
{
    // signed integer
    int8_t smallInt = 127;
    int16_t mediumInt;
    int32_t largeInt;
    int64_t hugeInt;

    //usigned integer
    int8_t smallUint = 125;
    int16_t mediumUint;
    int32_t largeUint;
    int64_t hugeUint;


    printf("int8_t %d\n", smallInt);
    printf("int16_t %d\n", sizeof(mediumInt));
    printf("int32_t %d\n", largeInt);
    printf("int64_t %d\n", hugeInt);

    printf("uint8_t %u\n", sizeof(smallUint));
    printf("uint16_t %u\n", sizeof(mediumUint));
    printf("uint32_t %u\n",sizeof( largeUint));
    printf("uint64_t %u\n", sizeof(hugeUint));

    printf("CHAR_BIT : %d\n",CHAR_BIT);
    printf("CHAR_MAX : %d\n",CHAR_MAX);
    printf("CHAR_MIN : %d\n",CHAR_MIN);

    printf("INT_MAX : %d\n", INT_MAX);
    printf("INT_MIN : %d\n", INT_MIN);



    printf("UINT_MAX : %u\n",UINT_MAX);
    printf("ULONG_MAX : %lu\n",ULONG_MAX);
    printf("USHRT_MAX : %d\n",USHRT_MAX);




    return 0;
}
