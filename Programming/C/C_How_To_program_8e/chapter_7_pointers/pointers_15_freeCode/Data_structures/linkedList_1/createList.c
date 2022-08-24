// Linked list inserting a node at the beginning
#include <stdio.h>
#include <stdlib.h>

// defing a structure
struct node
{
    int data; // linked list of integers
    struct node *next; // 
};
typedef struct node Node_t;

// function prototypes
void intsert(Node_t **ptrToHead, int data);
void printData(Node_t *head);

int main()
{
    Node_t *head = NULL; // the list is empty
    // prompt user for numbers
    printf("How many numbers to insert?\n");
    int count;
    int data;

    scanf("%d", &count);
    for (size_t i = 0; i < count; i++)
    {
        printf("Enter the numbers\n");
        scanf("%d", &data);
        intsert(&head, data);
        printData(head);
    }

    return 0;
}
// insert at the begining
void intsert(Node_t **head, int data)
{
    // create a node
    Node_t *temp = (Node_t *)malloc(sizeof(Node_t));
    temp->data = data;
    temp->next = NULL;
    if (*head != NULL)
    {
        temp->next = *head;
    }
    // update head
    *head = temp;
}
// print data
void printData(Node_t *head)
{
    printf("List is ");
    while (head != NULL)
    {
        printf(" %d", head->data);
        head = head->next;
    }
    printf("\n");
}