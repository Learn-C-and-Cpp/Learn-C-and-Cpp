// pass by reference

#include <iostream>

#define LOG(x) std::cout << x << std::endl;


void increment(int& value)
{
    value++;
}

int main()
{
    int a = 5;
    int &b = a; // b is alias to a

    increment(b);

    LOG(a);

    std::cin.get();
    return 0;
}

