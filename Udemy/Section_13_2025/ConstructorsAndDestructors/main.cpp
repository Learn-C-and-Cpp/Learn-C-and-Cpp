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
    void set_name(std::string name_val) { name = name_val; }
    std::string get_name() { return name; }

    // overloaded constructor
    Player()
    {
        std::cout << "No args constructor called " << std::endl;
    }
    Player(std::string name)
    {
        std::cout << "String args constructor called " << std::endl;
    }
    Player(std::string name, int health, int xp)
    {
        std::cout << "Three args constructor called " << std::endl;
    }
    ~Player()
    {
        std::cout << "Destructor called for " << name << std::endl;
    }
};

int main()
{
    {
        Player slayer;
        slayer.set_name("Slayer");
    }
    {
        Player frank;
        frank.set_name("Frank");
        Player hero("Hero");
        hero.set_name("Hero");
        Player villain("Villain", 100, 12);
        villain.set_name("Villain");
    }
    Player *enemy = new Player;
    enemy->set_name("Enemy");
    
    Player *level_boss = new Player("Level Boss", 1000, 300);
    level_boss ->set_name("Level Boss");
    
    delete enemy;
    delete level_boss;

    return 0;
}