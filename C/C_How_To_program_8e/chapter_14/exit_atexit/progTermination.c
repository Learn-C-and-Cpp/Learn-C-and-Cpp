// program termination with exit and atexit
#include <stdio.h>
#include <stdlib.h>

// prototype
void print(void);

int main(void)
{
    atexit(print); // register function print
    puts("Enter 1 to terminate program with fuction exit"
        "\nEnter 2 to terminate program normaly");
    int answer; // user's menu choice
    scanf("%d", &answer);

    // call exit if answer is 1
    if (answer == 1)
    {
        puts("\nTerminating program with function exit");
        exit(EXIT_SUCCESS);
    }
    puts("\nTerminating program by reaching the end of main");    
    return 0;
}

// display message before termination
void print(void)
{
    puts("Executing function print at program "
    "termination\nProgram termination");
}