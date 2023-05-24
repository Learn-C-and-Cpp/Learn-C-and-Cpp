
/* size_t strspn(const char *s1, const char *s2);
 * Return lenght of the initial segment or s1  consist of s2 characters
 */
#include <stdio.h>
#include <string.h>

int main()
{
    const char *string1 = "The value is 3.14159"; // initialize char pointer
    const char *string2 = "aehi lsTuv";

    printf("%s%s\n%s%s\n\n%s\n%s%u\n", "string1 = ", string1, "string2 = ", string2,
        "The length of the original segment of string1",
        "containing only characters from string2 = ", strspn(string1, string2));
    puts("");

    size_t ptr = strspn(string1, string2);
    printf("pointer charPtr is: %d\n", ptr);
    return 0;
}
