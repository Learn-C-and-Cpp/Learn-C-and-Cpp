// Section 13
// Implementing member method 1

#include<iostream>
#include<string>
#include<vector>

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

int main()
{
        
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.0);

    if(frank_account.deposite(200.0))
    {
        std::cout << "Deposite OK " << std::endl;
    }
    else
    {
        std::cout << "Deposite not allowed " << std::endl;
    }

    if(frank_account.withdraw(500.0))
    {
        std::cout << " Withdraw OK " << std::endl;

    }
    else
    {
        std::cout << "No sufficient funds " << std::endl;
    }
    if(frank_account.withdraw(1500))
    {
        std::cout << " Withdraw OK " << std::endl;
    }
    else
    {
        std::cout << " Not sufficient funds " << std::endl;
    }


    return 0;
}
