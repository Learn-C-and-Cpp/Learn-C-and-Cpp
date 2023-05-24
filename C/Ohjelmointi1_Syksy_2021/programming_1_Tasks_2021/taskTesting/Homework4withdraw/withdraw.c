#include <stdio.h>

// function prototypes
double withdrawCash(double amount);
double cashDeposite(double amount);
double calculateBalance(double deposite, double withdraw, double other);
void printAccountIformaton(double deposite, double cashWithdrawal, double otherCash, double balancle);

// function main begins execution
int main()
{
    double withdrawals;
    double depositeAmount;
    double otherCash;

    // read deposite
    printf("Enter deposite \n");
    scanf("%lf", &depositeAmount);

    // read withdraw
    printf("Enter withdraw \n");
    scanf("%lf", &withdrawals);

    // read other transactions
    printf("Enter Enter mobile top up \n");
    scanf("%lf", &otherCash);

    // get deposited amount
    double deposite = cashDeposite(depositeAmount);

    // withdrawals
    double cashWithdrawal = withdrawCash(withdrawals);

    // balance
    double balancle = calculateBalance(deposite, withdrawals, otherCash);

    // print account infomation
    printAccountIformaton(deposite, cashWithdrawal, otherCash, balancle);

    return 0;
}

// get account deposite
double cashDeposite(double amount)
{
    double cash = amount; // set available cash to amount

    return cash;
} // end  function cashDeposite

// calculate  and retun  the balance
double calculateBalance(double amount, double withdraw, double otherWithdraw)
{

    return (amount - (withdraw + otherWithdraw));
} // end function calculateBalance

// perform account withdrawal
double withdrawCash(double amount)
{
    double cashWithdrawal = 0;
    cashWithdrawal = amount;

    return cashWithdrawal;
} // end withdrawcash

// display account information
void printAccountIformaton(double deposite, double cashWithdrawal, double otherCash, double balancle)
{
    // print account data
    printf("deposite %.2lf\n", deposite);
    printf("cash withdrawal %.2lf\n", cashWithdrawal);
    printf("other withdrawals %.2lf\n", otherCash);
    printf("balancle %.2lf\n", balancle);
}