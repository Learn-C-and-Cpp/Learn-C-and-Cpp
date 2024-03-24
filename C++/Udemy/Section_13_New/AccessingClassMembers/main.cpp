// Section 13
// Accessing Class Members

#include<iostream>
#include<string>
#include<vector>

class Player
{
    public:
    // Attributes
    std::string name;
    int health;
    int xp;

    public:
    // Methods
    void talk(std::string text_to_say){std::cout << name << " says " << text_to_say <<std::endl;}
    bool is_dead();

};

class Account
{
    public:
    //attribute
    std::string name;
    double balance;
    
    public:
    //methods
    bool deposite(double bal){balance += bal; std::cout << "In deposit " <<std::endl; return true; }
    bool withdraw(double bal){balance -= bal; std::cout << "In withdraw " <<std::endl;return true; }
};

int main()
{
        
    Account frank_account;
    frank_account.name = "Frank's account";
    frank_account.balance = 5000.0;
    frank_account.deposite(1000.0);
    frank_account.withdraw(500.0);
    

    Player frank;
    frank.name = "frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("hi there");
    
    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->xp = 15;

    enemy->talk(" I will destroy you ");




    return 0;
}