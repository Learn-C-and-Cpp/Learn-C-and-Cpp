// Section 13
// Access Modifiers

#include<iostream>
#include<string>
#include<vector>

class Player
{
    private:
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
    Player frank;
    
    




    return 0;
}