// inserting at a given position
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
void add_at_end(Node_t *head, int data);
void add_at_position(Node_t* head, int value, int position);
void printList(Node_t *head);

int data2 = 4;

int main()
{
   Node_t *head = (Node_t *)malloc(sizeof(Node_t));
   head->data = 45;
   head->next = NULL;

   // printList(head);
   add_at_end(head, 98);
   add_at_end(head, 3);

   // add at position
   int value = 67, position = 3;
   add_at_position(head, value, position);
   
   for (int i = 0; i < 4; i++)
   {
      add_at_position(head, data2, 4);
      data2 *= 2;
  }
  
   //add_at_position(head, 4, 4);

   printList(head);

   return 0;
}
void add_at_end(Node_t *head, int data)
{
   // travese the list and add node at end
   Node_t *temp;  //store new node
   Node_t* ptr = head; // ptr points to head for traversing the list

   // create a new node
   temp = (Node_t *)malloc(sizeof(Node_t));
   temp->data = data;
   temp->next = NULL;

   while (ptr->next != NULL)
   {
      ptr = ptr->next; // update linke
   }
   // update ptr->link with new node
   ptr->next = temp;
}
// add node at position
void add_at_position(Node_t* head, int value, int position)
{
   Node_t *temp = head; // traverse list
   Node_t *temp2 = (Node_t*)malloc(sizeof(Node_t));
   temp2->data = value;
   temp2->next = NULL;
   
   while (position != 2) // move pointer on position foward to insert between 2 and 3
   {
      temp = temp->next;
      position--;
   }
   temp2->next = temp->next;
   temp->next = temp2;
}
// print List
void printList(Node_t *head)
{
   Node_t *ptr = head;
   while (ptr != NULL)
   {
      printf("%d ", ptr->data);
      ptr = ptr->next;
   }
}
