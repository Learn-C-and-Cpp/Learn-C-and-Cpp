// using signal handling
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <time.h>

// prototype
void signalHandling(int signalValue);

int main(void)
{
    // register signal handler
    signal(SIGINT, signalHandling);
    srand(time(NULL));

    // output numbers 1 - 100
    for (int i = 1; i <= 100; ++i)
    {
        int x = 1 + rand() % 50; // generate random number to raise SIGINT

        // raise SIGINT when x is 25
        if (x == 25)
        {
            raise(SIGINT);
        }

        printf("%4d", i);

        // output \n when i is a multuple of 10
        if (i % 10 == 0)
        {
            printf("%d", "\n");
        }
    }

    return 0;
}

// handles signal
void signalHandling(int signalValue)
{
    printf("%s%d%s\n%s",
           "\nInterrupt signal (", signalValue, ") received.",
           "Do you wish to continue (1 = yes or 2 = no)? ");

    int response; // user's response to signal (1 or 2)
    scanf("%d", &response);

    // check for invalid responses
    while (response != 1 && response != 2)
    {
        printf("%s", "(1 = yes or 2 = no)? ");
        scanf("%d", &response);
    }

    // determine whether it's true to exit
    if (response == 1)
    {
        // register signal handler for next SIGINT
        signal(SIGINT, signalHandling);
    }
    else
    {
        exit(EXIT_SUCCESS);
    }
}
