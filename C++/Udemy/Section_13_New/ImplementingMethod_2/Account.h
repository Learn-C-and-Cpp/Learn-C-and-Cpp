#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<string>

class Account
{
    public:
    //attribute
    std::string name;
    double balance;
    
    public:
    //methods
    void set_balance(double bal){balance = bal;}
    double get_balance(){return balance;}

    void set_name(std::string str);
    std::string get_name();


    bool deposite(double bal);
    bool withdraw(double bal);
};


#endif