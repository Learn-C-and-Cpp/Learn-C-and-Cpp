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
        balance += bal;
        std::cout << "In deposit" << std::endl;
        return (balance > 0);
    }
    bool withdraw(double bal)
    {
        balance -= bal;
        std::cout << "In withdraw" << std::endl;
        return (balance > 0);
    }
};

int main()
{
    // Account objects
    Account frank_account;
    frank_account.name = "Frank's account";
    frank_account.balance = 5000.0;

    bool dep = frank_account.deposit(1000.0);
    bool withd = frank_account.withdraw(500.0);

    Account *mary_count = new Account;
    mary_count->name = "Mary";
    mary_count->balance = 9000.0;

    (*mary_count).deposit(1000.0);
    mary_count->withdraw(7200.0);
    delete mary_count;
    
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