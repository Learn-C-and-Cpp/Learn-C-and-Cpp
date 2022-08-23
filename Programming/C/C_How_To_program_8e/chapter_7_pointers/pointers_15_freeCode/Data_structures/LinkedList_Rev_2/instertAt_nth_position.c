// inseting a node at nth position
#include <stdio.h>
#include <stdlib.h>

// define struct
struct node
{
    int data;
    struct node* next;
};
typedef struct node Node_t;
Node_t *head;

// prototypes
void insert(int data, int pos);
void printList();

int main()
{
    head = NULL; // list is empty

    insert(2, 1);
    insert(3, 2);
    insert(4, 1);
    insert(5, 2);
    printList();

    return 0;
}
// insert 
void insert(int data, int position)
{
    // create a node
    Node_t *temp1 = (Node_t *)malloc(sizeof(Node_t));
    temp1->data = data;
    temp1->next = NULL;
    if (position == 1) // when empty or 1st node
    {
        temp1->next = head; // existing head
        head = temp1; // head equals to the new node
        return;
    }
    // List is not empty or 1st
    Node_t *temp2 = head;
    for (int i = 0; i < position - 2; i++)
    {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}
// print
void printList()
{
    Node_t *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
