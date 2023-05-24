/* card shaffling and dealing
 * suits = 4
 * faces = 13
 * cards = 52
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUITS 4
#define FACES 13
#define CARDS 52

// prototypes
void shuffle(unsigned int cDeck[][FACES]); // shuffling modifies deck

// deal dosen't modify the array
void deal(unsigned int cDeck[][FACES], const char *cFace[], const char *cSuit[]);

int main(void)
{

    srand(time(NULL)); // seed randon-number generator

    // initialize the deck array
    unsigned int deck[SUITS][FACES] = {0};

    // shaffle deck
    shuffle(deck);

    // initialize the suit array
    const char *suit[SUITS] = {"Heart", "Diamond", "Clubs", "Spades"};

    // initialize the face array
    const char *face[FACES] = {"Ace", "Deuce", "Three", "Four", "Five",
                               "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen",
                               "King"};

    deal(deck, face, suit); // deal the deck

    return 0;
}

// shuffle the cards in the deck
void shuffle(unsigned int cDeck[][FACES])
{
    // for each of the cards, choose slot of deck randomly
    for (size_t card = 1; card <= CARDS; ++card)
    {
        size_t row;    // row number
        size_t column; // column number

        // choose new random location untill unoccupied slot found
        do
        {
            row = rand() % SUITS;    // 0-3
            column = rand() % FACES; // 0-12
        } while (cDeck[row][column] != 0);

        // place card number in chosen slot of deck
        cDeck[row][column] = card;
    }
}
// deal cards in deck
void deal(unsigned int cDeck[][FACES], const char *cFace[], const char *cSuit[])
{
    // deal each of the cards
    for (size_t card = 1; card <= CARDS; ++card)
    {
        // loop through rows of cDeck
        for (size_t row = 0; row < SUITS; ++row)
        {
            // loop through coulumns of cDeck for current row
            for (size_t column = 0; column < FACES; ++column)
            {
                // check if slot contaings current card, display card
                if (cDeck[row][column] == card)
                {
                    printf("%5s of %-8s%c", cFace[column], cSuit[row],
                           card % 2 == 0 ? '\n' : '\t'); // 2-column format
                                                         
                }
            }
        }
    }
}