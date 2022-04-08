// right & left justification
#include<stdio.h>

int main(void)
{
    // right and left justification
    puts("1234567890123456789012345678901234567890\n");
    printf("%10s%10d%10c%10f\n","hello", 7, 'a', 1.23);
    printf("%-10s%-10d%-10c%-10f\n","hello", 7, 'a', 1.23);
    puts(" ");
    
    // printing positive and negative numbers with a without the + flag
    printf("%d\n%d\n", 786, -786);
    printf("%+d\n%+d\n", 786, -786);
    puts(" ");

    // using the space flag
    printf("% d\n% d\n", 547, -547);
    puts(" ");
    
    // Using the # flag
    int c = 1427; // initialize c
    printf("%#o\n", c);
    printf("%#x\n", c);
    printf("%#X\n", c);
    
    double p = 1427.0; // initialize p
    printf("\n%g\n", p);
    printf("%#g\n", p);

    // Using flag 0
    printf("\n%+09d\n", 452);
    printf("%09d\n", 452);





    return 0;
}
