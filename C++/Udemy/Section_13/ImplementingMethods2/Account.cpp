// Account.cpp
#include "Account.h"

// Implementation
void Account::set_name(std::string n)
{
    name = n;
}
std::string Account::get_name()
{
    return name;
}

bool Account::deposite(double amount)
{
    // if verify amount
    if (amount > 0)
    {
        balance += amount;
        return true;
    }
     else
     {
         return false;
     }
}
bool Account::withdraw(double amount)
{
    if (balance - amount >= 0)
    {
        balance -= amount;
        return true;
    }
    else
    {
        return false;
    }
}