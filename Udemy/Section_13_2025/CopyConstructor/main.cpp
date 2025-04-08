// Implementing member methods 2
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

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}
{
    std::cout << "Three-args constructor " + name << std::endl;
}

Player::Player(const Player &source)
    //: name(source.name), health(source.health), xp(source.xp)
    : Player{source.name, source.health, source.xp}
    {
        std::cout << " Copy constructor - made copy or:  " << source.name << std::endl;
    }
void display_player(Player p)
{
    std::cout <<"Name "<< p.get_name() << std::endl;
    std::cout <<"Health "<< p.get_health() << std::endl;
    std::cout <<"Xp "<< p.get_xp() << std::endl;
}

int main()
{
    Player empty{"Empty", 100, 50};

    Player my_new_object(empty);
    
    display_player(empty);

    Player frank{"Frank"};
    Player hero{"Hero", 100};
    Player villain("Villain", 100, 55);

    // std::cout << frank.get_name() << std::endl;

    return 0;
}