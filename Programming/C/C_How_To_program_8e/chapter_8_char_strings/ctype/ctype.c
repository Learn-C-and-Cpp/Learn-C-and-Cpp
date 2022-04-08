#include<stdio.h>
#include<ctype.h> // character handling library

int main(void)
{
    printf("%s\n%s%s\n%s%s\n\n", "According to isdigit: ",
    isdigit('8') ? "8 is a " : "8 is not a ", "digit",
    isdigit('#') ? "# is a " : "# is not a ", "digit"); 

    printf("%s%s\n", isalpha('A') ? "A is a " : "A is not a ", "letter");
    printf("%s%s\n", isalpha('4') ? "A is a " : "A is not a ", "letter");
    printf("%s%s\n", isalnum('%') ? "A is a " : "A is not a ", "digit or letter");
    printf("%s%s\n", isxdigit('#') ? "A is a " : "A is not a ", "hexadecimal  digit");
    printf("%s%s\n", isblank('-') ? "A is a " : "A is not a ", "blank");
    puts("\n"); 

    printf("%s%s\n", islower('P') ? "p is a " : "p is not a ", "lower case letter");
    printf("%s%s\n", isupper('Q') ? "Q is a " : "Q is not a ", "Upper case letter");
    printf("%s%c\n", "$ -> ", toupper('$'), " To upper case letter");
    
    printf("%s%s\n", isspace('\n') ? "is a " : " is not a ", "white space","Horizantal tab");
    printf("%s%s\n", iscntrl(' ') ?  "is a " : "is not a ", "control character");

    printf("%s\n%s%s\n", "According to:", isprint('?') ? " , is a " : ", is not a ", "print character");
    printf("%s\n%s%s\n", "According to ispunct:", ispunct('t') ? "# is a " : "# is not a ", "Punctuation character ");
    printf("%s\n%s%s\n%s%s%s", "According to isgraph:", isgraph('Q') ? "Q is a " : "Q is not a ",
    "printing character other than a space","Space ", isgraph(' ') ?"is a" : "is not a","printing character other than a space"); 

    return 0;
}




