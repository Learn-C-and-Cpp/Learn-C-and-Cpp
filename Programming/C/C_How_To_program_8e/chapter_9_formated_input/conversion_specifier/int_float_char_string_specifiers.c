// conversion specifiers in c 
// Using  the integer conversion specifiers
#include<stdio.h>

int main(void)
{
    printf("%d\n", 455);
    printf("%i\n", 455);
    printf("%d\n", +455); // note
    printf("%hd\n", 32000);
    printf("%ld\n", 2000000000L);
    printf("%o\n", 455);
    printf("%u\n", 455);
    printf("%u\n", -455);
    printf("%x\n", 455);
    printf("%X\n", 455);

    // floating-point conversion specifiers 
    printf("\nPrinting floating-poing");
    printf("%e\n", 1234567.89);
    printf("%e\n", +1234567.89);
    printf("%e\n", -1234567.89);
    printf("%e\n", 1234567.89);
    printf("%E\n", 1234567.89); 
    printf("%g\n", 1234567.89);
    printf("%G\n", 1234567.89);

    // using character and string conversion specifiers 
    printf("\nPrinting character and string\n");
    char character = 'A'; // initialize char
    printf("%c\n", character);
    
    printf("%s\n", "This is a string");

    char string[] = "This is astring"; // initialize char array
    printf("%s\n", string);

    const char *stringPtr = "This is also a string"; // char pointer
    printf("%s\n", stringPtr);

    // using x and p conversion specifiers 
    printf("\nPrinting the pointer value and address\n");

    int x = 12345; // initialize x
    int *ptr = &x; // assing address of x to ptr

    printf("The value of ptr is %p\n", ptr);
    printf("The address of ptr x is %p\n\n", &x);

    printf("Printing a %% in a format control string\n");


    // using x and p conversion specifiers 
    printf("\nRight justifiying integers in the field\n");
    
    printf("%4d\n", 1);
    printf("%4d\n", 12);
    printf("%4d\n", 123);
    printf("%4d\n", 1234);
    printf("%4d\n\n", 12345);

    printf("%4d\n", -1);
    printf("%4d\n", -12);
    printf("%4d\n", -123);
    printf("%4d\n", -1234);
    printf("%4d\n", -12345);
    
    // Using precision 
    printf("\nUsing precision for inteters\n");
    
    int i = 873; // initializing i
    printf("\t%.4d\n\t%.9d\n\n", i, i);
    
    puts("Using presicion for floating-point numbers");
    double f = 123.94536; // initializing double f
    printf("\t%.3f\n\t%.3e\n\t%.3g\n\n", f, f, f);

    // Using precision for string 
    printf("\nUsing precision for string\n");
    char s[] = "Happy Birthday"; // initialize char array s
    printf("\t%.11s\n", s);

    // compining field widths and precision -> %9.3f
    printf("\nprecision and field width\n");
    printf("%9.3f\n",123.456789);
    
    //using intger percision in the argument list
    printf("%*.*f\n",7, 2, 98.74);


    return 0;
}