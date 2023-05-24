/* a double pointer points to a pointer */
#include <stdio.h>
#include <stdlib.h>

// a function to return an new integer
int add(int x, int y)
{
    int sum;
    sum = x + y;
    return sum;
}

// a function to return an new integer pointer
int *new_integer_pointer(int value)
{
    int *newPtr;                  // create new pointer
    newPtr = malloc(sizeof(int)); // allocate memory for that pointer
    *newPtr = value;              // *newPtr is an alia of value

    return newPtr; //  return that new pointer
}
// a fanction that changes the pointers value / update a pointer to hold a new value
void new_int_parm(int **ptr, int val)
{
    int *newptr; // new pointer
    newptr = malloc(sizeof(int)); // allocate some memory
    *newptr = val; 
    *ptr = newptr; /*Dereferencing **ptr gives an alias of the pointer that was passed */
    
}

void doublePtr(int **ptr, int data)
{
    int *newPtr;
    newPtr = (int*)malloc(sizeof(int));
    *newPtr = data;
    *ptr = newPtr;
}

int main()
{
    int val = 7;
    int *ptr = &val;
    int **dptr = &ptr;

    printf(" &val [%p]: val = %d\n", &val, val);
    printf(" ptr [%p]: ptr = %p *ptr = %d\n", &ptr, ptr, *ptr);
    printf(" &dptr [%p]: dptr = %p *dptr = %p **dptr= %d\n", &dptr, dptr, *dptr, **dptr);

    puts(" ");
    int sum = add(2, 5); // pass by value, returning an int
    printf("sum = %d\n", sum);

    // returning a pointer

    // Print pointers before initialization
    int *ptr1;
    int *ptr2;
    printf("Original:\n");
    printf("    ptr1=%p &ptr1=%p\n", (void *)ptr1, (void *)&ptr1);
    printf("    ptr2=%p &ptr2=%p\n", (void *)ptr2, (void *)&ptr2);
    printf("\n");

    printf("return new int return\n");
    ptr1 = new_integer_pointer(val);
    ptr2 = new_integer_pointer(4);
    printf("    ptr1=%p *ptr1=%d &ptr1=%p\n", ptr1, *ptr1, &ptr1);
    printf("    ptr2=%p *ptr2=%d &ptr2=%p\n", ptr2, *ptr2, &ptr2);
    printf("\n");

    printf("new int parm\n");
    new_int_parm(&ptr1, 3);
    new_int_parm(&ptr2, 8);
    printf("    ptr1=%p *ptr1=%d &ptr1=%p\n", ptr1, *ptr1, &ptr1);
    printf("    ptr2=%p *ptr2=%d &ptr2=%p\n", ptr2, *ptr2, &ptr2);
    printf("\n");

    printf("**dptr\n");
    int *head = NULL;
    
    printf("before head=%p &head=%p\n", head, &head);
    doublePtr(&head, 44);
    printf("after head=%p &head=%p *head= %d\n", head, &head, *head);



    return 0;
}
