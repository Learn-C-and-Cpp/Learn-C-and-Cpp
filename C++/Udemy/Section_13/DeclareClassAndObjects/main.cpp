// Declaring classes and objects

#include <iostream>
#include <string>
#include <vector>

class Player
{
    //attributes,data
    std::string name;
    int health;
    int xp;
    
    // methods,functions, operations
    void talk(std::string);
    bool is_dead();
};
int main()
{
    Player Frank;
    Player Hero;

    Player *enemy{nullptr};
    enemy = new Player();

    Player players[]{Frank, Hero}; // array of players
    std::vector<Player> player_vec{Frank};
    player_vec.push_back(Hero);

    delete enemy;
    
    return 0;
}