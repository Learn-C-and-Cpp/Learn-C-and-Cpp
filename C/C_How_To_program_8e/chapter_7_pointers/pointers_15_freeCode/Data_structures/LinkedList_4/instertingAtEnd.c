// adding a node at the end of the list
#include <stdio.h>
#include <stdlib.h>

// define structure
struct node
{
    int data;
    struct node *link;
};

typedef struct node Node_t;

// prototype
void add_at_end(Node_t *head, int data);
void printList(Node_t *head);

int main()
{
    Node_t *head = NULL;
    printf("Enda data to add\n");
    int data;
    scanf("%d", &data);
    add_at_end(head, data);
    printList(head);

    return 0;
}

void add_at_end(Node_t *head, int data)
{
    Node_t *temp; // store new node
    Node_t* current;
    Node_t *ptr;  // use to travese the list

    ptr = head; // ptr is pointing to head
    temp = (Node_t *)malloc(sizeof(Node_t));
    // add data
    temp->data = data;// initilize data part 
    temp->link = NULL;

    current = (Node_t *)malloc(sizeof(Node_t));
    // add data
    current->data = data;// initilize data part 
    current->link = NULL;

    temp->link = current;
 
    //printf("%d ", temp->data);

    // traverse the list
     while (ptr->link != NULL)
     {
        ptr = ptr->link;
     }
     ptr->link = temp; // update ptr with the new node addres
}

void printList(Node_t *head)
{
}