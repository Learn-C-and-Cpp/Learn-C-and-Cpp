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
    
    // One arg constructor
    Move(int d);
    // Copy constructor
    Move(const Move &source);
    // Move constructor
    Move(Move &&source) noexcept;
    // Destructor
    ~Move();
};

// Construct an object
Move::Move(int d) 
{
    data = new int; 
    *data = d;
    std::cout << "Constructor for: " << d << std::endl;
 }

// Copy constructor
/*
Move::Move(const Move &other)
{
    std::cout << "Copy Constructor "<< std::endl;
    //allocate storate
    data = new int;
    //copy the data
    *data = *other.data;
}*/

// Construct the copy
Move::Move(const Move &source)
     : Move{*source.data} // Call the One-args constructor with the data need ...
 {
     std::cout << "Copy Constructor - deep copy for: " << *data << std::endl;
 }
// Moce constructor

Move::Move(Move &&source) noexcept
     : data{source.data} // Copy data
 {
     source.data = nullptr; // Null out the poiter

     std::cout << "Move Constructor - moving resource: " << *data << std::endl;
 }
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

//test
    void printMove(Move m)
    {
        std::cout <<"inplicitly comvert "<< m.get_data() << std::endl;
    }

int main()
{
    std::vector<Move> vec;

    vec.push_back(Move{10}); // Move{10} is a temporary object it's unamed 
   
    vec.push_back(Move{20});
    vec.push_back(Move{30});
    vec.push_back(Move{40});
    vec.push_back(Move{50});
    vec.push_back(Move{60});
    vec.push_back(Move{70});
    vec.push_back(Move{80});

    //printMove(Move{2444});     
 
    return 0;
}
