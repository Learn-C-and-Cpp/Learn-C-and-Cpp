/* using function memchr
 * void *memchr(const void *s, int c, size_t n);
 * pointer to c is returned
 */

#include<stdio.h>
#include<string.h>

int main(void)
{
    const char *s = "This is the string"; // initialize array s1
    
        
    printf("%s\'%c\'%s \"%s\"\n",
        "The remainder of s after character ",
        'r', " is found is ", (char *) memchr(s, 'r', 16));

        char * remPtr = (char *) memchr(s, 'r', 16); 
        printf("%s\n", remPtr); // print pointer to pointer 
    return 0;
}
