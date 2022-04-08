/* c program  which calculates the length of the hypotenuse of a right triangle */
#include <stdio.h>
#include <math.h>

double claculateHypetenus(double, double);

int main() {

    double base = 0.0;
    double height = 0.0;
    double hypotenuse = 0.0;

    printf("\nEnter height: ");
    scanf("%lf", &height);

    printf("\nEnter base: ");
    scanf("%lf", &base);

    claculateHypetenus(height, base);

    return 0;
}

double claculateHypetenus(double heigth, double base)
{
    double hypotenuse = 0.0;
    double squreOfHeight = 0.0;
    double squreOfbase = 0.0;
    double squareSum = 0.0; // sum of both sides squares
    // h**2 + b**2 = y2
    squreOfHeight = (heigth * heigth);
    squreOfbase = (base * base);

    squareSum =(squreOfHeight + squreOfbase);



    hypotenuse = sqrt(squareSum);

    return hypotenuse;

}
