/* improper use of Heap
"Guess the card position in deck of three"
"Jack Queen King"
if win, reward = 3*bet amount
if lose, looses the amount
player's initial amount €100
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cash = 100; // initial cash
void play(int bet)
{
    char *C = (char*)malloc(10000*sizeof(char));
    C[0] = 'J'; C[1] = 'Q'; C[2] = 'K';

    printf("Shaffling ...\n");

    srand(time(NULL)); // seeding random number generator
    for (size_t i = 0; i < 5; i++)
    {
        int x = rand() % 3; // get three random values
        int y = rand() % 3;

        // swap characters at position x and y
        int temp = C[x];
        C[x] = C[y];
        C[y] = temp;
    }
    // players guess
    int playersGuess;
    printf("What is the position of queen - 1, 2 or 3?");
    scanf("%d", &playersGuess);
    if (C[playersGuess - 1] == 'Q')
    {
        cash += 3 * bet;
        printf("You Win ! Results = %C%C%C Total Cash = %d", C[0], C[1], C[2], cash);
    }
    else
    {
        cash -= bet;
        printf("You lose ! Results = %C%C%C Total Cash = %d", C[0], C[1], C[2], cash);
    }
    // free memory
    free(C);
}

int main(void)
{
    int bet;
    printf("**Welcome to the Virtual Casino**\n");
    printf("Total cash = €%d\n", cash);

    while (cash > 0) // while still have cash
    {
        printf("What is your bet? €");
        scanf("%d", &bet);
        if (bet == 0 || bet > cash)
            break; // stop the game
        play(bet);
        printf("\n******************************\n");
    }

    return 0;
}