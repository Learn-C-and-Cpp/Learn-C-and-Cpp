/*getchar read characters from array or stdin into array (print out as string)
 *return integer and puts take a string as an argument and display a string followed 
 *by a newline character. 
 */ 
#include<stdio.h>

#define SIZE 80 // array size

int main()
{
    int c; // variable to hold character input by user
    char sentence[SIZE]; // create char array to read characters into
    int i = 0; // initialize counter i

    // promt user to enter line of line or text
    puts("Enter a line of text: ");
    
    // use getchar to read each character
    while((i < SIZE -1) && (c = getchar()) != '\n')
    {
        sentence[i++] = c;
    }
    sentence[i] = '\0'; // terminate string

    // use puts to display sentence
    puts("\nThe line entered was:");
    puts(sentence);
    


    return 0;
}