#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <string.h>


void printMessage(char *table, uint16_t table_size);


int main()
{
    // initialize table
    char message[2048] = "The C programming ";
    printMessage(message, 2048);
    printf("\nmessage %p\n", message );
    printf("size of %lu\n",sizeof(message));


    //--------- Strint token -------------

    char name[] = "Keino Eliud";
    printf("My name  %s  is %d characters\n", name, strlen(name)-1);

    char str_message[] = "1234567890,temperature,27,C";
    const char sep[] = ","; // delimiter
    char *token; // placeholder pointer

    // separate the first part
    token = strtok(str_message, sep);

    // separate the rest of the string
    while( token != NULL)
    {
        printf("%s\n", token);

        // Resume from the delimiter mark
        token = strtok(NULL, sep);


    }

    //----------atol  string to long ....

    char stringRep[10];
    strcpy(stringRep,"1234567890"); // copy string to array
    float value = atof(stringRep);
    printf("string value = %s, float value = %f\n", value, stringRep);

    strcpy(stringRep,"The c programming language"); // copy string to array
     value = atof(stringRep);
    printf("string value = %s, float value = %f\n", value, stringRep);


    return 0;
}

void printMessage(char *table, uint16_t table_size)
{
    uint16_t i = 0;
    for(i = 0; i < table_size; i++)
    {
        printf("%c",table[i]);
    }

}
