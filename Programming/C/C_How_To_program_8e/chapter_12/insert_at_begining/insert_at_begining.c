// linked list to instert a node at the begining
#include<stdio.h>
#include<stdlib.h>

// create structure node
struct node
{
    int data;
    struct node *link;
};
typedef struct node ListNode;

// prototypes
ListNode *insert_begining(ListNode *head, int data);

int main(void)
{
    // create node n1 and n2
    ListNode *head, *ptr;

    head = malloc(sizeof(ListNode));
    head->data = 45;
    head->link = NULL;

    ptr = malloc(sizeof(ListNode));
    ptr->data = 98;
    ptr->link = NULL;

    // update head
    head->link = ptr;// head and ptr points to the same location

    // create data for node n3
    int data = 3;
    // pass arguments to function
    head = insert_begining(head, data); // returns a pointer to new node

    // update head
    ptr = head;

    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}

// insert node at the begining 
ListNode *insert_begining(ListNode *head, int data)
{
    // create a new node
    ListNode *ptr = malloc(sizeof(ListNode));
    ptr->data = data;
    ptr->link = NULL;

    // update ptr link
    ptr->link = head;
    //update head pointer
    head = ptr;

    return head;
}