// Using structure member(.) and pointer(->) operators
#include <stdio.h>

// card structure definition
struct card
{
    char *face; // define pointer face
    char *suit; // define pointer suit
} /*aCard, bCard*/;

int main(void)
{
    struct card aCard, bCard; // define struct variables(aCard, bCard)

    // place strings into the card
    aCard.face = "Ace";
    aCard.suit = "Spades";
    bCard.face = "King";
    bCard.suit = "Diamonds";

    struct card *cardPtr = &aCard; // asign address of aCard to cardPtr
    struct card *cardPtr2 = &bCard;

    printf("%s%s%s\n%s%s%s\n%s%s%s\n",
           aCard.face, " of ", aCard.suit,
           cardPtr->face, " of ", cardPtr->suit,
           (*cardPtr).face, " of ", (*cardPtr).suit);

    printf("\n%s%s%s\n%s%s%s\n%s%s%s\n",
           bCard.face, " of ", bCard.suit,              // using(.)
           cardPtr2->face, " of ", cardPtr2->suit,      // using (->)
           (*cardPtr2).face, " of ", (*cardPtr2).suit); // using * and .

    return 0;
}
