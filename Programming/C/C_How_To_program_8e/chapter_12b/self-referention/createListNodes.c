#include <stdio.h>
#include <stdlib.h>

// define struct 
struct node
{
    int data;
    struct node *link;
};

typedef struct node Node; // alias

Node *addNodeToFront(Node *head, int data);

int main(void)
{
    Node *head = NULL; // no nodes yet
    Node *tmp;

    // crate node using malloc
    head = malloc(sizeof(Node)); // node 1
    head->data = 45; // set data
    head->link = NULL; // end of link

    tmp = malloc(sizeof(Node)); // node 2
    tmp->data = 98;
    tmp->link = NULL;

    // update head link
    head->link = tmp; // head link address -> address of tmp

    // new data
    int data = 3;
    head = addNodeToFront(head, data);

    // update tmp to point to head
    tmp = head;
          
    // print data
    while (tmp != NULL)
    {
        printf("%d ", tmp->data);
        tmp = tmp->link; // udate tmp to point to the next node
    }
    
    return 0;
}

// add node at the front of the list
Node *addNodeToFront(Node *head, int data)
{
    Node *tmp = malloc(sizeof(Node)); // create node
    tmp->data = data;
    tmp->link = NULL;

    tmp->link = head; // udate the link part of the node( head is liked to tmp)
    head = tmp; // update the head pointer

    return head; // return address of head
}