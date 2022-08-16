// creating the first node of the list
#include <stdio.h>
#include <stdlib.h>

// define struct
struct node
{
    int data;
    struct  node* link;
};
typedef struct node Node_t;

int main()
{
    Node_t *head = NULL;
    Node_t *current = NULL;

    head = (Node_t*)malloc(sizeof(Node_t)); // allocate memory for this node
    head->data = 45; // set data
    head->link = NULL;
    printf("%d ", head->data);
    
    current = (Node_t*)malloc(sizeof(Node_t)); // allocate memory for this node
    current->data = 98; // set data
    current->link = NULL;
    printf("%d ", current->data);


    return 0;
}