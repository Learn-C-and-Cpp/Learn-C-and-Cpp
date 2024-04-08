#include <iostream>

class Counter
{
private:
    int count;

public:
    Counter() // constuctor initilises count
    {
        count = 0;
    }
    void print()
    {
        std::cout << "count: " << count << std::endl;
    }
    void increment()
    {
        count++;
    }
};

// void move(Player &player, int ax, int by)
// {
//     // player.x += xa * player.speed;
// }

void increment_3x(Counter &counter) // by value
{
    counter.increment();
    counter.increment();
    counter.increment();
}

int main()
{
    Counter counter;

    counter.print();

    increment_3x(counter);

    counter.print();

    std::cin.get();
    return 0;
}
