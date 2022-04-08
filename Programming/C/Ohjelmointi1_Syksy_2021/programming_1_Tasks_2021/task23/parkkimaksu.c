/* c program to calculate customer's parking payments */
#include <stdio.h>

// function prototypes
double calculateParkingPayment(double time);

// function main begins the program execution
int main()
{
    double time_1, time_2, time_3; // read times separetly

    // initilize times counter
    int counter = 0;
    // initilize parking time
    double parkingTime_1, parkingTime_2, parkingTime_3 = 0.0;
    double parkingTime = 0.0;

    // promt user for times
    printf("%s", "Enter customer three parking times \n");
    scanf("%lf", &parkingTime_1);

    // printf("%s", "Enter customer three parking times\n");
    scanf("%lf", &parkingTime_2);

    // printf("%s", "Enter customer three parking times\n");
    scanf("%lf", &parkingTime_3);

    double total_1 = calculateParkingPayment(parkingTime_1);
    double total_2 = calculateParkingPayment(parkingTime_2);
    double total_3 = calculateParkingPayment(parkingTime_3);

    // final total
    double finalTotal = (total_1 + total_2 + total_3);
    // total time
    double totalTime = (parkingTime_1 + parkingTime_2 + parkingTime_3);

    // print out results
    printf("%s%10s%10s\n", "Asiakas", "Tunnit", "Veloitus");

    printf("%7s%10.2lf%10.2lf\n", "1", parkingTime_1, total_1);
    printf("%7s%10.2lf%10.2lf\n", "2", parkingTime_2, total_2);
    printf("%7s%10.2lf%10.2lf\n", "3", parkingTime_3, total_3);
    printf("%7s%10.2lf%10.2lf\n", "YHTEENSA", totalTime, finalTotal);

    return 0;
}

// calculate customer parking cost
double calculateParkingPayment(double time)
{
    double maximumCost = 10.00; // define maximum charge

    double parkingCost = 0.0; // total parking cost
    // initialize hourly rate
    double hourlyRate = 2.0 / 3.0;

    // initialize over parking rate
    double overParkingRate = 0.5;

    double extraTime = 0.0; // parking time over normal charges

    // check if time is greater than 3 hours and calculate cost
    if (time >= 3)
    {
        extraTime = (time - 3); // calculater extra parking time

        parkingCost = ((time * hourlyRate) + (extraTime * 0.5));
        // check for maximum charge
        if (parkingCost > maximumCost)
        {
            return 0;
        }

        // parkingCost = time * hourlyRate;
    }
    else
    {
        parkingCost = time * hourlyRate;
        if (parkingCost > maximumCost)
        {
            return 0;
        }
    }

    return parkingCost;
}
