// Inserting and deleting nodes in a list
#include <stdio.h>
#include <stdlib.h>

// self referential structure
struct listNode
{
    char data;
    struct listNode *nextPtr;
};
typedef struct listNode ListNode;

// prototypes
int instructions();
void insert(ListNode** sPtr, char value);
int main(void)
{
    ListNode *sartPtr = NULL; // initially there are no nodes
    char character;        // value from user

    unsigned int choice = instructions(); // display menu

    // loop while user do not choose 3
    while (choice != 3)
    {   
        switch (choice)
        {
        case 1:
            printf("%s", "Enter a character: ");
            scanf("\n%c", &character);
            insert(&sartPtr, character); // insert item in list


            break;
          

        default:
            break;
        }
    }

    return 0;
}

// isert a new item in the list in sorted order
void insert(ListNode** sPtr, char value)
{
    // create node
    ListNode* newPtr = malloc(sizeof(ListNode));

    if (newPtr != NULL) // if space available 
    {
        newPtr->data = value; // place value in node 
        newPtr->nextPtr = NULL; // node dose not link to another nod

        ListNode* previousPtr = NULL;
        ListNode* currentPtr = *sPtr ;

        // loop to find the correct location in the list
        while (currentPtr != NULL)
        {
            /* code */
        }
        
    }
}

// Display program instructions to user
int instructions()
{
    printf("Enter your choice:\n"
           "   1 to insert an element into the list.\n"
           "   2 to delete an element from the list.\n"
           "   3 to end.\n"
           "? ");

    unsigned int choice; // value from user
    scanf("%d", &choice);
    return choice;
}