/*pointer variables - store address of other variables/data
 *dereferenced to get the data the address the pointer is pointing to
 *pointers can store the address of functions(can point to functions) and
  can be used to dereference and execute the functions    
 */
#include <stdio.h>
#include <stdlib.h>

int Add(int a, int b)
{
    return (a+b);
}
void printHello( char* name)
{
    printf("Hello %s\n", name);
}

int main(void)
{
    int c;
    // function pointer
    int (*p)(int, int); // pointer to function takint two arguments
    p = &Add; // initialize P(function name will return a pointer too) like // p = Add;
    c = (*p)(2,3); // dereferencing and executing the function also p(2,3)
    printf("%d\n", c);

    void (*ptr)(char*);
    ptr = printHello;
    ptr("Tom");

    return 0;
}

