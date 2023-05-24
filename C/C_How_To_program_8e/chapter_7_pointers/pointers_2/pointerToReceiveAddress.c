/* pointer points to an address *nPtr = &n
 * a function receiving an address as an argument must define a pointer parameter to receive the address
 * void cubeByReference(int *nPtr) receives the address of an interger variable as an argument store the address
 locally in nPtr 
*/  
#include<stdio.h>

// function prototypes
int passByReference(int *, int);
void fun(int *ptr1, int *ptr2);

int main()
{
    int b[] = {1, 2, 4, 5, 6};
    int data = passByReference(b, 5);

    int x = 20;
    int y = 10;

    printf("x = %d x = %d\n", x, y);

    fun(&x, &y);
    printf("x = %d x = %d\n", x, y);
    

    return 0;
}


int passByReference(int *b, int size)
{
    // print array contents
    for (size_t row = 0; row < size; ++row)
    {
        printf("%u", b[row]);
    }
    puts("");
    
}

// function to receive an address 
void fun(int *ptr1, int *ptr2)
{
    *ptr1 = 10;
    *ptr2 = 20;

}