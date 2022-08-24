// inseting a node at nth position
#include <stdio.h>
#include <stdlib.h>

// define struct
struct node
{
    int data;
    struct node *next;
};
typedef struct node Node_t;
Node_t *head;

// prototypes
void insert(int data, int pos);
void printList();

int main()
{
    head = NULL; // initialy the list is empty
    // you can promt user for data input

    insert(2, 1); // List: 2
    insert(3, 2); // List: 2,3
    insert(4, 1); // List: 4,2,3
    insert(5, 2); // List: 4,5,2,3
    printList();

    return 0;
}
// insert
void insert(int data, int position)
{
    // create a node
    // Node_t temp1 = new Node_t(); // C++
    Node_t *temp1 = (Node_t *)malloc(sizeof(Node_t));
    temp1->data = data; // set data field
    temp1->next = NULL; // set link
    if (position == 1)  // when empty or iserting at 1st position
    {
        temp1->next = head; // existing head
        head = temp1;       // head equals to the new node
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
