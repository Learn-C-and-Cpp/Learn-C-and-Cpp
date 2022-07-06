// create 3 nodes and link them together

#include<stdio.h>
#include<stdlib.h>

// create a node; self-referential structure 
struct node
{
    int data; // data part
    struct node *link; // link part
};
 typedef struct node Node; // typedef(create own type) from existing  to a new_data_type;
 typedef Node* NodePtr; // Node*  pointer of type node

int main(void)
{
    NodePtr head = malloc(sizeof(struct node)); // create a node
    head->data = 45;
    head->link = NULL;

    NodePtr current = malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;
    head->link = current; // update head->link to current address

    current = malloc(sizeof(struct node));
    current->data = 3;
    current->link =NULL;

    head->link->link = current; // update current

    printf("%p\n%p\n%p\n", head, current, head->link->link);
         

    return 0;
}