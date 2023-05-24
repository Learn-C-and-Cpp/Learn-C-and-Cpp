/* creating a random-access file sequencially
 * writting data randomly to a random-access file
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
    if ((fPtr = fopen("accounts.dat", "rb+")) == NULL)
    {
        puts("File could not be opened.");
    }
    else
    {
        // create clientData with default infomation
        struct clientData client = {0, "", "", 0.0};

        // // output 100 black records to file
        // for (unsigned int i = 1; i <= 100; ++i)
        // {
        //     fwrite(&client, sizeof(struct clientData), 1, fPtr); // write to random-access file
        // }

        // require user to specify account number
        printf("%s", "Enter accoutn number (1 to 100, 0 to end input): ");
        scanf("%d", &client.acctNum);

        // copy user infomation into the file
        while (client.acctNum != 0)
        {
            // user enters last name, first name and balance
            printf("%s", "\nEnter lastname, firstname, balance: ");
            
            // set record latsName, firsName and balance value
            //fscanf return number of read items or EOF if error
            fscanf(stdin, "%14s%9s%lf", client.lastName,
                client.firstName, client.balance);
            
            // seek position in file to user-specified record
            // returns nonzero if error

            fseek(fPtr, (client.acctNum - 1) * sizeof(struct clientData), SEEK_SET);

            // write user-specified information into the file
            // returns number of Items successfuly autput else error
            size_t numberOfElements = 1;
            if (fwrite(&client, sizeof(struct clientData), numberOfElements, fPtr) != numberOfElements)
            {
                fprintf(stderr, "%s\n", "fwrite's third argument is not correct");
            }

            // fwrite(&client, sizeof(struct clientData), nmemb, fPtr);

            // enable user to input another account number
            printf("%s", "\nEnter account number: ");
            scanf("%d", &client.acctNum);
        }

        fclose(fPtr); // fclose closes a file
    }

    return 0;
}