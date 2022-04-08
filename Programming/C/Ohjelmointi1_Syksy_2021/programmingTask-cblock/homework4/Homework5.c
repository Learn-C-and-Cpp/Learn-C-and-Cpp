/*
Homework3 is a c program to implement the
    algorithm(user interfave ) and
    sub-algorithms described in  Homework2

Homework4 implements
  (1)functions to stop using the vending machine,(2)check the balance,
  and (3)withdraw money from the account. The balance is stored
  in a variable and the withdrawal of money changes the balance.

*/

#include <stdio.h>
#include <stdlib.h>
// funtion prototypes (UI)
void displayWelcomeMessage();
void displayMainMenu();
void getPinNumber();


// funtion prototypes (Atm functionality)
double withdrawCash( ); //
void checkAccountBalance();
double getDepositeAmount( double, double);
double mobileTopUp();
void transactions();
void stopAtm();

int main()
{
    double currentBalance = 0;  // current account balance

    // print welcome message to the user
    displayWelcomeMessage();

    // ask card pin from the user user
    getPinNumber();


    // prompt user for a selection
    int selection; // declare  selections

   do
    {
        // dispaly selection menu and prompt user for a selection
        // given the user pin number is correct
        printf("%s", "\tSelect\n");
        displayMainMenu();

        scanf("%d", &selection);

        // switch according to the users selection
        switch (selection)
        {
        case 1:
            withdrawCash();

            break;

        case 2:
            // check accout balance
            checkAccountBalance();

            break;
        case 3:
            // top up mobile phone
            mobileTopUp();
            break;
        case 4:
            ; // empty statement
            // get user deposite

            double deposite = 0;
            while (deposite <= 0)
            {
                printf("%s", "Enter deposite amount\n ");
                scanf("%lf", &deposite);
                // check for non-negative values
                if (deposite <= 0)
                {
                    printf("Invalid input \n");
                } // end if

            } // end while
            // call deposite
            getDepositeAmount(deposite,currentBalance);


            break;
        case 5:
            //  transactions();
            break;

        case 6:
            // stop using atm
            stopAtm();
            break;

        default:
            puts("invalid selection ");
            break;
        }
        // got to start menu to retain deposite
       // displayMainMenu();


    } while (selection != 6 );


    ///////

    return 0;
}

// display an invitation messager  and check if the card is inserted
void displayWelcomeMessage()
{
    int cardStatus = 0; // store card status

    // Prompt user untill the card is isterted
    while (cardStatus != 1)
    {
        printf("%s", "\tWelcome inserts card, thank you \n\t(Enter 1 to insert card)\n");
        scanf("%d", &cardStatus);
    }
}

// get user pin number to continue with atm operation
void getPinNumber(void)
{
    int pinRecord = 1234;
    int pinNumber = 0;
    // prompt user for pin input and check for invalid pin
    while (pinNumber != pinRecord)
    {
        printf("%s", "Enter pin number and press enter\n");
        scanf("%d", &pinNumber);

        if (pinNumber != 1234) // check if pin is correct
        {
            puts("Invalid pin number\n");
        }

    }
}

// dispaly main menu for a choice selection if pin number is correct
void displayMainMenu()
{
//    int selection = 0; // store user selection
//    // prompt user for a selection
//    while (selection != 1 && selection != 2 && selection != 3 &&
//            selection != 4 && selection != 5 && selection != 6 )
//    {
//        printf("%s", "\tSelect\n");
    printf("%s", "\t[1] withdraw cash\n");
    printf("%s", "\t[2] Balance\n");
    printf("%s", "\t[3] Mobile top up\n");
    printf("%s", "\t[4] Deposite\n");
    printf("%s", "\t[5] Transactions\n");
    printf("%s", "\t[6] Stop Atm \n");

    // scanf("%d", &selection);
}

//    // switch according to the users selection
//    switch (selection)
//    {
//    case 1:
//        withdrawCash();
//
//        // got to start menu to retain deposite
//        displayMainMenu();
//        break;
//    case 2:
//        // check accout balance
//
//
//        checkAccountBalance();
//
//        // got to start menu to retain deposite
//        displayMainMenu();
//        break;
//    case 3:
//        // top up mobile phone
//        mobileTopUp();
//
//        // got to start menu to retain deposite
//        displayMainMenu();
//        break;
//    case 4:
//        ; // empty statement
//        // get user deposite
//
//        double deposite = 0;
//        while (deposite <= 0)
//        {
//            printf("%s", "Enter deposite amount\n ");
//            scanf("%lf", &deposite);
//            // check for non-negative values
//            if (deposite <= 0)
//            {
//                printf("Invalid input \n");
//            } // end if
//
//            // amount = deposite + balance
//
//
//        } // end while
//        // call deposite
//        getDepositeAmount(deposite);
//
//        // got to start menu to retain deposite
//        displayMainMenu();
//        break;
//    case 5:
//        //  transactions();
//        break;
//
//    case 6:
//        // stop using atm
//        stopAtm();
//        break;
//
//    default:
//        puts("invalid selection ");
//        return;
//    }
//
//    // printf("selection = %d", selection);
//}

