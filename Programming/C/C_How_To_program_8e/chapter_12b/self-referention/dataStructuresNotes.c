/* self-referantial structures  contains a pointer member that points
   to a structure of the same structure type
*/
#include <stdio.h>
struct node // type = struct node
{
   int data;
   struct node *nextPtr; /* points to the structure of type struct node(link) to another 
    structure of the same type. self-referention structures linken together to form useful
    data structures such as lists, queues, stacks and trees */
   
};



//typedef struct node Node;

int main(void)
{
   struct node Node;
   Node.data = 5;
   Node.nextPtr = NULL;
   printf("%d\n",Node.data);
   printf("%p\n",Node.nextPtr);
   return 0;
}
