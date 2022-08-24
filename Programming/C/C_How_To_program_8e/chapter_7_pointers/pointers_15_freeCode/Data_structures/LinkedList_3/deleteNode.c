// make correction

// Delete a node at nth position  
#include <stdio.h>
#include <stdlib.h>

// define a structure
struct node
{
    int data;
    struct node *next; // pointer to node
};
typedef struct node Node_t; // node alia

// protypes
Node_t *insert(Node_t *head, int data);      // insert data at the end of the list
void printList(Node_t *head);                // print elements of the list
void deleteNode(Node_t *head, int position); // delete a node at given position

int main()
{
    Node_t *head = NULL; // empty list 

    // instert four integers
    head = insert(head, 2);
    head = insert(head, 4);
    head = insert(head, 6);
    head = insert(head, 5);
    printList(head); // print

    int position;
    printf("Enter a position\n");
    scanf("%d", &position);
    deleteNode(head, position);
    printList(head);

    return 0;
}
Node_t *insert(Node_t *head, int data)
{
    Node_t *temp = (Node_t *)malloc(sizeof(Node_t));
    temp->data = data;
    temp->next = NULL;

    if (head != NULL)
    {
        head = temp->next;
    }
    head = temp;
    return head;
}
void printList(Node_t *head)
{
    Node_t *temp = head;
    while (temp != NULL)
    {
        printf(" %d", temp->data);
        temp = temp->next;
    }
}
void deleteNode(Node_t *head, int position)
{
    Node_t *temp1 = head;
    // when deleting the head node
    if (position == 1)
    {
        head = temp1->next; // head now points the secod node
        free(temp1);
        return;
    }

    for (size_t i = 0; i < position - 2; i++)
    {
        temp1 = temp1->next;
        // temp1 points to (n-1) Node
        Node_t *temp2 = temp1->next; // nth node
        temp1->next = temp2->next;   // (n+1)th node
        free(temp2);
    }
}