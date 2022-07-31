/* a double pointer points to a pointer */
#include <stdio.h>

int main()
{
    int val = 7;
    
    printf(" val [%p]: val = %d\n", (void*) &val, val);
    return 0;
}
