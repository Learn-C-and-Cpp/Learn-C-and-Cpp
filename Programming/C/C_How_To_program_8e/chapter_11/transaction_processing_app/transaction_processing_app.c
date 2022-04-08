/* Transtaction processing program, reads a random-access file sequentially,
   updates data already written to the file, creates new data to be placed in the file
   and deletes data previously stored in th file.
 */
#include <stdio.h>

// prototypes
unsigned int enterChoice(void);
void textFile(FILE *readPtr);
void updateRecord(FILE *fPtr);
void newRecord(FILE *fPtr);
void deleteRecord(FILE *fPtr);

unsigned int getInteger(void);
double getDouble(void);
void clearBuffer(void);

// clientData structure definition
struct clientData
{
    unsigned int accountNumber;
    char lastName[15];
    char firstName[10];
    double balance;
};

int main(void)
{
    FILE *fPtr; // account.dat file pointer

    // fopen opens the file; exit if file cannot be opened
    if ((fPtr = fopen("accounts.dat", "rb+")) == NULL)
    {
        puts("File could not opened.");
    }
    else
    {
        unsigned int choice; // user's choice

        // enable user to specify action
        while ((choice = enterChoice()) != 5)
        {
            switch (choice)
            {
            // create text file from record file
            case 1:
                textFile(fPtr);
                break;
            // update recoard
            case 2:
                updateRecord(fPtr);
                break;
            // create a record
            case 3:
                newRecord(fPtr);
                break;
            // delet existing record
            case 4:
                deleteRecord(fPtr);
                break;
            // display messege if user dose not select valid choice
            default:
                puts("Incorrect choice");
                break;
            }
        }
        fclose(fPtr); // fclose closes the file
    }

    return 0;
}

// enable user to input menu choice
unsigned int enterChoice(void)
{
    // display available options
    printf("%s", "\nEnter your choice\n"
                 "1 - store a formatted text file of accounts called\n"
                 "   \"accounts.txt\" for printing\n"
                 "2 - update an account\n"
                 "3 - add a new account\n"
                 "4 - delete an account\n"
                 "5 - end program\n? ");

    unsigned int menuChoice; // variable to store user's choice
    menuChoice = getInteger();

    return menuChoice;
}

// create formatted text file for printing
void textFile(FILE *readPtr) // readPtr is pointing to account.dat file
{
    FILE *writePtr; // writePtr is pointing to account.txt file pinter

    // fopen opens the file; exit if file cannot be opened
    if ((writePtr = fopen("account.txt", "w")) == NULL)
    {
        puts("File could not be opened."); // file was not created
    }
    else // file created or existed
    {
        rewind(readPtr); // sets pointer to begining of file
        fprintf(writePtr, "%-6s%-16s%-11s%10s\n",
                "Acc", "Last Name", "First Name", "Balance");

        // copy all records from random-access file into text file
        while (!feof(readPtr)) //.dat file
        {
            // create clientData with default information
            struct clientData client = {0, "", "", 0.0};

            // read data into client from .dat
            int result = fread(&client, sizeof(struct clientData), 1, readPtr);

            // write single record to text file
            if (result != 0 && client.accountNumber != 0)
            {
                fprintf(writePtr, "%-6d%-16s%-11s%10.2f",
                        client.accountNumber, client.lastName,
                        client.firstName, client.balance);
            }
        }
        fclose(writePtr); // fclose closes the file
    }
}

