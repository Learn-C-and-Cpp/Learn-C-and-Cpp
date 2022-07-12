/* Optimizing code, O(n)
while (ptr->link != NULL)
{
    ptr = ptr->link;
}
*/
#include <stdio.h>
#include <stdlib.h>

// define struct
struct node
{
    int data;
    struct node *link;
};
typedef struct node Node; // alias

// function prototypes
Node *addNode_at_end(Node *ptr, int data);
void printList(Node *head);

int main(void)
{
    // declare head pointer
    Node *head = NULL;

    // create first node
    head = malloc(sizeof(Node)); // |45|head->link = ptr|
    head->data = 45;
    head->link = NULL;

    Node *ptr = head; // ptr is pointing to the first node of the list 

    ptr = addNode_at_end(ptr, 98);// |45|head->link->link = ptr|
    ptr = addNode_at_end(ptr, 3);
    ptr = addNode_at_end(ptr, 67);

    ptr = head; // update ptr to point back to head

    // print data
    printList(head);
    
    return 0;
}
// create and return node
Node *addNode_at_end(Node *ptr, int data) // time complexity = O(1)
{
    // define pointers
    Node *temp =NULL;
    // create node;
    temp = malloc(sizeof(Node));
    // set node data and update link
    temp->data = data;
    temp->link = NULL;

    // update ptr
    ptr->link = temp; // |data|ptr->link| = |0x....|
    return temp;
}

// print list
void printList(Node *head)
{
    // declare temporary pointer for traversing the list
    Node *temp = head; // heade pointer is the begining of the list
    while (temp != NULL)
    {
        printf("%d - ", temp->data);
        temp = temp->link;
    }
    printf("\n");
    
}