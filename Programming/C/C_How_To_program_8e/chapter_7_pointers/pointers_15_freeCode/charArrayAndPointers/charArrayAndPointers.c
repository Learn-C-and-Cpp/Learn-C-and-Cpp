#include <stdio.h>
#include <string.h>

void printStr(char* C)
{
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
    printStr(C);

    return 0;
}