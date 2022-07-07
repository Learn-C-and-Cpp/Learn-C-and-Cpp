/* a pointer to pointer is a form of multiple indirection, or a chain of pointers.
   = The first pointer contains the address of the the second pointer, which points
   to the location that contains the actual value.
   int **var;
   - Normaly a pointer contains the address of a variable.

   e.g.,
   int variable;
   int *ptr = &variable
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    int var = 10;
    int *ptr = &var;
    int **pptr = &ptr;
    int *p = NULL;     // NULL pointer
    void *vPtr = NULL; // void pointer
    int *wPtr;         // wild pointer

    // others inclued
    // Dangling, Complex, Near, Far, Huge pointer

    // take the address of a var
    ptr = &var;

    // takde the value using pptr
    printf("value of var = %x\n", &var);
    printf("value of var = %d\n", var);
    printf("value at ptr = %d\n", *ptr);
    printf("value at pptr = %d\n", **pptr);
    printf("value at p = %x\n", p);
    printf("value at vPtr = %d\n", sizeof(vPtr));
    printf("value at wPtr = %d\n", wPtr);

    // array and pointer
    int a[5] = {1, 2, 3, 4, 5};
    int *aPtr;
    aPtr = a;
    for (int i = 0; i < 5; i++)
    {
        // pring elements
        printf("%d", *aPtr);
        ++aPtr; // incrementing to the next element also(p = p + 1)
    }
    putchar('\n');

    // c pointers and strings
    char str[] = "Hello Guru99!";
    char *cPtr;

    cPtr = str;

    printf("First character is: %c\n", *cPtr);
    cPtr = cPtr + 1;

    printf("Next character is: %c\n", *cPtr);
    printf("Print all characters in string\n");
    cPtr = str;
    for (int i = 0; i < strlen(str); i++)
    {
        printf("%c\n", *cPtr);
        cPtr++;
    }

    return 0;
}