// string conversion

#include <stdio.h>  // std input/ouput
#include <ctype.h>  // char handling
#include <stdlib.h> // string conversion

double strtod(const char *str, char **endptr); // **endPtr is a pointer to a string

int main(void)
{
    const char *str1 = "51.2% are admitted"; // initilize string
    char *stringPtr;                         // create char pointer

    double d = strtod(str1, &stringPtr);
    printf("The string \"%s\" is converted to the\n", str1);
    printf("double value %.2f and the string \"%s\" \n", d, stringPtr);

    char *str2 = "20.30300 This is the tet"; // string to be converted
    char *ptr;                               // point to the string after the last converted character
    double strd;

    strd = strtod(str2, &ptr);
    printf("\nThe number(double) is %lf\n", strd);
    printf("String part is |%s|\n", ptr);

    const char *string3 = "-1234567abc"; // string to be converted
    char *remainderPart;
    long x;

    x = strtol(string3, &remainderPart, 0);

    printf("%s\"%s\"\n%s%ld\n%s\"%s\"\n%s%ld\n",
           "The original string is ", string3,
           "The converted string is ", x,
           "The remainder of the original strint is ", remainderPart,
           "The converted value plus 567 is ", x + 567);
    puts(" ");

    const char *string4 = "1234567abc"; // string to be converted
    char *remainderStr;
    unsigned long int uli;

    uli = strtoul(string4, &remainderStr, 0);

    printf("%s\"%s\"\n%s%lu\n%s\"%s\"\n%s%lu\n",
           "The original string is ", string4,
           "The converted string is ", uli,
           "The remainder of the original strint is ",
           remainderStr,
           "The converted value minus 567 is ", uli - 567);

    puts(" ");
    puts("Functions fgets and putchar ");   




    return 0;
}
