//Account.h
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>

// class account
class Account
{
private:
    // attributes
    std::string name;
    double balance;

public:
    // methods
    // declared inline
    void set_balance(double bal) { balance = bal; }
    double get_balance() { return balance; }

    // This function prototypes will be implemented outside the class declaration
    void set_name(std::string n);
    std::string get_name();

    bool deposite(double amount);
    bool withdraw(double amount);
};

#endif //_ACCOUNT_H_