/* reading from a random-access file sequencially
 */

#include <stdio.h>

// define a record format using a struct: clientData
struct clientData
{
    unsigned int acctNum; // account number
    char lastName[15];    // account last name
    char firstName[10];   // account first name
    double balance;       // account balance
};                        // end structure clientData

int main(void)
{
    FILE *fPtr; // clients.dat file pointer

    // fopen the file in binary mode; exit if file cannot be opened
    if ((fPtr = fopen("accounts.dat", "rb")) == NULL)
    {
        puts("File could not be opened.");
    }
    else
    {
        printf("%-6s%-16s%-11s%10s\n", "Acc", "Last Name",
               "First Name", "Balance");

        // read all records from file (untill eof)
        while (!feof(fPtr))
        {
            // create clientData with default infomation
            struct clientData client = {0, "", "", 0.0};
            
            // fread returns number of successful items read
            int result = fread(&client, sizeof(struct clientData), 1, fPtr);

            // display record
            if (result != 0 && client.acctNum != 0)
            {
                printf("%-6d%-16s%-11s%10.2f\n", client.acctNum, client.lastName,
                       client.firstName, client.balance);
            }
        }
        
        fclose(fPtr); // fclose closes a file
    }

    return 0;
}