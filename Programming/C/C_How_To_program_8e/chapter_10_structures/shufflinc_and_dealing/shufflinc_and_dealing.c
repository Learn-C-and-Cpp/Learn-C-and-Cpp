// card shuffling and dealing using structures
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CARDS 52
#define FACES 13

// card structure definition
struct card // type struct card
{
    const char *face; // define pointer face
    const char *suit; // define pointer suit
};

typedef struct card Card; // alias name of struct card is now Card 

// prototypes
void fillDeck(Card *const deck, const char *face[], const char *suit[]); // deck is a constant pointer to Card type
void shuffleDeck(Card *const deck);
void deal(const Card *const deck);

int main(void)
{
    Card deck[CARDS]; // define an array of 52 Cards

    // initialize  member *face /  array or pointere
    const char *face[] = {"Ace", "Deuce", "Three", "Four", "Five",
                          "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen",
                          "King"};

    // initialize member *suit / array or pointere
    const char *suit[] = {"Heart", "Diamond", "Clubs", "Spades"};

    srand(time(NULL)); // seed frandom-number generator

    fillDeck(deck, face, suit); // load the deck with Cards

    shuffleDeck(deck); // put cards in a random order
    deal(deck); // deal 52 cards


    return 0;
}
void fillDeck(Card *const deck, const char *face[], const char *suit[])
{
    // loop thruoght deck
    for (size_t i = 0; i < CARDS; ++i)
    {
        deck[i].face = face[i % FACES];

        deck[i].suit = suit[i / FACES];
    }
}

// shuffle cards
void shuffleDeck(Card *const deck)
{
    // loop through deck randomly swapping cards
    for (size_t i = 0; i < CARDS; ++i)
    {
        size_t j = rand() % CARDS;

        Card temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}
// deal cards
void deal(const Card *const deck)
{
    // loop through deck
    for (size_t i = 0; i < CARDS; ++i)
    {
        printf("%5s of %-8s%s", deck[i].face, deck[i].suit, (i + 1) % 4 ? " " : "\n");
    }
}