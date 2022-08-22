// adding node at the beginning
#include <stdio.h>
#include <stdlib.h>
// define struct
struct node
{
    int data;
    struct node *link;
};
typedef struct node Node_t;

// function prototype
Node_t *add_at_begining(Node_t *head, int data);
void add_at_begining_byRef(Node_t **head, int data);
void printList(Node_t *head);

int main()
{
    // declare and initialize head pointer
    Node_t *head = NULL;
    Node_t *current = NULL;
    // allocate space for the first node
    head = (Node_t *)malloc(sizeof(Node_t));
    head->data = 45;
    head->link = NULL;

    // create 2nd node
    current = (Node_t *)malloc(sizeof(Node_t));
    current->data = 98;
    current->link = NULL;
    head->link = current;

    // add at the begining
    int data = 3;
    head = add_at_begining(head, data);
    current = head;
    
    // call by reference
    add_at_begining_byRef(&head, data);

    // printing data
    printList(head);

    return 0;
}

// create and add at beginning
Node_t *add_at_begining(Node_t *head, int data)
{
    Node_t *current = (Node_t *)malloc(sizeof(Node_t));
    current->data = 3;
    current->link = NULL;

    current->link = head; // update the link part of current
    head = current;       // update head pointer
    return head;
}
// making chagase without returning the head pointer
void add_at_begining_byRef(Node_t **head, int data)
{
    Node_t *current = (Node_t *)malloc(sizeof(Node_t));
    current->data = 95;
    current->link = NULL;

    current->link = *head; // update the link part of current
    *head = current;       // update head pointer
}

// print lise elements
void printList(Node_t *head)
{
    Node_t *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link; // update ptr to point to the next node in the list
    }
}