// Section 13
// Delecating constructors

#include <iostream>
#include <string>

class Player
{
private:
    // Attributes
    std::string name{"XXXXX"};
    int health;
    int xp;

public:
    // Overloaded Constuctors
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
    // ~Player();
};

Player::Player() //name{"None"}, health{0}, xp{0}
 : Player{"None", 0, 0} 
{
    std::cout << "No args constructor " << std::endl;
}

Player::Player(std::string name_val) //name{name_val}, health{0}, xp{0}
    : Player{"name_val", 0, 0}
{
    std::cout << "One args constructor " << std::endl;
    
}
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
    Player("Villain", 100, 55);

    return 0;
}