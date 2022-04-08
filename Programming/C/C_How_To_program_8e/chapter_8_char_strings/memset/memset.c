/* using function memset
 * void *memset(void *s, int c, size_t n);
 */

#include<stdio.h>
#include<string.h>

int main(void)
{
    char string1[15] = "BBBBBBBBBBBBBB"; // initialize string 
    
    printf("string = %s\n", string1);
    printf("string after memset = %s\n",
        (char *) memset(string1, 'b', 7));        
    
    return 0;
}
