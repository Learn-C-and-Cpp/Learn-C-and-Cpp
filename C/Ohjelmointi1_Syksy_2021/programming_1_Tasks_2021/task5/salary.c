// c program to calculate employee salary
#include <stdio.h>

int main()
{

    double hourlyWage;    // amount per hour
    double wourkingHours; // total number of hours
    double taxRate;       // percentage rate

    // prompt user for wage
    printf("%s", " Enter hourly wage >\n ");
    scanf("%lf", &hourlyWage);

    // check for negative input
    while (hourlyWage < 0)
    {
        // prompt user for a valid input 
        printf("%s", " Enter hourly wage  grater than zero \n ");
        scanf("%lf", &hourlyWage);
    }
    // prompt user for working hours
    printf("%s", " Enter working hours > \n");
    scanf("%lf", &wourkingHours);

    // check for negative input
    while (wourkingHours < 0)
    {
        // prompt user for a valid input 
        printf("%s", " Enter working hours greater than zero > \n");
        scanf("%lf", &wourkingHours);
    }
    // prompt user for working a tax rate
    printf("%s", " Enter working tax rate > \n");
    scanf("%lf", &taxRate);

    // check for negative input
    while (taxRate < 0)
    {
        // prompt user for a valid input 
        printf("%s", " Enter tax rate greater than zero > \n");
        scanf("%lf", &taxRate);
    }

    // calculate salary to be paid
    if (wourkingHours > 40)
    {
    
        puts("hours grater than 40 hours add something\n");
        double overTime = wourkingHours - 40;
        printf("over time is = %lf\n", overTime);
        double wage = hourlyWage * wourkingHours;           // total wage under 40 hours
        double extraSalary = overTime * (hourlyWage * 0.5); // total wage over 40 hours get 1.5 of hourly wage
        double totalSalary = (wage + extraSalary);          // total wage plus extra hours
        double taxShare = (taxRate / 100) * totalSalary;    // total taxes
        double netSalary = totalSalary - taxShare;
        printf("Nettopalkkasi on %.2lf euroa josta veron osuus on %.2lf euroa \n",
               netSalary, taxShare);
    }
    else
    {
        double salarary = hourlyWage * wourkingHours; // total wage

        double taxShare = (taxRate / 100) * salarary;

        double netSalary = salarary - taxShare;

        printf("Nettopalkkasi on %.2lf euroa josta veron osuus on %.2lf euroa \n", netSalary, taxShare);
    }

    return 0;
}