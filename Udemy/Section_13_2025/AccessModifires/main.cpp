#include <iostream>
#include <string>

class Player
{
private:
    // attributes
    std::string name {"Player"};
    int health;
    int xp;

public:
    // methods
    void talk(std::string text_to_say) { std::cout << name << " says " << text_to_say << std::endl; }
    bool is_dead();
};
int main()
{
    Player frank;
    frank.talk("Hello there ");
    // frank.name = "frank";
    // std::cout << frank.health << std::endl;

    return 0;
}