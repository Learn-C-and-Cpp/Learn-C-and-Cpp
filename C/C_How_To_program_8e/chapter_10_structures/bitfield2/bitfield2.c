/* dening Bit Fields for A status register,
   flag register, or condition code register (CCR)
 */
#include<stdio.h>

// using six individual bit | | |H|I|N|Z|V|C| (of a byte)
struct CCRregister
{
    unsigned int H : 1; // Half carry flag 
    unsigned int I : 1; // Interupt flab
    unsigned int N : 1; // S/N signed flag
    unsigned int Z : 1; // Zero flag
    unsigned int V : 1; // Overflow flag
    unsigned int C : 1; // Carry flag
};

// using six individual bit |3|3|3|2|2|1|4|4|4|4| | | | | (13 bits) 
struct smallAssociatedData
{
    unsigned int options  : 3; // group 3 bits togeter
    unsigned int track    : 2; // group 2 bits togeter
    unsigned int doneFlag : 1; // // 1 bit
    unsigned int          : 0; // force to the next unsigned int
    unsigned int value    : 1; // group 4 bits togeter
    
};

int main(void)
{
    struct CCRregister CCR; // data type variable name is CCR
    struct smallAssociatedData Info; 

    CCR.H = 1; // assing 1 to H, assigning higher will trancate e.g., 2(10) = 0
    printf("CCR.H = %u\n", CCR.H);

    Info.track = 3;
    printf("Info.track = %u\n", Info.track);

    // reading into the field
    printf("Read into the field\n");
    unsigned int field = 0;
    scanf("%u",&field);

    Info.value = field;
    printf("value = %u\n", Info.value);

    // testing the bit field
    if(CCR.Z)
    printf("Result of last operation was 0\n");
    else
    printf("Result of last operation was 1\n");


}

