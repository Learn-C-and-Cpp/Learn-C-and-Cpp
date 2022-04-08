// c program to analyze exam results
#include <stdio.h>

// function main begins program execution
int main()
{
    // initialze variables in definition
    unsigned int passes = 0;   // number of passes
    unsigned int failures = 0; // number of failures
    unsigned int student = 1;  // student counter
    int result;                // one exam results

    // process 10 students using counter-controlled loop
    while (student <= 10)
    {
        // prompt user for input and obtain value frome user
        printf("%s", "Enter results (1=pass, 2=fail): ");
        scanf("%d", &result);

        // if result 1, increment passes
        if (result == 1)
        {
            passes++;
        } // end if
        else
        {
            failures++;
        } // end else

        student++;

    } // end while

    // termination phase; display number of passes and failures
    printf("Passed %u\n", passes);
    printf("Failed %u\n", failures);

    // if more than eight student passed, print "Bonus to instructor!"
    if (passes > 8)
    {
        puts("Bonus to instructor!");
    } // end if

    return 0;
} // end function main
