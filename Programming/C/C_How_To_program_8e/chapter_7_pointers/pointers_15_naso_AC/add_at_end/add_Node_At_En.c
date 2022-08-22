// adding node at the end of the list

#include <stdio.h>
#include <stdlib.h>
// define struct 
struct node
{
    int data;
    struct node* link;
};
typedef struct node Node_t;

// function prototypes
Node_t* add_at_end(Node_t* ptr, int data);
int main()
{
   Node_t* head; // point to the begining of the list
   head = NULL;
   
   head = (Node_t*)malloc(sizeof(Node_t)); // allocate memory for first node
   head->data = 45;
   head->link = NULL;

   Node_t *ptr; // used to travers the list
   ptr = head;

   // adding data
   ptr = add_at_end(ptr, 98); // create a new node and add at the end 
   ptr = add_at_end(ptr, 3);
   ptr = add_at_end(ptr, 67);
   ptr = add_at_end(ptr, 100);    


   ptr = head; // to travese the list
   while (ptr != NULL)
   {
    printf("%d ", ptr->data);
    ptr = ptr->link; 

   }
   
    return 0;
}

// add node at the end of the list
Node_t*  add_at_end(Node_t* ptr, int data)
{
    // create node
    Node_t* current = (Node_t*)malloc(sizeof(Node_t));
    current->data = data;
    current->link = NULL;

    ptr->link = current; // update ptr link part of the previous node
    return current;
}