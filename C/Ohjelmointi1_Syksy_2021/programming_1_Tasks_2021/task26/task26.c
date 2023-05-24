/* c program to calculate potecy of a number */
#include <stdio.h>

// function prototypes
int increaseIntegerPotency(int number, int power);

// function main begins the program execution
int main()
{

    int number, power = 0;
    printf("\nEnter a numbre: ");
    scanf("%d", &number);

    printf("\nEnter power: ");
    scanf("%d", &power);
    int result = increaseIntegerPotency(number, power);

    printf("\nLuku %d korotettuna potenssiin %d on %d ", number, power, result);

    return 0;
}

int increaseIntegerPotency(int number, int power)
{
    int result = 1; // result
    for (int i = 0; i < power; i++)
    {
        result = result * number;
    }

    return result;
}