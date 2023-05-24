/* c program to take 10 integers and determine the largest */

//
#include <stdio.h>

// function main begins program execution
int main()
{
    int numberOfIntegers = 10; // initilize required number of integers
    int userInput = 0;         // initilize user input
    int counter = 0;           // initilize loop counter
    int largestNumber = 0;     // initilize largest Number

    printf("Enter %d integers separetly\n", numberOfIntegers);
    // count the number of integers from 0-9
    for (counter = 0; counter < numberOfIntegers; counter++)
    {
        // prompt user to enter digits
        scanf("%d", &userInput);

        // check if user input is the largest
        if (userInput > largestNumber)
        {
            // if user input is larger then it is the largest of all numbers
            largestNumber = userInput;
        }
    }
    printf("Suurin syottamasi luku oli %d", largestNumber);

    return 0;
}
