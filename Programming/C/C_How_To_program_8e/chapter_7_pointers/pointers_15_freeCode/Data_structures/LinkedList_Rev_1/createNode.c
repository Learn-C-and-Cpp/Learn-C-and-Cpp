// Linked list inserting a node at the beginning
#include <stdio.h>
#include <stdlib.h>

    // defing a structure
    struct node
{
    int data;
    struct node *next;
};
typedef struct node Node_t;


// funtction prototypes
void insert(Node_t **head, int data);
void printList(Node_t* head);

int main()
{
    Node_t *head = NULL; // empty list
    printf("How many numbers\n");
    int n, data;
    scanf("%d", &n);
    // take user intpu
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number: ");
        scanf("%d", &data);

        insert(&head, data);
        printList(head);
    }

    return 0;
}
// insert data
void insert(Node_t **head, int data)
{
    // creat a node 1.list is empty, 2.is not empty
    Node_t *temp = (Node_t *)malloc(sizeof(Node_t));
    temp->data = data;
    //temp->next = NULL; // used only when list is empty
    temp->next = *head; // if head is NULL then the list is empty
    *head = temp; // head has been modified
     
    // if(head != NULL)
    // {
    //     temp->next = head;
    // }
}
// print list
void printList(Node_t* head)
{
    //Node_t *temp = head;// head is not modified
    printf("List is ");
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next; // go to the next node
    }
    printf("\n");
}
