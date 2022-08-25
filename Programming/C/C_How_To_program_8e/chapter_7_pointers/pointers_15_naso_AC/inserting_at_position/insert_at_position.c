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
void printList(Node_t *head);

int main()
{
   Node_t *head = (Node_t *)malloc(sizeof(Node_t));
   head->data = 45;
   head->next = NULL;

   // printList(head);
   add_at_end(head, 67);
   add_at_end(head, 98);
   

   printList(head);

   return 0;
}
void add_at_end(Node_t *head, int data)
{
   Node_t *temp, *ptr;
   ptr = head; // ptr to traverse

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
