// Move constructor
#include <iostream>
#include <vector>

class Move
{
    // Attributes
private:
    int *data;
    // Methods
public:
    void set_data(int d)
    {
        *data = d;
    }
    int get_data()
    {
        return 0;
    }
    // Constructor
    Move(int d);
    // Copy constructor
    Move(const Move &source);
    // Move constructor
    // Move(Move &&source) noexcept;
    // Destructor
    ~Move();
};

// implementation
Move::Move(int d) // One arg constructor
{
    data = new int;
    *data = d;
    std::cout << "Constructor for: " << d << std::endl;
}

// Copy constructor
Move::Move(const Move &source)
    : Move{*source.data}
{
    std::cout << "Copy Constructor - deep copy for: " << *data << std::endl;
}
// Moce constructor
// Move::Move(Move &&source) noexcept
//     : data{source.data}
// {
//     source.data = nullptr;
//     std::cout << "Copy Constructor - deep copy for: " << *data << std::endl;
// }
Move::~Move()
{
    if (data != nullptr)
    {
        std::cout << "Destructor freeing data for: " << *data << std::endl;
    }
    else
    {
        std::cout << "Destructor freeing data for nullptr " << std::endl;
    }
    delete data;
}

int main()
{
    std::vector<Move> vec;
    vec.push_back(Move{10});
    vec.push_back(Move{20});
    vec.push_back(Move{30});
    vec.push_back(Move{40});
    vec.push_back(Move{50});
    vec.push_back(Move{60});
    vec.push_back(Move{70});
    vec.push_back(Move{80});

    return 0;
}
