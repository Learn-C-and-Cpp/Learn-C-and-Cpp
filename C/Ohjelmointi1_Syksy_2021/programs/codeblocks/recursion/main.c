#include <stdio.h>
#include <stdlib.h>

// Recursive factorial function
unsigned long long int factorial(unsigned int number );

int main()
{
    // durint eact itaration calculate foctorial(i) and display results

    for(unsigned int counter = 0; counter <= 21; ++counter)
    {
        printf("%u! = %llu\n", counter, factorial(counter) );

    }

    return 0;
}

unsigned long long int factorial(unsigned int number )
{
    //base case
    if(number <= 1)
    {
        return 1;
    }
    else
    {
        return(number * factorial(number - 1));
    }

}

