// Move constructor is created to reduce copying overhead.

#include <iostream>
#include <vector>

struct A
{
    int *ptr;
    // constructor
    A()
    {
        std::cout << "Default Constructor called" << std::endl;
        ptr = new int;
    }
    // Copy constructor
    A(const A &source)
    {
        std::cout << "Copy constructor called " << std::endl;
        ptr = new int; // deep copy
        //*this->ptr = *source.ptr;
    }

    A(A &&move) noexcept
    {
        std::cout << "Move Constructor" << std::endl;
        this->ptr = move.ptr;
        move.ptr = nullptr;
    }
    ~A()
    {
        std::cout << "Destructor called" << std::endl;
        delete ptr;
    }
};

int main()
{
    std::vector<A> v1;
    A a1;
    // v1.push_back(A()); // Temporary go to move straight
    // v1.push_back(a1); // Copy constructor called
    // v1.push_back(move(a1)); // explicitly call move

    return 0;
}