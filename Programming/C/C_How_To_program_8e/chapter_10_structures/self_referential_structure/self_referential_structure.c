/* self-referential structure are those structure having 
 * pointers pointing to the structure of the same type
 * used in link list
 */

#include <stdio.h>

// structure definition
struct point
{
    int x;
    int y;
    struct point *ptr; // pointer of type struct point
};

int main(void)
{
    struct point value1;
    struct point value2;

    value1.x = 2;
    value1.y = 3;
    value1.ptr = NULL; // value1 ptr 

    value2.x = 3;
    value2.y = 4;
    value2.ptr = NULL; //value2 ptr

    value1.ptr = &value2;
    value2.ptr = &value1;

    printf("%d %d\n", value1.ptr->x, value1.ptr->y);
    printf("%d %d\n", value2.ptr->x, value2.ptr->y);

    return 0;
}