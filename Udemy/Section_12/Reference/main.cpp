// reference is an alias

#include <iostream>
#include <string>
#include <vector>

int main()
{
    int num{100};
    int &ref{num};

    std::cout << num << std::endl;
    std::cout << ref << std::endl;

    num = 200;
    std::cout << "------------------" << std::endl;
    std::cout << num << std::endl;
    std::cout << ref << std::endl;

    ref = 300;
    std::cout << "------------------" << std::endl;
    std::cout << num << std::endl;
    std::cout << ref << std::endl;

    std::cout << "------------------" << std::endl;
    std::vector<std::string> stooges{"Larry", "Moe", "Curly"};
    for (auto str : stooges)
    {
        str = "funny"; // str is a copy of each vector elements
    }

    // output
    for (auto str : stooges)
    {
        std::cout << str << std::endl; // no change
    }

    std::cout << "------------------" << std::endl;

    for (auto &str : stooges)
    {
        str = "funny"; // str is a reference of each vector elements
    }

    // output
    for (auto const &str : stooges)
    {
        std::cout << str << std::endl; 
        
    }

    return 0;
}