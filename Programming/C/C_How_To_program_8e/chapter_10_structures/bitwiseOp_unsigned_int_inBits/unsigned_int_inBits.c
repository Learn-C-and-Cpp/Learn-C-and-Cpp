// displaying unsigned int in bits 
#include<stdio.h>
#include<limits.h>

// prototype
void displayBits(unsigned int value);

int main(void)
{
    unsigned int value; // variable to store input
    
    // promt for an input
    printf("Enter an non negative int\n");
    scanf("%d", &value);
    
    // passing value
    displayBits(value);


    return 0;
}
// convert input to bits 
void displayBits(unsigned int value)
{
    // define displayMask and left shift 31 bits
    unsigned int displayMask = 1 << 31;
    //unsigned int displayMask = 1 << CHAR_BIT *sizeof(unsigned int);
    /* mask = 1
     * left shift 1  << 31 bits
     * high-ordwer(left most)<- 10000000 00000000 00000000 00000000 low-ordwer(right most)    
     */
    printf("%10u = ", value); 

    // loop through bits 
    for(unsigned int c = 1; c <= 32; ++c)
    {
        putchar(value & displayMask ? '1' : '0'); // <- 10000000 00000000 00000000 00000000
        
        
        value <<= 1; // shift value left by i

        if(c %8 == 0)// output space after 8 bits
        {
            putchar(' ');
        }        
    }
   putchar('\n');
   int a ;
   printf("%u", CHAR_BIT *sizeof(unsigned int));

}
