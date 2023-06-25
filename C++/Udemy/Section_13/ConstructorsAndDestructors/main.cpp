// Declaring classes and objects

#include <iostream>
#include <string>
#include <vector>

// class player
class Player
{
private:
    // attributes,data
    std::string name;
    int health;
    int xp;

public:
    // methods,functions, operations
    void set_name(std::string name_val)
    {
        name = name_val;
    }

    // Overloaded Constructor
    Player() { std::cout << "No arg constructor called" << std::endl; }
    Player(std::string name) { std::cout << "String arg constructor called" << std::endl; }
    Player(std::string name, int health, int xp) { std::cout << "Three arg constructor called" << std::endl; }
    ~Player() { std::cout << "Destructor called for " << name << std::endl; }
};

int main()
{

    // Player objects
    {
        Player slayer;
        slayer.set_name("Slayer");
    } // slayer destroyed

    {
        Player frank;
        frank.set_name("Frank");
        Player hero("Hero");
        hero.set_name("Hero");
        Player villain("Villain", 100, 12);
        villain.set_name("Villain");
    }

    Player *enemy{nullptr};
    enemy = new Player();
    (*enemy).set_name("Enemy");

    Player *level_boss = new Player("Level Boss", 1000, 300);
    level_boss->set_name("Level Boss");

    delete enemy;
    delete level_boss;



    return 0;
}