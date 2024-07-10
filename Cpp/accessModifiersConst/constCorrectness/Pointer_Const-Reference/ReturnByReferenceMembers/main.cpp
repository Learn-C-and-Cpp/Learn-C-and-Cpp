/**Take two std:.string objects, return the one that comes firs alphabetically
 *
 */

#include <iostream>

const std::string &firstAlphabetical(const std::string &s1, const std::string &s2)
{
    return (s1 > s2) ? s1 : s2;
}

const int& isGreater(const int &x, const int  &y)
{
    
    return (x > y) ? x : y;
}

int main()
{
    std::string hello{"Hello"};
    std::string world{"World"};

    std::cout << firstAlphabetical(hello, world) << std::endl;

    int a{5};
    int b{3};
    std::cout << isGreater(a, b)<<std::endl;
}
