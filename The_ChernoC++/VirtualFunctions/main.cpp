#include <iostream>
#include <string>

class Entity // base
{
public:
   virtual std::string getName() { return "Entity"; }
};

class Player : public Entity // sub class
{
private:
    std::string playerName;

public:
    Player(const std::string &nameValue) : playerName(nameValue){}

    std::string getName(){ return playerName; }
};

void printName(Entity *entity)
{
    std::cout << entity->getName() << std::endl;
}

int main()
{
    Entity *e = new Entity();
    printName(e);

    Player *p = new Player("Player");
    printName(p);

    // Entity *entity = p;
    // printName(entity);

    return 0;
}