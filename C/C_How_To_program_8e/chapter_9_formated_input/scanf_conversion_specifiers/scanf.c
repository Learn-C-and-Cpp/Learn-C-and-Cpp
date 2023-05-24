// Using scanf conversion specifiers

#include<stdio.h>

int main(void)
{
    // Reading integers

    // int a,b,c,d,e,f,g;
    // puts("Enter seven integers:");
    // scanf("%d%i%i%i%o%u%x", &a, &b, &c, &d, &e, &f, &g);
    // puts("\nThe input displayed as decimal integers is:");
    // printf("%d %d %d %d %d %d %d\n", a, b, c, d, e, f, g);

    // Reading floating point numbers

    // double x, y, z;
    // puts("Enter floating point numbers:");
    // scanf("%le%lf%lg",&x, &y, &z);
    // printf("\nHere are the numbers entered in plain:");
    // printf("%f\n%f\n%f\n", x, y, z);

    /*--- Reading characters and strings--*/
    
    // char x;
    // char y[12];
    // printf("%s", "Enter a string : ");
    // scanf("%c%10s", &x, &y); // &x and &y are pointers to the variable in which
    //                         // the input will be stored
    // puts("The input was:\n");
    // printf("The character \"%c\" and the string \"%s\"\n", x, y);

    
    /* 1.-- Using scan sets with scasnf -scan set is a set of characters enclosed in [aeiou]--*/
    char ch1[9]; // define array z

    printf("%s", "Enter string: ");
    scanf("%8[aeiou]", ch1);

    printf("The input was \"%s\"\n", ch1);

    /* 2.-- Using scan sets with scasnf - scan nonvowels using inverted scan set [^aeiou]--*/

    char ch2[9]; // define array z

    printf("%s", "Enter string: ");
    scanf("%8[^aeiou]", ch2);

    printf("The input was \"%s\"\n", ch2);
    
    
    return 0;
}
