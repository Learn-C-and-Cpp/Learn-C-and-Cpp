/* 
Remember to add function prototypes.
Functions to read an integer, a double value and a character string.
Remember to take the clearBuffer function into use, too.
*/
int readInteger(void) {

    int number;
    char character;
    int status;

    while ((status = scanf("%d%c", &number, &character)) == 0 || (2 == status && character != '\n')) {
        clearBuffer();
        printf("You did not enter an integer, try again > ");
    }

    return number;
}

double readDouble(void) {

    double number;
    char character;
    int status;

    while ((status = scanf("%lf%c", &number, &character)) == 0 || (2 == status && character != '\n')) {
        clearBuffer();
        printf("You did not enter a real number, try again > ");
    }

    return number;
}

void clearBuffer(void) {

    while (fgetc(stdin) != '\n');
}

void readCharacterString(char aString[], int stringSize) {

    fgets(aString, stringSize, stdin);

    if (aString[strlen(aString) - 1] == '\n')
        aString[strlen(aString) - 1] = '\0';
    else
        clearBuffer();
}
