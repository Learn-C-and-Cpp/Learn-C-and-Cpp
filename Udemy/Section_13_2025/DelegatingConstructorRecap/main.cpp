// Delegating constructor
#include <iostream>

class Player
{
private:
    // attributes
    std::string name;
    int health;
    int xp;

public:
    // methods
    void set_name(std::string name_val) { name = name_val; }
    std::string get_name() { return name; }
   
    Player();
    Player(std::string name);
    Player(std::string name, int health, int xp);
    //Player(){} error ambiguous 
};

Player::Player()
 : Player{"None", 0, 0}{ // To delegate, call the three args-constructor with the initialization needed.
    std::cout << "No-args constructor " << std::endl;
  }

Player::Player(std::string name_val) 
    : Player{name_val, 0, 0}
{
    std::cout << "One-args constructor " << std::endl;
}

Player::Player(std::string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val}
{
    std::cout << "Three-args constructor " << std::endl;
}

int main()
{
    Player empty;
    Player frank{"Frank"};
    Player villain("Villain", 100, 55);

    return 0;
}