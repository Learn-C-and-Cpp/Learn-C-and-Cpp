/* c program to take exam scores and print a corresponding grade*/

// use if selection
#include <stdio.h>

// function main begins program execution
int main()
{
    int examScore; //  the score obtained

    // prompt user for an exam grade
    printf("%s", "Enter the score obtained >");
    scanf("%d", &examScore);
    if (examScore >= 0 && examScore <= 24)
    {
        if (examScore >= 0 && examScore <= 11)
        {
            puts("Hylatty\n");
        }
        else if (examScore >= 12 && examScore <= 13)
        {
            printf("%s", "1\n");
        }
        else if (examScore >= 14 && examScore <= 16)
        {
            printf("%s", "2\n");
        }
        else if (examScore >= 17 && examScore <= 19)
        {
            printf("%s", "3\n");
        }
        else if (examScore >= 20 && examScore <= 22)
        {
            printf("%s", "4\n");
        }
        else if (examScore >= 23 && examScore <= 24)
        {
            printf("%s", "5\n");
        }
    }
    else
    {
        printf("Virheellinen pistemaara\n");
    }
    return 0;
}