// update balance in record
void updateRecord(FILE *fPtr)
{
    unsigned int account; // store an account number

    // obtain number of account to update
    printf("%s", "Enter account number to update(1 - 100): ");
    account = getInteger();

    // move file pointer to correct record in file
    fseek(fPtr, (account - 1) * sizeof(struct clientData), SEEK_SET);

    // create clientData with no information
    struct clientData client = {0, "", "", 0.0};

    // read from file into client
    fread(&client, sizeof(struct clientData), 1, fPtr);

    // display error if account dose not exist
    if (client.accountNumber == 0)
    {
        printf("Account #%d has no information.\n", account);
    }
    else // update record
    {
        printf("%-6d%-16s%-11s%10.2f\n\n",
               client.accountNumber, client.lastName,
               client.firstName, client.balance);

        // request trasaction amount from user
        printf("%s", "Enter charge (+) or payment (-): ");
        double transaction; // transaction amount
        transaction = getDouble();
        client.balance += transaction; // update record balance

        printf("%-6d%-16s%-11s%10.2f\n",
               client.accountNumber, client.lastName,
               client.firstName, client.balance);

        // move file pointer to correct record in file
        fseek(fPtr, (account - 1) * sizeof(struct clientData),
              SEEK_SET);

        // write updated record over old in random-access file
        // cleint to randon-acces file
        fwrite(&client, sizeof(struct clientData), 1, fPtr);
    }
}

// create and insert record
void newRecord(FILE *fPtr)
{
    // obtain number of account to create
    printf("%s", "Enter new account number (1 - 100): ");
    unsigned int newAccountNum; // account number
    newAccountNum = getInteger();

    // move file pointer to correct record in file
    fseek(fPtr, (newAccountNum - 1) * sizeof(struct clientData), SEEK_SET);

    // create clientData with default information
    struct clientData client = {0, "", "", 0.0};

    // read record from file
    fread(&client, sizeof(struct clientData), 1, fPtr);

    // display error if account already exist
    if (client.accountNumber != 0)
    {
        printf("account #%d already contains information.\n",
               client.accountNumber);
    }
    else // create record
    {
        // user enters last name, first name and balance
        printf("%s", "Enter last name, first name, balance\n? ");
        scanf("%14s%9s%lf", &client.lastName, &client.firstName, &client.balance);

        client.accountNumber = newAccountNum;

        // move file pointer to correct record in file
        fseek(fPtr, (newAccountNum - 1) * sizeof(struct clientData), SEEK_SET);

        // insert record in file
        fwrite(&client, sizeof(struct clientData), 1, fPtr);
    }
}

// delete an existing record
void deleteRecord(FILE *fPtr)
{
    // obtain number of account to delete
    printf("%s", "Enter new account number (1 - 100): ");
    unsigned int accountNum; // account number
    accountNum = getInteger();

    // move file pointer to correct record in file
    fseek(fPtr, (accountNum - 1) * sizeof(struct clientData), SEEK_SET);

    // store record read from file
    struct clientData client;

    // read record from file
    fread(&client, sizeof(struct clientData), 1, fPtr);

    // display error if record does not exist
    if (client.accountNumber == 0)
    {
        printf("Account %d dose not exist.\n", accountNum);
    }
    else // delete record
    {
        // move pointer to correct record in file
        fseek(fPtr, (accountNum - 1) * sizeof(struct clientData), SEEK_SET);

        // blank client
        struct clientData blankClient = {0, "", "", 0.0};

        // replace existing record with blank record
        fwrite(&blankClient, sizeof(struct clientData), 1, fPtr);
    }
}

// get integer input from user
unsigned int getInteger(void)
{
    // obtain an integer value
    unsigned int value; // non-negative value
    char character;
    int status;
    while ((status = scanf("%u%c", &value, &character)) == 0 || (2 == status && character != '\n'))
    {
        clearBuffer(); // clear previous input
        printf("%s", "You did not enter an integer, Try againg\n? ");
    }
    return value;
}

// clear stdin buffer
void clearBuffer(void)
{
    while (fgetc(stdin) != '\n')
        ;
}

// get double input from user
double getDouble(void)
{
    // obtain an integer value
    // printf("%s", "Enter a positive integer: ");
    double value; // non-negative value
    char character;
    int status;
    while ((status = scanf("%lf%c", &value, &character)) == 0 || (2 == status && character != '\n'))
    {
        clearBuffer(); // clear previous input
        printf("%s", "You did not enter a double value, Try againg\n? ");
    }
    return value;
}
