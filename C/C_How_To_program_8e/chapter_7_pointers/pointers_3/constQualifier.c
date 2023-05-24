/* (1)converting a string to uppercase using a Non-const pointer to non-constant data 
    e.g
    function(char *sPtr) takes char string[] = ""

    a.high data acces
    b.data can be modified using a derefereced pointer
    c.pointer can be modified to point to other data items
   (2)printing a string one character at a time using a Non-constant pointer to constand data
   e.g function(char *sPtr) takes const char string[] = ""
   used to pass array arguments to a function for processing without modifying elements
*/

#include<stdio.h>
#include<ctype.h> // c stdard library to convert each character to uppercase

// function prototypes
// pointer to character takes an array string  - Non const pointer  to non const data 
void convertToUppercase(char *sPtr); 

// pointer to character constant takes an array string  - Non const pointer  to const data 
void printCharacters(const char *sPtr); 



int main()
{
    // initialize char array 
    char string[] = "kEiNo cHaRaCters and $32.98";
    char stringCharacters[] = "print character of a string";

    printf("The string before conversion is: %s\n", string);

    convertToUppercase(string);// passing address of string array
    printf("\nThe string after conversion is : %s\n", string);

    puts("The string is: ");
    printCharacters(stringCharacters);
    puts("");

    
    
    return 0;
}

// convert string to uppercase letters
void convertToUppercase(char *sPtr)
{
    // for ( ; *sPtr != '\0'; ++sPtr)
    // {
    //     *sPtr = toupper(*sPtr);
    //     printf("%c", *sPtr);
    // }
    
      while (*sPtr != '\0') //  current character is not '\0' which is end of string array
     {
         *sPtr = toupper(*sPtr); // convert character to uppercase
         ++sPtr; // make sPtr point to the next character
     }
    

}

// sPtr cannot be used to modify the character to which it points,
// i.e., sPtr is a "read-only " pointer
void printCharacters(const char *sPtr)
{
   
    // loop through entires string
    for(; *sPtr !='\0'; ++sPtr) // no initialization
    {
        printf("%c", *sPtr );

    }

}
