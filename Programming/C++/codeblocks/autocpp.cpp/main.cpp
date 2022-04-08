

/*
    * using auto keyword soves alot ot typing(used in variables and functions (auto x = 5.0)
    * using trailling return type ( auto add(int x, int y ) -> int )
*/

#include <iostream>

// using auto inference
auto  add(int x, int y) // c++14 auto deduce  a functions return type
{
    return (x+y);
}

// using trailling return type
auto subtract(int x, int y) -> int
{
    return( x-y );
}

// using auto in function parameters C++20

void addAndPrint(auto x, auto y ) // auto parameters dose not do type inference
{
    std::cout << "add and print = " << x+y <<std::endl;
}

int main()
{

    //double d{5.0};
    auto d{5.0};
    auto i{1+2};

    //call add
    auto sum{add(5,6)};

    std::cout << "double = " << d << " , i is = "<< i << "  sum = " << sum << std::endl;

    auto result{subtract(6,5)};

    std::cout << "subtract = " << result << std::endl;

    // call addAndPrint
    addAndPrint(2, 3);// int
    addAndPrint(4.5, 6.7); //double





    return 0;
}
