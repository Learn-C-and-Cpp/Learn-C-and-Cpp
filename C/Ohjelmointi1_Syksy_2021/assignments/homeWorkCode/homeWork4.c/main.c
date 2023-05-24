/* program to demenstate Automatic Teller Machine(ATM) using c programming language
 * user will enter 1 to insert card
 * the defaul user pin is 1234
 */



#include<stdio.h>

// constants enumaration to represent ATM status
/*
enum AtmStatus
{
   AtmStatus_stop,
   AtmStatus_cardIn,
   AtmStatus_cardOut

};
*/

// display welcome note function prototype
void  displayWelcomeScreen();

// funtcion prototype to get inters values
int readIntegersFromUser();

// funtcion prototype to get double values
double readDoubleFromUser();

// function prototype read user pin
int readUserPinNumber();

// function prototype display menu
void displayMenu();

double getBalance(); // function prototype to check account balance
double withdrawChash(double amount ); // function prototype to withdraw cash
double makeTransfer(double ); // function prototype to make cash transfer
void checkAccountTransactions(); // function prototype to check on account transaction
void printReceipt(); // function prototype to print receipt

void clearInputBuffer(void); // funtion prototype


int main()
{
    // enum AtmStatus atmCardStatus; // AtmStatus_stop,  AtmStatus_cardIn, AtmStatus_cardOut Not working so far

    //display welcome note
    displayWelcomeScreen();


    return 0;
}
// display welcome note to the user
void  displayWelcomeScreen()
{
    printf("\t%20s\t\n\t%20s\t\n\t%20s\t\n\t%20s ", "Welcome",  " Insert card",  " Thankyou", "To insert atm card enter digit  1 > ");

    // loop untill user insert the card
    while( readIntegersFromUser() != 1)
    {
        printf("%s\n","To insert atm card enter digit  1 > ");

    }
    // prompt user for atm pin number
    readUserPinNumber();

}// end displayWelcomeNote

// read inteters from user for pin number
int readIntegersFromUser()
{
    int integer; // store integer inputs
    char character; // check for character inputs
    int status; // check scanf return values

    while( ( status = scanf("%d%c", &integer, &character )) == 0  || (2 == status && character !=  '\n'))
    {
        clearInputBuffer();// clear buffer
        printf("%s\n","You did not enter and integer value. ");
        printf("%s\n", "Only integer values are allowed, try again > ");

    }// end while

    return integer;
}// end  readIntegersFromUser

// read double input  from user
double readDoubleFromUser()
{
    double doubleValue; // store integer inputs
    char character; // check for character inputs
    int status; // check scanf return values

    while( ( status = scanf("%lf%c", &doubleValue, &character )) == 0  || (2 == status && character !=  '\n'))
    {
        clearInputBuffer();// clear buffer
        printf("%s\n","You did not enter a double value. ");
        printf("%s\n", "Only double values are allowed, try again  > ");

    }// end while

    return doubleValue;
}// end  readIntegersFromUser



// prompt user to enter card pin number to access atm
int readUserPinNumber()
{
    int pinNumber = 1234;
    printf("%s\n", "Enter pin number and press ENTRER > ");
    while( readIntegersFromUser() != pinNumber )
    {
        printf("%s\n", " Wrong pin **** ");
        printf("%s\n", "Enter pin number and press ENTRER > ");
    } //end while

    // if the pin was correct then in display menu
    displayMenu();

}
// display ATM main menu for activity sellection
void displayMenu()
{
    // to stop the program
    //printf("%s\n", "Make a sellection ");
    //printf("%s\n", "To stop ENTER -1 >");
    //int stopSignal = readIntegersFromUser(); // read inter for -1 to stop atm



    while(readIntegersFromUser() != -1) // continue to display menu
    {
        //displayWelcomeScreen(); // display menu
        //puts("");
        int sellection = 0; // store user sellection

        while( sellection != 1 && sellection != 2 && sellection != 3 && sellection != 4 && sellection != 5)
        {

            printf("\t%s\t%s", "Make a sellection ","To stop ENTER -1 >");
            // printf("\t%s\n", "To stop ENTER -1 >");

            // menu options
            printf("%s", "1.Balance\t");
            printf("%s", "2.Withdraw\t");
            printf("%s", "3.Transfer\n");
            printf("%s", "4.Transactions\t");
            printf("%s", "5.Receipt\n");

            sellection = readIntegersFromUser(); // get sellection from the user



        }// end while inner

        printf("sellected = %d", sellection);


    }// end while outer

    // loop untill user makes a valid sellection




}// end displayMenu

// function to clear input buffer
void clearInputBuffer(void)
{
    while(fgetc(stdin) != '\n');
}
