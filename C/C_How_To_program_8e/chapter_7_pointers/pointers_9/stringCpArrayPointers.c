// Copying a string using array notation and pointer notation.
// String copying functions copy1, copy2

#include<stdio.h>
#define SIZE 10
// prototype: s1 is a constant pointer to  charcter
// s2 in a constant pointer to constant character
void copy1(char *const s1, const char * const s2);

// s1 is a pointer to char, s2 pointer to constant char
void copy2(char *s1, const char *s2);

// function main beging execution
int main()
{
    char string1[SIZE];// creat string array of 10 char array
    char *string2 = "Hello";  // create a pointer to a string of 5 char array
    
    copy1(string1, string2);
    printf("string1 = %s\n", string1);

    char string3[SIZE]; // create array string3 of 10 characters
    char string4[] = "Good bye"; // create an array containing a string

    copy2(string3, string4);    
    printf("strint3 = %s\n", string3);
    

    return 0;
}

// copy s2 to s1 using array notation: 
// s1 =  char const*s1 -> char string1[10] = const pointer to char
// s2 = const char *const s2 = constant pointer to constant character 
// where chars will be never modified
void copy1(char *const s1, const char *const s2 )
{
    // loop through strings
    for (size_t i = 0; (s1[i] = s2[i]) != '\0'; ++i)
    {
        ; // empty statment = do nothing in body
    }
    
}

// copy s2 to s1 using pointer notation
void copy2(char *s1, const char *s2) 
{
    // loop through string
    for(;(*s1 = *s2) != '\0'; ++s1, ++s2)
    {
        ;// do nothing in body
    }
}
