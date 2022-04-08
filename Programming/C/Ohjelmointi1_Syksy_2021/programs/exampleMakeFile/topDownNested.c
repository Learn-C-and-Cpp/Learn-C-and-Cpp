
/* Top-down stepwise nested control statements
 * Analisis of examination results
 */

#include<stdio.h>

// function main begins program execution
int main()
{
	// declare and initilize variable
	unsigned int passes = 0; // number of passes
	unsigned int failures = 0; //number of failures
	unsigned int student = 1; //number of student counter
	int result; // one exam result

	// puts("Input an exam result"); // a 1
	// scanf("%d", &result);

	// process 10 students using counter controlled loop
	while( student <= 10 )
	{
		// prompt user for an input and obtain value from user
		printf( "%s", "Enter result(1 = pass, 2 = fail):" );
		scanf( "%d", &result );

		/*count passed and failures
		 * if result = 1 increment passes
		 */
		if(result == 1)
		{
			++passes;
		}// end if
		else // otherwise increment failures
		{
			++failures;
		}// end else

		++student; // increment student counter
	}// end loop
	
	//print summary of exam result 
	printf("Passed = %u\n", passes);
	printf("Failed = %u\n", failures);
	
	//if more than eight students passed print Bonus to instructor
	if(passes > 8)
	{
		puts("Bonus to instructor!");
	}// end if
	

	return 0;
}// end function main

