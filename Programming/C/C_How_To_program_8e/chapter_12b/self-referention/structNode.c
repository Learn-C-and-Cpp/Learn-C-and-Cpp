/* Self-referantial structures  contains a pointer member that points
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
   int data;          // int type
   struct node *link; /* pointer type struct - points to the structure of type struct node(link) to another
    structure of the same type. self-referention structures linken together to form useful
    data structures such as lists, queues, stacks and trees */
};

typedef struct node Node; // create alias

// function prototypes
void printList(Node *head); // pass in head pointer - where to start
void count_of_nodes(Node *head);
void addNodeAtEnd(Node *head, int data);

int main(void)
{
   // find number of array elements
   int arr[] = {45, 98, 3};
   
   int n = sizeof(arr) / sizeof(int);
   printf("elements = %d\n", n);

   for (int i = 0; i < n; i++)  // time complexity = O(n)
   {
      printf("%d ", arr[i]);
   }
   puts("");
   
   

   // head pointer is pointing to the first node |NULL|
   Node *head = NULL;

   // pointer to the current node
   Node *current;

   // 1st Node: allocate memory address |0X.....|
   head = (Node *)malloc(sizeof(Node)); 

   // set node data and link |45|NULL|
   head->data = 45;
   head->link = NULL;

   // create 2nd node
   current = malloc(sizeof(Node));
   current->data = 98;
   current->link = NULL;

   // update the head link
   head->link = current;

   // create 3rd node
   current = malloc(sizeof(Node));
   current->data = 3;
   current->link = NULL;

   // update the current link
   head->link->link = current;


   // Adding node
   printf("%s","Enter node\n");
   int data;
   scanf("%d", &data);
   addNodeAtEnd(head, data);

   // call printList
   printList(head);

   // call count of nodes
   count_of_nodes(head);

   return 0;
}

// print data
void printList(Node *head)
{
   if (head == NULL)
   {
      puts("The list is empty");
   }
   // create temporary pointer
   Node *tmp = NULL;
   tmp = head; // let tmp point to addres equals to head / first node of the list
   while (tmp != NULL)
   {
      printf("%d ", tmp->data); // print data part of tmp using tmp pointer
      tmp = tmp->link;          // update tmp to point to address of ptr-link hence pointing to the next node
   }
   puts("");
}

// count the number of nodes
void count_of_nodes(Node *head)
{
   int count = 0;
   if (head == NULL) // if head is not pointing to anything
   {
      printf("Linked list is Empty");
   }
   // create ptr used to traverse the list
   Node *ptr = NULL;
   ptr = head; // ptr point to the same address as head
   while (ptr != NULL)
   {
      count++;
      ptr = ptr->link;
   }
   printf("count is %d\n", count); // print count
}
void addNodeAtEnd(Node *head, int data)
{
   // declare pointers
   Node *ptr, *temp;

   // asign head to ptr
   ptr = head;

   // create the node
   temp = malloc(sizeof(Node));

   // add data to it
   temp->data = data;
   temp->link = NULL;

   // travers link and put node at the end of the list
   while (ptr->link != NULL)
   {
      ptr = ptr->link;
   }
   ptr->link = temp;
}