#include <stdio.h>

int main(void)
{
    int x = 5;
    int* p = &x;
    *p = 6;

    int** q = &p;
    int *** r = &q;

    
    printf("&x = %d\n", &x);
    printf("&p = %d\n", &p);
    printf("&q = %d\n", &q);
    printf("&r = %d\n", &r);
    printf("***r = %d\n", ***r);
    ***r = 10;
    **q = *p +2;
    printf("x %d", x);

     
    printf("*p = %d\n", *p);
    printf("*q = %d\n", *q); // value at *q is address of p, pointing to x
    printf("*(*q) = %d\n", *(*q));
    printf("*(*r) = %d\n", *(*r));
    printf("*(*(*r)) = %d\n", *(*(*r)));
    


    return 0;
}