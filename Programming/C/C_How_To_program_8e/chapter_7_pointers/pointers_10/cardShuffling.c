
/* 
 ******************************
 * card shaffling and dealing * 
 ****************************** 
Initialize the suit array
Initialize the face array
Initialize the deck array
For each of the 52 cards
    Choose slot of deck randomly
    While slot of deck has been previously chosen
        Choose slot of deck randomly
    place card number in chosen slot of deck
For each of the 52 cards
    For each slot of deck array
        If slot contains desired card number
            Print the face and suit of the card
*/
#include<stdio.h>
#include<stdlib.h> // rand()
#include<time.h> // time

#define SUITS 4
#define FACES 13
#define CARDS 52

// function prototypes
void shuffle(unsigned int wDeck[][FACES]); // shuffling modifies wDeck
void deal(unsigned int wDeck[][FACES], const char *wFace[], const char *wSuit[]); // dealing dosen't modify the arrays
 


// funciton main begins program execution
int main()
{
    // initilize deck array
    unsigned int deck[SUITS][FACES] = {0}; 

    // seed random-number generator
    srand(time(NULL));
    
    // shuffle the deck
    shuffle(deck);
    

    // initilize suit array
    const char *suit[SUITS] = {"Hearts", "Diamonds", "Clubs", "Spades" };

    // initilize face array
    const char *face[FACES] = 
        {"Ace", "Deuce", "Three", "Four",
         "Five", "Six", "Seven", "Eight",
         "Nine", "Ten", "Jack", "Queen", "King"};


    // deal the deck
    deal(deck,face, suit);

    
        
    

    return 0;
}
// shaffle cards in the deck
void shuffle(unsigned int wDeck[][FACES])
{
    // for each of the cards, choose slots of the deck randomly
    for(size_t card = 1; card <= CARDS; ++card)
    {
        size_t row; // row number
        size_t column; // column number

        // choose new random location untill unoccupied slot found
        do
        {
            row = rand() % SUITS;
            column = rand() % FACES;
        }while (wDeck[row][column] != 0);

        // place card number in chosen slot of deck
        wDeck[row][column] = card;
        
    }

}



// deal cards in deck
void deal(unsigned int wDeck[][FACES], const char *wFace[], const char *wSuit[])
{
    // deal each of the cards
    for(size_t card = 1; card <= CARDS; ++card) // go 52 times
    {
        // loop through rows of wDeck
        for(size_t row = 0; row < SUITS; ++row)
        {
            // loop through columns of wDeck for current row
            for(size_t column = 0; column < FACES; ++column)
            {
                // if slot contains current card, display card
                if(wDeck[row][column] == card)
                {
                    printf("%5s of %-8s%c", wFace[column], wSuit[row], card % 2 == 0 ? '\n' : '\t'); // 2-column format
                }

            }
        }
    }

}
