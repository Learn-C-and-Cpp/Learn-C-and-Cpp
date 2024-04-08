#include <iostream>

class Entity
{
public:
    float x, y;
    // Entity() = delete;

    Entity() // no param constructor
    {
        x = 0.0f;
        y = 0.0f;
        std::cout << "Created Entity():" << std::endl;
    }

    Entity(float xValue, float yValue) //  param constructor
    {
        x = xValue;
        y = yValue;
        std::cout << "Created Entity(f, f)" << std::endl;
    }

    ~Entity()
    {
        std::cout << "Destroyed Entity:" << std::endl;
    }

    void print()
    {
        std::cout << x << ", " << y << std::endl;
    }
};

void printa()
{
    Entity a; // instantiate
    a.print();
}
void printb()     
{
    Entity b(10.0f, 5.0f);
    b.print();
}

int main()
{
    printa();
    printb();    
    return 0;
}
