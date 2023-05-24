/* c program  which calculates the length of the hypotenuse of a right triangle */
#include <stdio.h>
#include <math.h>

double claculateHypetenus(double, double);

int main()
{

    double base = 0.0;
    double height = 0.0;
    double hypotenuse = 0.0;

    printf("\nEnter height: ");
    scanf("%lf", &height);

    printf("\nEnter base: ");
    scanf("%lf", &base);

    hypotenuse = claculateHypetenus(height, base);
    printf("hypo %lf", hypotenuse);

    return 0;
}

double claculateHypetenus(double heigth, double base)
{
    double hypotenuse = 0.0;
    double squreOfHeight = 0.0;
    double squreOfbase = 0.0;
    double squareSum = 0.0; // sum of both sides squares
    double sqroot = 1;
    // h**2 + b**2 = y2
    squreOfHeight = (heigth * heigth);
    squreOfbase = (base * base);

    squareSum = (squreOfHeight + squreOfbase);

    // hypotenuse = sqrt(squareSum);
    //  find squroot
    int counter = 0;
    while (1)
    {
        counter++;
        sqroot = (squareSum / sqroot + sqroot) / 2;
        if (counter == squareSum + 1)
        {
            break;
        }
        hypotenuse = sqroot;
    }

    return hypotenuse;
}
