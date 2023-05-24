// funcntion sprintf- formatted data into an array of characters

#include<stdio.h>
#define SIZE 80

int main()
{
    int x; // value to input
    double y; // value to input

    puts("Enter an integer and a double");
    scanf("%d%lf", &x, &y);

    // using sprintf
    char ch[SIZE]; // create char array
    sprintf(ch, "integer %6d\ndouble %7.2f", x, y);
    printf("%s\n%s", "The formatted output stored in the array ch is: ", ch);

    return 0;
}