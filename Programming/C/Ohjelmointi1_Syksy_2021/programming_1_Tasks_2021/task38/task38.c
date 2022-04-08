/*c program to determine if a year is a leap year days = 366
    if(year % 400 == 0) -> leap
    if(year % 4 == 0) -> leap
    if(year % 100 != 0) -> not leap

 */

#include <stdio.h>

// function prototype
void isLeapYear(int year);

// function main begis a program execution
int main()
{
    int year = 0;

    // ask user for input
    printf("%s", "Enter year\n");
    scanf("%d", &year);

    // call to isLeapYear
    isLeapYear(year);

    return 0;
}

// check if user input is a leap year
void isLeapYear(int year)
{
    if (year % 400 == 0) // leap
    {
        printf("Vuosi %d on  karkausvuosi\n",year);
    }
    else if (year % 400 != 0 && year % 100 != 0 && year % 4 == 0)
    {
        printf("Vuosi %d on  karkausvuosi\n",year);
    }
    else
    {
        printf("Vuosi %d ei ole karkausvuosi\n",year);
    }
}
