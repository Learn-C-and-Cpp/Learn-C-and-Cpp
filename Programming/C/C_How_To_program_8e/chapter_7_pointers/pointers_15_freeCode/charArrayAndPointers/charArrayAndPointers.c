#include <stdio.h>
#include <string.h>

void printStr(const char* C)
{
    //C[0] = 'A';
    while (*C != '\0')
    {
        printf("%c ", *C);
        C++;
    }
    printf("\n");
}
int main(void)
{
    char C[20] = "Hello"; //
   // char *C = "Hello"; // C becomes a constant cannot be changed
    printStr(C);

    return 0;
}