/* using function memcpy
 * void *memcpy(void *s1, const void *s2, size_t n);
 */

#include<stdio.h>
#include<string.h>

int main()
{
    char s1[17]; // create char array s1
    char s2[] = "Copy this string"; // initialize char array s2

    printf("sizeOf s2: %d bytes\n",sizeof(s2));

    memcpy(s1, s2, 17);
    printf("%s\n%s\"%s\"\n",
        "After s2 is copied into s1 with memcpy,",
        "s1 contains ", s1);
        printf("%d",sizeof(s2)); 


    return 0;
}
