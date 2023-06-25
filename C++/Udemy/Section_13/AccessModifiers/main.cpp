#include <iostream>
#include <string>

class Player
{
private:
    // attributes
    std::string name = "Player";
    int health;
    int xp;

public:
    // methods
    void talk(std::string text_to_say) { std::cout << name << " says " << text_to_say << std::endl; } // implementation is implicitly inline
    bool is_dead();
};

int main()
{
    Player frank;
    // frank.name = "Frank";
    // std::cout << frank.health << std::endl;
    std::string greeting = "Hello there";

    frank.talk(greeting);

    return 0;
}