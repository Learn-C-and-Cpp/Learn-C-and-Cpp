// using bit fields to represent cards in a struct
#include<stdio.h>

#define CARDS 52

// bitCars structure definition  with bit fields
struct bitCard
{
    unsigned int face : 4; // 4 bits; 0-15
    unsigned int suit : 2; // 2 bits; 0-3
    unsigned int color : 1; // 1 bit; 0-1
};

typedef struct bitCard Card;  // new type name for struct bitCard

// prototype
void  fillDeck(Card * const deck ); // takes constant pointer to 52 cards

int main(void)
{
    // create an array of 52 cards
    Card deck[52];

    fillDeck(deck);



    return 0;
}