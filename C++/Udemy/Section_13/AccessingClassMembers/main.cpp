// Declaring classes and objects

#include <iostream>
#include <string>
#include <vector>

// class player
class Player
{
public:
    // attributes,data
    std::string name;
    int health;
    int xp;

    // methods,functions, operations
    void talk(std::string text_to_say) { std::cout << name << " says " << text_to_say << std::endl; }
    bool is_dead();
};

// class account
class Account
{
public:
    // attributes
    std::string name;
    double balance;

    // methods
    bool deposit(double bal)
    {
        if (bal > 0)
        {
            balance += bal;
            std::cout << "In deposit" << std::endl;
            return true;
        }
        else
        {
            return false;
        }
    }
    bool withdraw(double amount)
    {
        if (balance - amount >= 0)
        {
            balance -= amount;
            std::cout << "In withdraw" << std::endl;
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    // Account objects
    Account frank_account;
    frank_account.name = "Frank's account";
    frank_account.balance = 5000.0;

    frank_account.deposit(1000.0);
    frank_account.withdraw(500.0);

    Account *mary_count = new Account; // Dynamically allocated
    mary_acount->name = "Mary";
    mary_acount->balance = 9000.0;

    (*mary_acount).deposit(1000.0);
    mary_acount->withdraw(7200.0);
    
    //delete account in heap
    delete mary_acount;

    // Player objects
    Player Frank;
    Frank.name = "Frank";
    Frank.health = 100;
    Frank.xp = 12;

    Frank.talk("Hi there");

    Player *enemy = new Player();
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->xp = 15;

    enemy->talk("I will destroy you!");
    delete enemy;

    return 0;
}