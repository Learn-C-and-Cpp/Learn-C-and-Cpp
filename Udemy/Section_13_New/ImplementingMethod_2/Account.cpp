
#include "Account.h"

void Account::set_name(std::string str)
{
    name = str;
}

std::string Account::get_name()
{
    return name;
}

bool Account::deposite(double amount)
{
    //if verify amount
    balance +=amount;
    return true;
}
bool Account::withdraw(double amount)
{
    if(balance - amount > 0)
    {
        balance -= amount;
        return true;
    }
    else
    {
        return false;
    }
}
