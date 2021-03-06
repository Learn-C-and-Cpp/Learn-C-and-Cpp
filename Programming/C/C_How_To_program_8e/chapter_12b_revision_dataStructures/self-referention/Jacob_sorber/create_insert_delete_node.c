/* self-referantial structures  contains a pointer member that points
   to a structure of the same structure type
   Linked list Terminology:
   1.Nodes(elements)
   2.Edges/Next pointers
   3.Head(starting point)
   4.Tail for tracking the end of the list
*/
#include <stdio.h>
#include <stdlib.h>

struct node // type = struct node
{
   int data;
   struct node *link; /* points to the structure of type struct node(link) to another
    structure of the same type. self-referention structures linken together to form useful
    data structures such as lists, queues, stacks and trees */
};

typedef struct node Node;

// function protorypes
void printList(Node *head); // Print list
// create new nodes and return location - node contains some data(parameters/members)
Node *create_node(int data);
Node *insert_at_head(Node **head, Node *node_to_insert);

int main(void)
{
   Node *head = NULL; // startPointer
   Node *tmp;

   // create a new node and set *next pointer to point to the head, front of the list
   // then set  head to point to the new node
    
   for (int i = 0; i < 25; i++)
   {
      tmp = create_node(i); // create the node
      insert_at_head(&head, tmp);
   }   

   // tmp = create_node(32); 
   // head = tmp;
   // tmp = create_node(8);
   // tmp->link = head;
   // head = tmp;
   // tmp = create_node(45);
   // tmp->link = head;
   // head = tmp;

   // head = head->next; // remove the first node

   // call printList
   printList(head);

   return 0;
}

// print list
void printList(Node *head)
{
   // create temporary pointer to start at the head
   Node *tmp = head;

   // traverse the link
   while (tmp != NULL)
   {
      printf("%d -", tmp->data); // print the tmp value
      tmp = tmp->link;           // move tmp to point to the next node in the list
   }
   printf("\n");
}

// create new nodes and return location - nodes contains some data(parameters/members)
Node *create_node(int data)
{
   Node *newNode = malloc(sizeof(Node)); // store address at newNode
   newNode->data = data;                 // set node data/value
   newNode->link = NULL;                 // next pointer equals to Null
   return newNode;                       // retrun newNode
}

/* inserting new node at the head of the list
   args head of pointe and pointer to the newNode */
Node *insert_at_head(Node **head, Node *node_to_insert) 
{
   node_to_insert->link = *head; // point new node link to head
   *head = node_to_insert;
   return node_to_insert;
}