#include <stdio.h>
#include <string.h>

void printOutput(char** output);

int main(void)
{
    char* str = "This is a test";
    printOutput(&str);
    printf(" After the call: %s\n", str);

    int x = 5;
    int *p = &x;
    *p = 6;
    int **q = &p;
    int *** r = &q;

     printf("x = %d\n", *p);
     printf("*p = %d\n", *q);
     printf("**q = %d\n", **q);
     printf("**r = %d\n", **r);
     printf("***r = %d\n", ***r);
     ***r = 10;
    
    return 0;
}

void printOutput(char** output)
{
     printf("%s\n", *output);
     *output = "This is another test";
}