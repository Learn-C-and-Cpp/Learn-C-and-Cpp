#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    // initialization phase
    char val[2];
    char *vPtr;

    unsigned int counter = 0u;
    int total = 0;
    int grade = 0;
    float average = 0;

    // processing phase
    printf("%s", "Enter grade, -1 to end: "); // prompt for input
    scanf("%d", &grade);                      // read grade

    // loop while sentinel value not yet read from user
    while (grade != -1)
    {
        total += grade; // add grade total
        counter++;      // increment counter

        // get the next grade from user
        printf("%s", "Enter grade, -1 to end: "); // prompt for input
        scanf("%d", &grade);                      // read grade

    } // end while
      // continue from here
    // termination phase
    // if user entered the lats grade
    if (counter != 0u)
    {
        // calculate average of all grades entered
        average = (float)total / counter; // calculate average
        printf("%.2f\n", average);
        printf("%d\n", total);
    }    // end if
    else // if no grade were entered
    {
        printf("%s", "No grades were entered ");
    } // end else

    return 0;
} // end main
