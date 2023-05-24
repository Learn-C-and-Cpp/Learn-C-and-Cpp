
/* size_t strcspn(const char *s1, const char *s2);
 * reterns the characters not contained in string2
 */
#include <stdio.h>
#include <string.h>


int main()
{
    const char *string1 = "The value is 3.14159"; // initialize char pointer
    const char *string2 = "1234567890";           // initialize char pointer
    
    printf("%s%s\n%s%s\n\n%s\n%s%u\n", "string1 = ", string1, "string2 = ", string2,
        "The lenght of the initial segment of string1",
        "containing no characters from string2 = ",
        strcspn(string1, string2));

    return 0;
}