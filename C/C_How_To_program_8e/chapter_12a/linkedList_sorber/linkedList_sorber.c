// creating a linked list
#include <stdio.h>
#include <stdlib.h>

// create a node
struct listNode
{
    int value;
    struct listNode *next; // link
};
typedef struct listNode ListNode;

// prototype
void printList(ListNode *head);
ListNode *create_new_node(int value);

int main(void)
{
    // make 3 nodes
    ListNode *ptr;
    ListNode *head = NULL;

    for (int i = 0; i < 25; i++)
    {
        ptr = create_new_node(i);
        ptr->next = head;
        head = ptr;
    }

    // delete node
    // head = head->next;

    printList(head);

    return 0;
}
// printout the link list passing head i.e., where to start
void printList(ListNode *head)
{
    // set a temporary pointer
    ListNode *tempPtr = head;
    while (tempPtr != NULL)
    {
        // print value that tempPtr is pointing to
        printf("%d - ", tempPtr->value);
        tempPtr = tempPtr->next; // move pointer to the next node in the list
    }
    printf("\n");
}

// create nodes
ListNode *create_new_node(int value)
{
    // new node
    ListNode *newNode = malloc(sizeof(ListNode));
    newNode->value = value;
    newNode->next = NULL;
    return newNode; // return pointer to new node
}
