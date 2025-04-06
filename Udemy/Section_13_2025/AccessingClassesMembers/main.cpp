#include <iostream>
#include <string>

class Player
{
public:
    // attributes
    std::string name;
    int health;
    int xp;

    // methods
    void talk(std::string text_to_say) { std::cout << name << " says " << text_to_say << std::endl; }
    bool is_dead();
};
class Account
{
public:
    // attributes
    std::string name;
    double balance;

    // methods
    bool deposite(double bal)
    {
        balance += bal;
        std::cout << "in deposite" << std::endl;
    }
    bool withdraw(double bal)
    {
        balance -= bal;
        std::cout << "in withdraw" << std::endl;
    }
};

int main()
{
    Account frank_account;
    frank_account.name = "frankk's account";
    frank_account.balance = 5000.0;
    frank_account.deposite(1000.0);
    frank_account.withdraw(500.0);

    Account *mary_account = new Account;
    mary_account->name = "mary's accoutn";
    mary_account->balance = 4000.0;
    mary_account->deposite(3000.0);
    mary_account->withdraw(1000.0);
    std::cout << mary_account->balance <<std::endl;

    Player frank;
    frank.name = "frank";
    frank.health = 100;
    frank.xp = 12;

    frank.talk("Hi there");

    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->xp = 15;

    enemy->talk("I will destroy you!");

    
    return 0;
}