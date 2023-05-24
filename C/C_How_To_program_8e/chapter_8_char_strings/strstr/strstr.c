
/* char *strstr(const char *s1, const char *s2);
 * locates the first occurrence in string s1 or string2 
 * Return pointer to string in s1
 */
#include <stdio.h>
#include <string.h>

int main()
{
    const char *string1 = "Technology"; // string to search
    const char *string2 = "Tech"; // string to search for 

    printf("%s%s\n%s%s\n\n%s\n%s%s\n", "string1 = ", string1, "string2 = ", string2,
        "The remainder of string1 beginning with the",
        "first occurrence of string2 is: ", strstr(string1, string2));
    puts("");

    char *strPtr = strstr(string1, string2);
    printf("pointer charPtr is: %s\n",strPtr);
    return 0;
}
