/* pinter expressins and pointer arithmetic
 * alowed operators for  pointer arithmetic incremented(++) / decremented(--)
 * integer may be added (+ or +=) / integer may be subtracted (- or -=)
 * pointer maybe subtracted from another if both pointers are pointing to
   to the elements of the same array.

   Array v and pointer variable vPtr that points to v

   int v[5];
   int *vPtr;
   vPtr = &v[0]; or vPtr = *v;
*/

#include<stdio.h>

// function prototypes

// function main begins program execution
int main()
{
    int v[5] = {2, 4, 6, 67, 34};
    int v2[5];
   
   
    int *vPtr;
    vPtr = v;
       
    printf("*vPtr = %d addres or vPtr = %p\n", *vPtr, vPtr);
    ++vPtr;
    //vPtr += 1;
   
    puts(""); // new line
    
    // pointer subtraction
    --vPtr;
    //vPtr -= 1;
    printf("*vPtr = %d addres or vPtr = %p\n", *vPtr, vPtr);

    // subtraction pointer from another
    puts("");
    int *ptr1 = &v[0];
    int *ptr2 = &v[4];

    printf("address = %p value is =%d\n", ptr1, *ptr1);

    int n = ptr2 - ptr1; 
    printf("n = %d\n", n);   
    
    // assigning pointer to a pointer *void = *void; and  int *a = int *a1;
    int a,b;
    int *ptrA;
    int *ptrB;
    double *dPtr;

    

    int *as2;
    void *void1;
    void *void2;
    char *voidchar;

    //as1 = as2;
    //as1 = void1;
    //void2 = as2;
    printf("%p",void1);
    
    puts("");
    puts("Pointer/offet");

    char *string = "Hello Reddit";
    char *my_ptr = (string + 6); // start from R  to H 
    printf("%c\n", *(my_ptr - 6)); // what is at 
    

    
    
    

    return 0;
}