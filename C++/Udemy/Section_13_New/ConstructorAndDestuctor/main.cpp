// Section 13
// Constructo and destructor
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
    // Methods
    void set_name(std::string name_val)
    {
        name = name_val;
    }
    // Overloaded Constuctors

    Player()
    {
        std::cout << "No arg constuctor called" <<std::endl;
    }

    Player(std::string name)
    {
        std::cout << "String arg constuctor called" <<std::endl;
    }

    Player(std::string name, int helth, int xp)
    {
        std::cout << "Three arg constuctor called" <<std::endl;
    }

    ~Player()
    {
        std::cout << "Destuctor called for " << name<<std::endl;
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
    (*enemy).set_name("Enemy");
    enemy->set_name("Enemy");
    
    Player *leve_boss = new Player("Level Boss", 1000, 300);
    leve_boss->set_name("Level_boss");
    
    delete enemy;
    delete leve_boss;

    
    return 0;
}