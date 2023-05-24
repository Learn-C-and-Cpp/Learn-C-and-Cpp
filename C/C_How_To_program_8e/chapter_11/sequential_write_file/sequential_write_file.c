// creating a sequential file
#include <stdio.h>

int main(void)
{
    // declare a  pointer to a file structure
    FILE *fPtr;

    /* open file for using fopen. Exit program if un able to create file
     * arguments are filename and file open mode: write("w") read("r")
     */
   // fPtr = fopen("clients.txt", "w"); 
    fPtr = fopen("clients.txt", "w"); 
    if (fPtr == NULL)                 //  determine if fPtr is NULL - file does not exist
    {
        puts("File could not be opened");
    }
    else
    {
        puts("Enter the account, name, and balance."); // 
        puts("Enter EOF to end input: <Ctrl> d.");
        printf("%s", "? ");

        unsigned int account; // account namber
        char name[30];        // account name
        double balance;       // account balance

        scanf("%d%29s%lf", &account, name, &balance);

        // write account, name and balance into file with fprintf
        while (!feof(stdin)) // determine the end-of-file(input from stdin)
        {
            fprintf(fPtr, "%d %s %.2f\n", account, name, balance); // write to file clients.txt
            printf("%s", "? ");
            scanf("%d%29s%lf", &account, name, &balance);
        }

        fclose(fPtr);
    }

    return 0;
}