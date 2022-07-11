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

int main(void)
{
    // create first node
    Node *head = malloc(sizeof(Node));
    head->data = 45;
    head->link = NULL;

    Node *ptr = head;

    ptr = addNode_at_end(ptr, 98);
    ptr = addNode_at_end(ptr, 3);
    ptr = addNode_at_end(ptr, 67);

    ptr = head; // ptr points to head

    // print data 
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    putchar('\n');

    return 0;
}
// create and return node
Node *addNode_at_end(Node *ptr, int data)
{
    // define pointers
    Node *temp;
    // create node;
    temp = malloc(sizeof(Node));
    // set node data and update link
    temp->data = data;
    temp->link = NULL;
    
    // update ptr
    ptr->link = temp; // |data|ptr->link| = |0x....|
    return temp;
}