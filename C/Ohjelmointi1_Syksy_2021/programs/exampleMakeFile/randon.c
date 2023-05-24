// A program to generate random numbers using srand()
#include<stdio.h>
#include<stdlib.h> // for rand(), srand()
#include<time.h> // for time()


// function main to begin the program execution
int main()
{
	int randomNumber;
	int lower = 0, upper = 6;

	// 1. generate random number -rand() = 0 - RAND_MAX
	// 2. provied seed - use srand()  
	// 3. get dfferend random numbers
	

	
	// seed 
	srand(time(NULL)); // time since 1970 in sec

	
	//randomNumber = rand() % 50;
	//printf("%d\n", randomNumber);
	
	//printf("Random value on [0%d]: %d\n", RAND_MAX, randomNumber);

	//printf("n mod 6 = %d", 2147483647 % 6);
	
	// between lower and upperlimit
	
	for(unsigned int count = 1; count <= 20; ++count)
	{
		randomNumber = (rand() %(upper - lower + 1)) + lower;
		printf("%10d", randomNumber);

		if(count % 5 == 0)
		{
			puts("");
		}
		
	}

	

	return 0;
}
