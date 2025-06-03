// Const in classes
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
    void set_name(std::string name_val)
    {
        name = name_val; //  this->name = name_val;
    }
    std::string get_name() const // not modifying the object
    {
        return name;
    }
    // Ovaloaded constructors
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
    // Player(){} error ambiguous
};

Player::Player()
    : Player{"None", 0, 0}
{ // To delegate, call the three args-constructor with the initialization needed.
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

void display_player_name(const Player &p) // Expect reference to a const object
{
    std::cout << p.get_name() << std::endl;
    
    
}

int main()
{
    const Player villain("Villain", 100, 55); // can't chage any of villain attributes
    Player hero{"Hero", 100, 15};

    // villain.set_name("Nice guy");
    std::cout << villain.get_name() << std::endl;
    std::cout << hero.get_name() << std::endl;

    display_player_name(villain);
    display_player_name(hero);

    return 0;
}