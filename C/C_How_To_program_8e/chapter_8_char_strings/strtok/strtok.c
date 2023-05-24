
/* char *strtok(char *s1, const char *s2);
 * A sequence of call to strtok breake string into tokens - logical words
 * Return pointer to string in s1 or NULL 
 */
#include <stdio.h>
#include <string.h>

int main()
{
    char string[] = "This is a sentence with 7 tokens"; // string to search
    char delim[] = " ";     // a string containing characters that separate the tokens (spaces)
    printf("%s\n%s\n\n%s\n",
           "The string to be tokenized is: ", string,
           "The tokens are:");
    char *tokenPtr = strtok(string, delim); // begin tokenizing sentence

    // continue tokenizing sentence untill tokenPtr becomens NULL
    while (tokenPtr != NULL)
    {
        printf("%s\n", tokenPtr);
        tokenPtr = strtok(NULL, delim); // get next token
    }
    puts(" ");
    // delimeters are replaced with a null('\0') character 
    for (int i = 0; i < 32; i++) 
    {
        if (string[i] == '\0')
        {
            printf("\\0\n");
        }
        else
        {
            printf("%c\n", string[i]);
        }
    }

    // application 2

    char source[] = "Andrew mcdonald, 40#5.5,€400,2.5";
    char delimeter[] = " # , € "; // // a string containing characters that separate the tokens
    char *token;

    printf("%s\n%s\n\n%s\n",
           "The string to be tokenized is: ", source,
           "The tokens are:");

    token = strtok(source, delimeter); // begin tokenizing sentence
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, delimeter);
    }

    return 0;
}
