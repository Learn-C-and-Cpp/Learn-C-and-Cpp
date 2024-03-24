// Section 13
// Default Constructor Parameteres

#include <iostream>
#include <string>

class Player
{
private:
    // Attributes
    std::string name;
    int health;
    int xp;

public:
    
    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
    //Player();
};

Player::Player(std::string name_val, int health_val, int xp_val) : name{name_val}, health{health_val}, xp{xp_val}
{
    
    std::cout << "Three args constructor " << std::endl;
}

// Player::~Player()
// {
//     std::cout << "Player destroyed " << std::endl;
//     std::cout << "Release memory " << std::endl;
// }

int main()
{
    Player empty;
    Player("Frank");
    Player{"Hero", 100};
    Player("Villain", 100, 55);

    return 0;
}