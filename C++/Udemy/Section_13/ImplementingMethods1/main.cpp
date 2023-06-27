// Declaring classes and objects

#include <iostream>
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
    // getters and setters
    void set_balance(double bal) { balance = bal; } // Implemented inside the class
    double get_balance() { return balance; }

    // This function prototypes will be implemented outside the class declaration
    void set_name(std::string n);
    std::string get_name();

    bool deposite(double amount);
    bool withdraw(double amount);
};

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

int main()
{
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.0);

    if (frank_account.deposite(200.0))
    {
       std::cout << "Deposite OK" <<std::endl;
    }
    else
    {
        std::cout << "Deposite Not allowed" <<std::endl;
    }

    if (frank_account.withdraw(500.0))
    {
        std::cout << "Withdraw OK" <<std::endl;
    }
    else
    {
        std::cout << "No surfficient funds" <<std::endl;
    }

    if (frank_account.withdraw(1500))
    {
        std::cout << "Withdraw OK" <<std::endl;
    }else
    {
         std::cout << "No surfficient funds" <<std::endl;
    }
    
    


    




    return 0;
}