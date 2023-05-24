/* Simulating the game of craps.
 * requreiments functinon rollDice to run rand() to generate values 0 - 6
 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h> // prototye for fucntion time

//enumaration constants reprsent game status
enum Status // use enum to greate flags
{
	CONTINUE,
	WON,
	LOST
};
// function prototype
int rollDice(void);


int main()
{
	//randomize random number generator using current time
	srand(time(NULL)); // seed
	
	int myPoint; // player makes this point to win
	enum Status gameStatus; // can contain CONTINUE, WON or LOST

	int sum = rollDice(); // first roll of the dice (example 4 + 5 = 9) pint = 9 
	
	// determine game status bassed on sum on dice 
	switch(sum)
	{
		// win on first roll
		case 7:// 7 is a winner
		case 11: // is a winner
			gameStatus = WON;
			break;
		//lose on first roll
		case 2: // 2 is a loser
		case 3: // 3 is a loser
		case 12: // 12 is a loser
			gameStatus = LOST;
			break;
		// remember point
		default:
			gameStatus = CONTINUE; // player should keep rolling
			myPoint = sum; // remember the point if sum = 4,5,6,8,9,10  = point then roll again
			printf("Point is %d\n", myPoint);

			break; //  break is optinal

	}

	
	//while on  point the player will continue rolling
	// while game not complete
	while(CONTINUE == gameStatus) // player should keep rolling 
	{
		sum = rollDice(); // roll dice again

		// determine game status
		if(sum == myPoint)
		{
			gameStatus = WON;
		} 
		else if( 7 == sum) // lose by rolling 7
			{
				gameStatus = LOST;

			}
	} 

	// display won or lost message
	if(WON == gameStatus)// did player win?
	{
		puts("Player wins");
		
	}
	else // player lost
	{
		puts("Player loses");
	}
	
	// end 
		

	return 0;
}// end main


// roll dice, calculate sum and display results
int rollDice(void)
{
	int die1 = ( 1 + rand() % 6 ); // pick random die1 value 0 - 6
	int die2 = ( 1 + rand() % 6 ); // pick random die2 value 0 - 6
	
	// display results of this roll
	printf("Player rolled %d + %d = %d\n", die1, die2, die1 + die2);

	return die1 + die2; // return sum of dice
}
