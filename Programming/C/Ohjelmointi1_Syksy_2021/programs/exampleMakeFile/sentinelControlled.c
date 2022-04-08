
//Sentinel-controlled Iteration 
#include <stdio.h>

int main()
{
     unsigned int counter;
     int grade;
     int total;
     
     float average;
     
     //intitilization phase
     total = 0;
     counter = 0;

     // processing phase
     printf("%s", "Enter grade, -1 to end :\n");
     scanf("%d",&grade);

     // loop while sentinel value is not yet read
     while(grade != -1)
     {
     	total = total + grade; // add grade total
	counter = counter + 1; // increment counter
	
	// get next grade
	printf("%s", "Enter grade, -1 to end :\n");
	scanf("%d",&grade);
     }
     
 	// constnue
    	// termination phase
	// if user enters atlest one grade
	if(counter != 0)
	{
	// calculate average of all grades
		average = (float)total / counter; // avoid trancation
		// display
		printf("Class average is %.2f\n", average);
	}//endif
	else
	{
		puts("No grades were enterd");
	}//end else
	    
    return 0;
}//end function main

