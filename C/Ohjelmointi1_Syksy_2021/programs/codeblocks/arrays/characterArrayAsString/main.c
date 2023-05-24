// Treating character array as strings

#include <stdio.h>
#include <stdlib.h>

#define SIZE 20  // array size

int main()
{
    char string1[SIZE]; // reserves 20 characters
    char string2[] = "string literal"; // reserve 15 characters

    // read string from user into an array string1
    printf("%s\n", "Enter a string (no longet than 19 characters)");
    scanf("%19s", string1);

    // output strings
    printf("string1 is : %s\nstring2 is: %s\nstring" "string with space between characters is:\n", string1, string2);
    //output characters untill null character is reached
    for(size_t counter = 0; counter < SIZE && string1[counter] != '\0'; ++counter)
    {
        printf("%c ", string1[counter]);
    }
    return 0;
}
