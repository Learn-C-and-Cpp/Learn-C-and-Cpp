#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int64_t factorial( int8_t n);

int main()
{
    int8_t num = 27;
    int64_t results = factorial( num );
    printf("%lld", results );

//    int fact = 1;
//    int number;
//
//    printf("%s", "Enter a number ");
//    scanf("%d",&number);
//
//    for( int i = 1; i <= number; i++)
//    {
//        fact = fact *i;
//
//    }

    return 0;
}

int64_t factorial( int8_t num)
{
 int64_t fact = 1;

 for(int8_t n = 1; n <= num; n++ )
 {
    if(n > 20)
    {
        return -1;
    }

    fact = fact * n;
 }

 return  fact;
}
