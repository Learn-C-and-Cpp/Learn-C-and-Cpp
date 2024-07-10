/**Return by reference
 *
 */
#include <iostream>
#include <string>
#include <string_view>

const int& getNextId()
{
    static int s_x{0};
    ++s_x;
    return s_x;
}
int main()
{
    const int id1{getNextId()};
    const int id2{getNextId()};
    const int id3{getNextId()};

    std::cout << id1 << id2 << id3 <<'\n';
    std::cout << &id1 <<'\n';
    std::cout << &id2 <<'\n';
    
    return 0;
}