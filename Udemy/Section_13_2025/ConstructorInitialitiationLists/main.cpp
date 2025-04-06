// Implementing member methods 2
#include <iostream>

class Player
{
private:
    // attributes
    std::string name {"xxxxxx"};
    int health;
    int xp;

public:
    // methods
    void set_name(std::string name_val) { name = name_val; }
    std::string get_name() { return name; }    

    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
};

Player::Player()
:name{"None"}, health{0}, xp{0}{
    
}

Player::Player(std::string name_val)
: name {name_val},health{0}, xp {0}{

}

Player::Player(std::string name_val, int health_val, int xp_val): name {name_val},health{health_val}, xp {xp_val}{
    
}

int main()
{
    Player empty;
    Player frank {"Frank"};
    Player villain("Villain", 100, 55);
    
    
    //std::cout << frank.get_name() << std::endl;
    

    return 0;
}