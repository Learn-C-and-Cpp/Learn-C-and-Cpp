/* calculate values entered by user  using do-while structure*/

#include <stdio.h>

int main()
{
    double number = 0.0;
    double sum = 0;
    double avarage = 0.0;

    int counter = 0;

    // prompt user for input
    do
    {
        printf("%s", "Enter real numbers or a negative to quit\n");
        scanf("%lf", &number);

        // check if the number is a non-negative
        if (number >= 0)
        {
            ++counter;
            sum += number;
        }

    } while (number >= 0);
    
    // calculate avarage
    if (counter > 0)
    {
        avarage = sum / counter;
    }
    printf("\n Keskiarvo on: %.2lf\n", avarage);

    return 0;
}