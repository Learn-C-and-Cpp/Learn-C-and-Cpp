/* insert a node at any given position in the linked list, there could be two scenarios
    1. Empty list (Head is NULL)
    2. Invalid position (out of range)

 */

#include <stdio.h>
#include <stdlib.h>

// define struct
struct node
{
    int data;
    struct node* next;
};
typedef struct node Node_t;

//Node_t* head;

// function prototypes
void insert(Node_t** head, int data, int position);
void printList();

int main()
{
    Node_t*  head = NULL; // List is empty
    // insert data
    insert(&head, 2, 1);
    insert(&head, 3, 2);
    insert(&head, 4, 1);
    insert(&head, 5, 2);
    printList(head);

    return 0;
}
void insert(Node_t** head, int data, int position)
{
    // create a node using malloc
    Node_t* temp1 = (Node_t*)malloc(sizeof(Node_t)); //Node_t* temp1 = new Node(); // in C++
    temp1->data = data;
    temp1->next = NULL;
    if (position == 1) // inserting at the beginning
    {
        temp1->next = *head; // case empty list
        *head = temp1; // update head
        return;
    }
    // other cases go to n-1 node
    Node_t* temp2 = *head;
    for (size_t i = 0; i < position - 2; i++)  
    {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}
void printList(Node_t* head)
{
    Node_t* temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");   

}