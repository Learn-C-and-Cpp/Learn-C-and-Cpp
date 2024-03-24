// Section 13
// Behaviour of Defaultconstructor
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

    std::string get_name()
    {
        return name;
    }

    // Constuctors

    Player()
    {
        name = "None";
        health = 100;
        xp = 3;
    }

    Player(std::string name_val, int health_val, int xp_val)
    {
        name = name_val;
        health = health_val;
        xp = xp_val;
        std::cout << "Player created" <<std::endl;
    }
    
    ~Player()
    {
        std::cout << "Player destroyed " <<std::endl;
    }
};


int main()
{
    Player hero;
    Player("Frank", 100, 13);
    hero.set_name("Hero");
    std::cout << hero.get_name() << std::endl;

    return 0;
}