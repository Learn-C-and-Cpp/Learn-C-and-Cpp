/* using function memmove
 * void *memmove(void *s1, const void *s2, size_t n);
 */

#include<stdio.h>
#include<string.h>

int main(void)
{
    char x[] = "Home Sweet Home"; // create char array s1
    
    printf("sizeOf s2: %d bytes\n",sizeof(x));

    printf("%s%s\n", "The string of array x before memmove is: ", x);
    printf("%s%s\n", "The string of array x after memmove is: ", (char*) memmove(x, &x[5], 10));
    
    return 0;
}
