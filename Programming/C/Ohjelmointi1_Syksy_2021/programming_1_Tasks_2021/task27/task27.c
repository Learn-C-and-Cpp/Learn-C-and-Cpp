// c program that takes three integers parameters (hours,minutes,seconds) and print time in seconds

#include <stdio.h>

// function prototypes
int timeCalculator(int hours, int minutes, int seconds);
int calculateTimeDifferenceInSeconde(int timeOne, int timeTwo);
void calculatSecondsToHours(int timeInSeconds);

// function main begins the program execution
int main()
{

    int hours_1, minutes_1, seconds_1 = 0;
    int hours_2, minutes_2, seconds_2 = 0;

    // read time one
    printf("Enter time one hours\n");
    scanf("%d",&hours_1);

    printf("Enter time one minutes\n");
    scanf("%d",&minutes_1);

    printf("Enter time one seconds\n");
    scanf("%d",&seconds_1);
    puts("");

    // Read time two
    printf("Enter time two hours\n");
    scanf("%d",&hours_2);

    printf("Enter time two minutes \n");
    scanf("%d",&minutes_2);

    printf("Enter time two seconds\n");
    scanf("%d",&seconds_2);

    // call time calculator

    int timeOne = timeCalculator(hours_1, minutes_1, seconds_1);
    int timeTwo = timeCalculator(hours_2, minutes_2, seconds_2);

    int timeDifferenceInSec =   calculateTimeDifferenceInSeconde(timeOne, timeTwo);
    puts(""); // new line
    // print output 
    printf("Aikaero on: %d sekuntia\n",timeDifferenceInSec);
    
    // convert to hour,min,sec
    calculatSecondsToHours(timeDifferenceInSec);
    //printf(" Aikaero on: %d sekuntia\n",timeDifferenceInSec);

    //     Aikaero on: #### sekuntia
    // Aika on # tuntia # minuuttia # sekuntia

    return 0;
}
// calculate time
int timeCalculator(int hours, int minutes, int seconds)
{
    int timeInSeconds = 0;

    timeInSeconds = (hours * 60 * 60) + (minutes * 60) + seconds;

    return timeInSeconds;
}
int calculateTimeDifferenceInSeconde(int timeOne, int timeTwo)
{

    return (timeOne - timeTwo);
}
// calculate time int hours
void calculatSecondsToHours(int timeInSeconds)
{
    int hours, minutes,seconds = 0;

    hours = timeInSeconds/3600;

    minutes = timeInSeconds/60;
    
    seconds = timeInSeconds/timeInSeconds;

    printf("Aika on %d tuntia %d minuuttia %d sekuntia\n",hours, minutes, seconds);

}