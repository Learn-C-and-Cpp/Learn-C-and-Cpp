/* using function strerror
 * char *strerror(int errornum);
 */

#include<stdio.h>
#include<string.h>

int main(void)
{
    printf("%s\n", strerror(2));        
    
    return 0;
}
