// Delete a node at nth position
#include <stdio.h>
#include <stdlib.h>

// define a structure
struct node
{
    int data;
    struct node *next;
};
typedef struct node Node_t; // node alia

Node_t *head;

// protypes
void insert(int data); // insert data at the end of the list
void printList(); // print elements of the list
void deleteNode(int position); // delete a node at given position

int main()
{
    head = NULL; // empty list

    insert(2);
    insert(4);
    insert(6);
    insert(5);
    printList(); 

    int position;
    printf("Enter a position\n");
    scanf("%d", &position);
    deleteNode(position);
    printList();

    return 0;
}
void insert(int data)
{
    Node_t *temp = (Node_t *)malloc(sizeof(Node_t));
    temp->data = data;
    temp->next = NULL;
    if(head != NULL)
    {
        
    }
}
void printList(){}
void deleteNode(int position){} 