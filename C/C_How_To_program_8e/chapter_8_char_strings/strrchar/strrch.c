
/* char *strrchr(const char *s, int c);
 * locates the last occurrence of c in string s 
 * if c is found a pointer to c in s is returned else NULL 
 */
#include <stdio.h>
#include <string.h>


int main()
{
    const char *string1 = "A zoo has many animals including zebras zero"; // initialize char pointer
    int c = 'z'; // character to search for

    printf("%s\n%s'%c'%s\"%s\"\n",
        "The remainder of string1 beginnig with the ",
        "last occurrence of character ", c, " is ",strrchr(string1, c) );
        char* charPtr = strrchr(string1, c);
        printf("pointer charPtr is: %s\n", charPtr);
    return 0;
}


