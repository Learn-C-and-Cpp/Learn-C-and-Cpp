/* Passing address and pointers as arguments to a function
   To accept addresses in the function definition, use pointers,
   pointers are used to store addresses. */

#include <stdio.h>
// funcition definitions
void swap(int *n1, int *n2); // integer pointers to accept addresses 
void addOne(int *ptr); // receive a pointer

int main()
{
    int num1 = 5;
    int num2 = 10;

    printf("num1 %d : num2 %d\n", num1, num2);
    printf("num1 [%p]: num2 [%p]\n", &num1, &num2);
    printf("\n");
    
    // passing address of num1 and num2
    swap(&num1, &num2);

    printf("\nnum1 %d : num2 %d\n", num1, num2);
    printf("after pass\n");

    // passing a pointer
    int value = 10;
    int *ptr;
    printf("\nvalue %d\n", value);
    printf("&value [%p]\n", &value);
    printf("ptr [%p]\n", ptr);
    ptr = &value;
    printf("ptr [%p]\n", ptr);
    
    addOne(ptr);
    printf("\nptr [%d]\n", *ptr);

    return 0;
}

void swap(int *n1, int *n2)
{
    int temp;
    temp = *n1; 
    *n1 = *n2;
    *n2 = temp;
    printf("temp %d temp[%p]\n", temp, &temp);
    printf("n1 %d : n2 %d\n", *n1, *n2);
    printf("n1 [%p]: n2 [%p]\n", &n1, &n2);
}

// receiving a pointer
void addOne(int *ptr)
{
    (*ptr)++;

}