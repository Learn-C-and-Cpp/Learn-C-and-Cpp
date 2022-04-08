/* c program to take exam scores and print a corresponding grade*/

// use switch selection
#include <stdio.h>

// function main begins program execution
int main()
{
    int examScore; //  the score obtained

    // prompt user for an exam grade
    printf("%s", "Enter the score obtained >");
    scanf("%d", &examScore);

    switch (examScore)
    {
    case 0 ... 11: // specify arange of consecutive values 0-11
        puts("Hylatty\n");
        break;
    case 12 ... 13:
        puts("1");
        break;
    case 14 ... 16:
        puts("2");
        break;
    case 17 ... 19:
        puts("3");
        break;
    case 20 ... 22:
        puts("4");
        break;
    case 23 ... 24:
        puts("5");
        break;

    default:
        puts("Virheellinen pistemaara");
        break;
    }

    return 0;
}
