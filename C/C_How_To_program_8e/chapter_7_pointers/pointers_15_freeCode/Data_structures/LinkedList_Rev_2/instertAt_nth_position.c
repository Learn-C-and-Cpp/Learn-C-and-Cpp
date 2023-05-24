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
//Node_t *insert(Node_t *head, int data, int position);
void printList();

int main()
{
    //Node_t *head;
    head = NULL; // initialy the list is empty
    // you can promt user for data input

    insert( 2, 1); // List: 2
    insert( 3, 2); // List: 2,3
     insert( 4, 1); // List: 4,2,3
   insert( 5, 2); // List: 4,5,2,3
    printList();

    return 0;
   }
// // insert
// Node_t *insert(Node_t *head, int data, int position)
// {
//     Node_t *temp1 = (Node_t *)malloc(sizeof(Node_t));
//     temp1->data = data; // set data field
//     temp1->next = NULL; // set link
//     if (position == 1) // incase of first node
//     {
//         temp1 = temp1->next;
//         head = temp1;
//         return;
//     }

//     // other cases
//     Node_t* temp2 = head;
//     for (int i = 0; i < position - 2; i++)
//     {
//         temp2 = temp2->next;
//     }
//     temp2->next = temp1;
//     return temp1;    

// }
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
    Node_t *temp2 = head; // store address of head
    for (int i = 0; i < position - 2; i++) // travers the list
    {
        temp2 = temp2->next; // keep going to the next node
    }
    temp1->next = temp2->next; // update link parts of the newly created node
    temp2->next = temp1;// update link parts of the previous node
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
