// using enumeration
#include<stdio.h>

 // enumeration constants
enum months
{
    JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
}; // set 1 - 12

int main(void)
{
    // initialize an array of pointers
    const char  *monthName[] = {"", "Januarry", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "Novemver", "December" };

        // loop through months
    for (enum months month = JAN; month <= DEC; month++) // month is a variable of type enum months  
    {
        printf("%2d%11s\n", month, monthName[month]);
    }

        return 0;
}