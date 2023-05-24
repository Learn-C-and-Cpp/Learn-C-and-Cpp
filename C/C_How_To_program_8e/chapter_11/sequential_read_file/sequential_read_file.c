// creating a sequential file
#include <stdio.h>

int main(void)
{
    // declare a  pointer to a file structure
    FILE *fPtr;

    /* open file for using fopen. Exit program if un able to create file
     * arguments are filename and file open mode: read("r")
     */
    fPtr = fopen("clients.txt", "r");
    if (fPtr == NULL) //  determine if fPtr is NULL - file does not exist
    {
        puts("File could not be opened");
    }
    else // read account, name, and balance from file.
    {
        unsigned int account; // account namber
        char name[30];        // account name
        double balance;       // account balance

        printf("%-10s%-13s%s\n", "Accoung", "Name", "Balance");
        fscanf(fPtr, "%d%29s%lf", &account, name, &balance);

        // read account, name and balance into file with fprintf
        while (!feof(fPtr)) // determine the end-of-file(input from file)
        {
            printf("%-10d%-13s%7.2f\n", account, name, balance); 
            fscanf(fPtr, "%d%29s%lf", &account, name, &balance);  
        }
        puts("\n");
        rewind(fPtr); // go to the begining of the file

        // read account, name and balance into file with fprintf
        while (!feof(fPtr)) // determine the end-of-file(input from file)
        {
            printf("%-10d%-13s%7.2f\n", account, name, balance); 
            fscanf(fPtr, "%d%29s%lf", &account, name, &balance);  
        }


        fclose(fPtr); // fclosef closes the file
    }

    return 0;
}