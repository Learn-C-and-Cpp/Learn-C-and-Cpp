
// inputing data using field width
#include<stdio.h>

int main(void)
{
    // int x;
    // int y;
    
    // printf("%s", "Enter a six digit integer: ");
    // scanf("%2d%d", &x, &y);
    
    // printf("The integers input were %d and %d\n", x, y);

    /* -- inputing a date -- */

    int month = 0;
    int day = 0;
    int year = 0;

    printf("%s", "Enter a date in the form mm-dd-yyy: \n");
    scanf("%d%*c%d%*c%d", &month, &day, &year);
    printf("month = %d day = %d year = %d\n\n", month, day, year);

    printf("%s", "Enter a date in the form mm/dd/yyy: \n");
    scanf("%d%*c%d%*c%d", &month, &day, &year); 
    printf("month = %d day = %d year = %d\n\n", month, day, year);
}
