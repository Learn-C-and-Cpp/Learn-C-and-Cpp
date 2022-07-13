#include <stdio.h>
#include <string.h>

void printOutput(char** output);

int main(void)
{
    char* str = "This is a test";
    printOutput(&str);
    printf(" After the call: %s\n", str);
    
    return 0;
}

void printOutput(char** output)
{
     printf("%s\n", *output);
     *output = "This is another test";
}