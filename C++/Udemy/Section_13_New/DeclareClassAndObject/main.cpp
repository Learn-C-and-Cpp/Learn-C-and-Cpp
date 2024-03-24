// Section 13
// Declare Casses and Objects
#include<iostream>
#include<string>
#include<vector>

class Player
{
    // Attributes
    std::string name{"Player"};
    int health{100};
    int xp{3};

    // Methods
    void talk(std::string);
    bool is_dead();

};

class Account
{
    //attribute
    std::string name{"Account"};
    double balance{0.0};

    //methods
    bool deposite(double);
    bool withdraw(double); 
};

int main()
{
    Account frank_account;
    Account jim_account;


    Player frank;
    Player hero;
    Player slayer;

   

    Player players[]{frank, hero};

    std::vector<Player> player_vec{frank};
    player_vec.push_back(hero);
    player_vec.push_back(slayer);


    
    
    Player *enemy{nullptr};
    enemy = new Player;
    delete enemy;

    return 0;
}