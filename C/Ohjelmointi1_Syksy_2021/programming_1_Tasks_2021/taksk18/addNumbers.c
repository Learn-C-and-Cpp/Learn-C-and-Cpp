/* calculate values entered by user  using while structure*/

#include <stdio.h>

int main()
{
    double number = 0.0;
    double sum = 0;
    double avarage = 0.0;

    int counter = 0;

    // prompt user for input
    while (number >= 0)
    {
        printf("\n Enter real numbers or a negative to quit\n");
        scanf("%lf", &number);
        if (number >= 0)
        {
            ++counter;
            sum = sum + number;
        }
       // printf("%lf",sum);
    }

    // calculate avarage
    if (counter > 0)
    {
        avarage = sum / counter;
    }
    printf("\n Keskiarvo on: %.2lf\n", avarage);

    return 0;
}