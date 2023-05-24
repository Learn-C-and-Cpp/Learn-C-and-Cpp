/*strcpy(char *s1, const char *s2)
 *strncpy(char *s1, const char *s2, size_t n)
 *Copies string s2 into array s1. The value of s1 is returned.
 */

#include <stdio.h>  // std I/O functions:
#include <string.h> // string manipulation: strcpy()
#include <ctype.h>  // character Handling
#include <stdlib.h> // string conversion functions

#define SIZE1 25
#define SIZE2 16

int main()
{
    char s[] = "Happay birthday to you"; // initialize character array
    char s1[SIZE1];                       // create char array x
    char s2[SIZE2];                       // create char array y

    // copy contents of y into x
    printf("%s%s\n%s%s\n",
           "The string in s is:", s,
           "The string in s1 is: ", strcpy(s1, s));

    // copy the first 14 characters of s into z. Does not copy null character
    strncpy(s2, s, SIZE2 - 1);
    s2[SIZE2 - 1] = '\0'; // terminate string in s2;
    printf("The string in s2 is: %s\n", s2);

    return 0;
}
