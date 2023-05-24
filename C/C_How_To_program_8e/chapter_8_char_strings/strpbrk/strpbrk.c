
/* char *strpbrk(const char *s1, const char *s2);
 * locates the first occurrence in s1 of any character in string s2 
 * if a character from string s2 if found a pointer to the character in string s1 is returned 
 */
#include <stdio.h>
#include <string.h>


int main()
{
    const char *string1 = "Daniel is 25 years old"; // initialize char pointer
    char* age; // pointer to age
    const char *string2 = "01234567890";        // initialize char pointer
    
    printf("%s\"%s\"\n'%c'%s\n\"%s\"\n",
        "Of the characters in ",string2,
        *strpbrk(string1, string2),
        " appears earliest in ", string1);
    return 0;
}

// https://www.youtube.com/watch?v=eeMEq510A5U&t=10s
