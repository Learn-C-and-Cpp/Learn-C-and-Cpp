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
    std::string get_name() { return name; }
    int get_health() { return health; }
    int get_xp() { return xp; }

    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);

    // Copy constructor
    Player(const Player &source);

    // Destructor
    ~Player()
    {
        std::cout << "Destructor called for: " << name << std::endl;
    }
};

Player::Player(std::string name_val, int health_val, int xp_val) : name{name_val}, health{health_val}, xp{xp_val}
{

    std::cout << "Three args constructor " << std::endl;
}

Player::Player(const Player &source) : name(source.name), health(source.health), xp(source.xp)
{
    std::cout << "Copy constructor - made a copy of " << source.name << std::endl;
}

void display_Player(Player p)
{
    std::cout << "Name " << p.get_name() << std::endl;
    std::cout << "Health " << p.get_health()<<std::endl;
    std::cout << "Xp " << p.get_xp() <<std::endl;
}

int main()
{
    Player empty;

    display_Player(empty);

    Player{"Frank"};
    Player{"Hero", 100};
    Player("Villain", 100, 55);

    return 0;
}