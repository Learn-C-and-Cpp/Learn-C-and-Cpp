/** Do not return non-cont static local variables by reference
 */

#include <iostream>

const int &getNextID()
{
    static int s_x{0}; // non-const variable
    ++s_x;
    return s_x;
}

int main()
{
    const int &id1{getNextID()}; // id1 is a reference
    std::cout << id1 << std::endl;

    const int &id2{getNextID()}; // id2 is a reference
    std::cout << id2 << std::endl;

    const int id3{getNextID()}; // id3 is a  normal variable and receives a copy of the value returned by reference
    std::cout << id3 << std::endl;
    
    const int id4{getNextID()}; 
    std::cout << id4 << std::endl;


    return 0;
}