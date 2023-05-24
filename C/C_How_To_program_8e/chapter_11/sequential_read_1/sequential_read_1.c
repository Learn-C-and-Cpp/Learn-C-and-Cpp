// credit inquiry program
#include<stdio.h>

// main begins program execution
int main(void)
{
    FILE *fPtr; // clients.txt file pointer

    // fopen opens the file for reading
    if ((fPtr = fopen("clients.txt", "r")) == NULL)
    {
        printf("File could not be found.");
    }
    else 
    {
        // display request options
        printf("%s", "Enter request\n"
                     " 1 - List accounts with zero balances\n"
                     " 2 - List accounts with credit balances\n"
                     " 3 - List accounts with debit balances\n"
                     " 4 - End of run\n? ");

        unsigned int request; // request number
        scanf("%u", &request);

        while (request != 4) // process user's request
        {
            unsigned int account; // account namber
            char name[30];        // account name
            double balance;       // account balance

            // read account, name and balance from file
            fscanf(fPtr, "%d%29s%lf", &account, name, &balance);

            switch (request)
            {
            case 1:
                puts("\nAccounts with zero balances:");
                // read file contents(until feof)
                while (!feof(fPtr))
                {
                    // output only if balancle is 0
                    if (balance == 0)
                    {
                        printf("%-10d%-13s%7.2f",
                               account, name, balance);
                    }
                    // read account, name and balance from file
                    fscanf(fPtr, "%d%29s%lf", &account, name, &balance);
                }
                break;

            case 2:
                puts("\nAccounts with credit balances");

                // read file contents (untill feof)
                while (!feof(fPtr))
                {
                    // output if balance is less than 0
                    if (balance < 0)
                    {
                        printf("%-10d%-13s%7.2f",
                               account, name, balance);
                    }

                    // read account, name and balance from file
                    fscanf(fPtr, "%d%29s%lf", &account, name, &balance);
                }

                break;
            case 3:
                // print reqest
                puts("\nAccounts with debit balances:");
                // read file till feof
                while (!feof(fPtr))
                {
                    // output only if balance if greater than 0
                    if (balance > 0)
                    {
                        printf("%-10d%-13s%7.2f\n", account, name, balance);
                    }

                    // read file
                    fscanf(fPtr, "%d%29s%lf", &account, name, &balance);
                }

                break;
            }
            rewind(fPtr); // return fPtr fo begining of file
            printf("%s", "\n? ");
            scanf("%d", &request);
        }

        puts("End of run.");
        fclose(fPtr); // fclose closes the file
    }

    return 0;
}