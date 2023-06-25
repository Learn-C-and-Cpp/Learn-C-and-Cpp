// Implementing member methods 2
#include <iostream>
#include "Account.h"

int main()
{
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.0);

    if (frank_account.deposite(200.0))
    {
        std::cout << "Deposite OK" << std::endl;
    }
    else
    {
        std::cout << "Deposite Not allowed" << std::endl;
    }

    if (frank_account.withdraw(500.0))
    {
        std::cout << "Withdraw OK" << std::endl;
    }
    else
    {
        std::cout << "No surfficient funds" << std::endl;
    }

    if (frank_account.withdraw(1500))
    {
        std::cout << "Withdraw OK" << std::endl;
    }
    else
    {
        std::cout << "No surfficient funds" << std::endl;
    }

    return 0;
}