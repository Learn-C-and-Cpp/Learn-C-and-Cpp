// Using functions fgets and putchar
// fgets(arg1 to read into, arg2(n-1), arg3(stream to read from)) // e.g., stdin, FILE

#include <stdio.h>
#define SIZE 80

void reverse(const char * const sPtr);

int main()
{
    char sentence[SIZE]; // create char array

    puts("Enter aline of text:");

    // use fgets to read a line or text
    fgets(sentence, SIZE, stdin);
    printf("\n%s", "The  line printed backwards is: ");
    reverse(sentence);
    puts("");

    return 0;
}

// recursively outputs characters in string in reverse order
void reverse(const char * const sPtr)
{
    // if end of the string
    if ('\0' == sPtr[0]) // base case / address of the first element
    {
        return;
    }
    else // if not end of string
    {
        reverse(&sPtr[1]); // recursion step
        putchar(sPtr[0]); // use putchar to display character        

    }
  
    
}
