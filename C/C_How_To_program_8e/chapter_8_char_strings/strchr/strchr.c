
/* size_t strcspn(const char *s1, const char *s2);
 * locates the first occurance chararacter c in string s
 */
#include <stdio.h>
#include <string.h>

char *strchr(const char *s, int c);

int main()
{
    const char *string = "This is a test"; // initialize char pointer
    const char character1 = 'a';           // initialize char pointer
    const char character2 = 'z';           // initialize char pointer

    // if character1 was found in string
    if (strchr(string, character1) != NULL) // can remove "!= NULL"
    {
        printf("\'%c\' was found in \"%s\".\n",
               character1, string);
    }
    else // if char was not found 
    {
        printf("\'%c\' was not found in \"%s\".\n",
               character1, string);        
    }

       

    return 0;
}