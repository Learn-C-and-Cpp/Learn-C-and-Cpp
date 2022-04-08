// Using bit fields store grade
#include <stdio.h>
#include <stdlib.h>

struct counters
{
    unsigned int little : 2;
    unsigned int mediun : 4;
    //unsigned           : 0;
    unsigned int large : 6;
   
};

#define NUM_LOOPS 50


struct s
{
    unsigned int b1 : 3;
    unsigned int    : 0; // start a new unsigned bit
    unsigned int b2 : 6;
    unsigned int b3 : 2;

};

int main(void)
{
    struct counters counts;
    counts.little = 0;
    counts.mediun = 0;
    counts.large = 0;

    for (int i = 0; i < NUM_LOOPS; i++)
    {
        counts.little++;
        counts.mediun++;
        counts.large++;
        printf("%u, %2u, %2u\n", counts.little, counts.mediun, counts.large);
    }  
    printf("sizeof counts = %u\n", sizeof(struct counters)); 
    printf("sizeof counts = %u\n", sizeof(struct s));




 return 0;
    
}