// Declaring classes and objects

#include <iostream>
#include <string>
#include <vector>

//class player
class Player
{
    //attributes,data
    std::string name{"Player"};
    int health{100};
    int xp{3};
    
    // methods,functions, operations
    void talk(std::string);
    bool is_dead();
};

// class account
class Account
{
    // attributes
    std::string name{"Account"};
    double balance{0.0};

    // methods
    bool deposit(double);
    bool withdraw(double);
};

int main()
{
    // Account objects
    Account frank_account;
    Account Jim_account;

    
    // Player objects
    Player Frank;
    Player Hero;

    Player *enemy{nullptr};
    enemy = new Player();

    Player players[]{Frank, Hero}; // array of players

    std::vector<Player> player_vec{Frank}; // vector of player class
    player_vec.push_back(Hero);

    delete enemy;
    
    return 0;
}