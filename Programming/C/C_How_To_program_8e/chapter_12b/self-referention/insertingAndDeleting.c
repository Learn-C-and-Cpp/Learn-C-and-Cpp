// Inserting and deleting nodes in list
#include <stdio.h>
#include <stdlib.h>

// self-referential structure
struct listNode
{
    char data; // each list contain a character
    struct listNode *nextPtr; // pointer to the next node
};

typedef struct listNode ListNode; // listNode alias
//typedef ListNode *ListNodePtr; // alias to ListNode*

// function prototyes
void instert(ListNode *sPtr, char value);
void instuctions(void);

int main(void)
{
    // initialy there are no nodes
    ListNode *startPtr = NULL;
    char item; // char entered by user
    
    // display menu
    instuctions();
    printf("%s", "? ");

    // get user's choice
    unsigned int choice;
    scanf("%u", &choice);

    // loop while the user choice is not 3
    while (choice != 3)
    {
        switch (choice)
        {
        case 1:
            printf("Enter a character: ");
            scanf("\n%c", &item);
            // insert item in list
            instert(&startPtr, item);
            break;
        case 2:
            break;       

        default:
            puts("Invalid choice.\n");
            instuctions();
            break;
        }
    }
    
    



    return 0;
}

// display program instructions to user
void instuctions(void)
{
    puts("Enter your choice:\n"
           " 1. To instert an element into the list.\n"
           " 2. To delete an element from the list.\n"
           " 3. To end.");
}

// insert a new value into the list in sorted order
void instert(ListNode *sPtr, char value)
{
    // Create node
    ListNode *newPtr = malloc(sizeof(ListNode));

    //when using malloc test for a NULL pointer returned value(if space available)
    if (newPtr != NULL)
    {
        newPtr->data = value; // place value in node
        newPtr->nextPtr = NULL; // node dose not link to another node

        ListNode* previousPtr = NULL;
        ListNode* currentPtr = *sPtr;
    }
}