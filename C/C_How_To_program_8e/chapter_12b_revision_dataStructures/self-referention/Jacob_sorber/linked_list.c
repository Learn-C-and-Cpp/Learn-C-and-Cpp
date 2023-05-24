// linked list practice
#include <stdio.h>
#include <stdlib.h>

// define a structure to represent nodes
struct node
{
    int value;
    struct node *nextPtr; // pointing to the next node
};
typedef struct node Node_t; // node alias

// function prototypes
void printList(Node_t *head); // Print nodes 
Node_t *create_new_node(int value); // create new nodes
Node_t *insert_at_head(Node_t *head, Node_t *node_to_add); // add node at head


int main(void)
{
    // make struct into list - make 3 nodes

    Node_t *head = NULL; // point to start
    Node_t *tmp;

    // set values
     for (int i = 0; i < 25; i++)
    {
        tmp = create_new_node(i);
        head = insert_at_head(head, tmp); // set head to new pointer returned by function



        // tmp->nextPtr = head;
        // head = tmp;
    }

    // tmp = create_new_node(32);
    // head = tmp;
    // tmp = create_new_node(8);
    // tmp->nextPtr = head;
    // head = tmp;
    // tmp = create_new_node(34);
    // tmp->nextPtr = head;
    // head = tmp;

    printList(head);

    return 0;
}

// print list head tels where to start
void printList(Node_t *head)
{
    // define head pointer to start at head
    Node_t *temp = head;
    if (temp == NULL)
    {
        puts("Empty list! ");
    }

    // traverse the list
    while (temp != NULL) // temp is not NULL yet
    {
        printf("%d - ", temp->value); // print out value temp is pointing
        temp = temp->nextPtr;         // move tem to point to the next node in the list
    }
    printf("\n");
}

// create new nodes
Node_t *create_new_node(int value)
{
    // allocate a new node using malloc
    Node_t *newNode = (Node_t*)malloc(sizeof(Node_t));
    newNode->value = value;
    newNode->nextPtr = NULL;
    return newNode;
}

// add node at head( pass head pointer and a pointer to the new node)
Node_t *insert_at_head(Node_t *head, Node_t *new_node)
{
    new_node->nextPtr = head; // new node pointer point to head |val_2|newNode->head|->|vall_1|NULL|
    return new_node; // will be new head pointer 
}