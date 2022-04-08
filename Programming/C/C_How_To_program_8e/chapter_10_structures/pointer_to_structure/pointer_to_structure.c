/* passing pointer to structure if the size of the structure
 * is large pass address of the structure
 * access members using (->) inside the called function
 */

#include<stdio.h>

//define structure student
struct point
{
    int x;
    int y;
};
// prototype
void print(struct point *ptr);

int main(void)
{
        struct point p1 = {23, 45};
        struct point p2 = {56, 90};

        print(&p1);
        print(&p2);

        return 0;
}

void print(struct point *ptr)
{
        printf("%d %d\n", ptr->x, ptr->y);

}