// asummed user accout deposit
double getDepositeAmount( double deposite, double balance )
{
    double totalAmount = deposite + balance;

    return totalAmount;
} // end function getDepositeAmount

// check account balance
void checkAccountBalance()
{
    double accountBalance = 1000;
    printf(" aomunt  :\t EUR %.2lf\n", accountBalance);

}// end funciton check account  balace


// withdrawing cash from the account will reduce the balance
double withdrawCash( ) // deposit -amount
{

    double withdrawals = 0.0; // store final balance

    int selection = 0; // store user selection

    // wait for the user to make a selection
    while (selection != 1 && selection != 2 && selection != 3 &&
            selection != 4 && selection != 5 && selection != 6 && selection != 7 &&
            selection != 8)
    {
        printf("\tWithdraw\n");
        printf("\n%s", "\t[1] 20");
        printf("\n%s", "\t[2] 40");
        printf("\n%s", "\t[3] 60");
        printf("\n%s", "\t[4] 90");
        printf("\n%s", "\t[5] 140");
        printf("\n%s", "\t[6] 240");
        printf("\n%s", "\t[7] Other amount");
        printf("\n%s", "\t[8] Go to start\n");

        scanf("%d", &selection);
    }
    // switch user selection
    switch (selection)
    {
    case 1:
        ; // empty statement  to  avoid error label can only be part of a statment
        double withdrawalAmount_1 = 20.0;
        withdrawals = withdrawalAmount_1; // withdrawal option one

        if( withdrawalAmount_1 >  withdrawals )
        {
            printf("Your balance is less than EU %.2lf \n", withdrawals); // amount to withdraw
        }


        // pass amount withdrawn to function balacle


        printf(" withdrawals  :\t EUR %.2lf\n", withdrawals);
        break;

    case 2:
        ; // empty statement  to  avoid error label can only be part of a statment
        double withdrawalAmount_2 = 40.0;
        withdrawals = withdrawalAmount_2; // withdrawal option two
        printf(" withdrawals  :\t EUR %.2lf\n", withdrawalAmount_2);
        break;

    case 3:
        ; // empty statement  to  avoid error label can only be part of a statment
        double withdrawalAmount_3 = 60.0;
        withdrawals = withdrawalAmount_3; // withdrawal option three
        printf(" withdrawals  :\t EUR %.2lf\n", withdrawalAmount_3);
        break;

    case 4:
        ; // empty statement  to  avoid error label can only be part of a statment
        double withdrawalAmount_4 = 90.0;
        withdrawals = withdrawalAmount_4; // withdrawal option four
        printf(" withdrawals  :\t EUR %.2lf\n", withdrawalAmount_4);
        break;
    case 5:
        ; // empty statement  to  avoid error label can only be part of a statment
        double withdrawalAmount_5 = 140.0;
        withdrawals = withdrawalAmount_5; // withdrawal option five
        printf(" withdrawals  :\t EUR %.2lf\n", withdrawalAmount_5);
        break;

    case 6:
        ; // empty statement  to  avoid error label can only be part of a statment
        double withdrawalAmount_6 = 240.0;
        withdrawals = withdrawalAmount_6; // withdrawal option six
        printf(" withdrawals  :\t EUR %.2lf\n", withdrawalAmount_6);
        break;

    case 7:
        ; // empty statement  to  avoid error label can only be part of a statment
        double otherAmount = 0;

        // prompt user for other amount
        printf("%s","Other amount\n");
        scanf("%lf", &otherAmount);
        withdrawals = otherAmount; // withdrawal option seven

        printf(" withdrawals  :\t EUR %.2lf\n", otherAmount);
        break;

    case 8:
        displayMainMenu();
        break;

    default:
        break;
    }
    return withdrawals;

} // end function withdraw cash

// user mobile to up
double mobileTopUp()
{
    double mobile = 15.0;
    printf(" aomunt  :\t EUR %.2lf\n", mobile);

} // end functionmobileToUp


// go to the main menu when user gives quit selection
void stopAtm(void)
{
    int stopAtm; // stop  input
    // go back to main menu when user input is -1
    while (stopAtm != -1)
    {
        printf("%s", "\nEnter -1 to stop atm \n");
        scanf("%d", &stopAtm);

        // go to start menu
        if (stopAtm == -1)
        {
            // displayMainMenu();
        }
    }
}

