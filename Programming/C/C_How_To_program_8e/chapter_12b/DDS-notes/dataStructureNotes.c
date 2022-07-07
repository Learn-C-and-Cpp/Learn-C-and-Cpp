/* Data structures(DS)
Introduction to dynamic data structures  that can grow and shrink at execution time
1. Linked lists(linear DS):  Insertion and deletion made anywhere in a linked list. Used when
   data to be represented is unpredictable.
   Nodes are not contiguously stored in memory like that of arrays
2. Stacks (linear DS): Insertion and deletion made only at one end of a stack - its top.
3. Queues (linear DS): waiting lines; Insertion only at the back(tail) and deletion are
   made only from the front(Head) of the queue.
4. Binary trees(nonlinear DS): High speed searching and sorting of data.

Example:
int newPtr;
newPtr = malloc(sizeof(struct node));

-Note:when using malloc test for a NULL pointer returned value
if(newPtr != NULL){ // error handling here}
-Free no logner needed dyanamically allocated memory
 to avoid premature running out of memory(memory leak) then set pointer
 the NULL to eliminate any posible reference to it.

 free(newPtr);
 newPtr = NULL;



*/