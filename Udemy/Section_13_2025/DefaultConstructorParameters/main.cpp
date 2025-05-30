// Default Constructor Parameters
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

    // Player();
    // Player(std::string name_val);
    // Player(std::string name_val, int health, int xp);

    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
};

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}
{
    std::cout << "Three-args constructor" << std::endl;
}

int main()
{
    Player empty;
    Player frank{"Frank"};
    Player Hero{"Hero", 100};
    Player villain{"Villain", 100, 55};

    return 0;
}