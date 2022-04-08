// returning a pointer to structure

#include <stdio.h>
#include<stdlib.h>

// define structure point
struct point // type struct point
{
        int x;
        int y;
};
// prototype

struct point* fun(int a, int b); // type struct
void print(struct point *ptr);

int main(void)
{
        // declare pointer of type struct  point
        struct point *ptr1, *ptr2;

        // passing
        ptr1 = fun(2, 3);
        ptr2 = fun(6, 9);
        
        // printing
        print(ptr1);
        print(ptr2);

        return 0;
}

// returning pointer to struct  
struct point* fun(int a, int b)
{           
        /* allocat memory in heap which is size of struct point,
         * will returns a void pointer, type cast to  struct point 
         */
        struct point *ptr = (struct point *)malloc(sizeof(struct point));
        ptr->x = a;
        ptr->y = b + 5;
        return ptr;
}

void print(struct point *ptr)
{
        printf("%d %d\n", ptr->x, ptr->y);
}

