// Inheritance

#include <iostream>

class Entity // Entity is a base class
{
public:
    float x, y;

    Entity() // no param constructor
    {
        x = 0.0f;
        y = 0.0f;
        std::cout << "Created Entity():" << std::endl;
    }

    void move(float xValue, float yValue)
    {
        x = xValue;
        y = yValue;
        std::cout << "Created Entity(f, f)" << std::endl;
    }
};

class Player : public Entity // player is a subclass of Entity
{
public:
    const char *name;

    void printName()
    {
        std::cout << "Name: " << name << std::endl;
    }
};

int main()
{
    Player player;
    player.move(10, 11);
    player.x = 2;
   

    return 0;
}