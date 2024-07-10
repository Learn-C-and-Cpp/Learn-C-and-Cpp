/**Return by reference and by address
 *
 */

#include <iostream>
#include <string>
#include <vector>

const std::string &getProgramName() // return a const reference
{
    static std::string s_programName{"Calcuator"}; // has static duration, destroyed at the end of the program
    std::vector<std::string> v;
    std::vector<std::string> str;
    return s_programName;
}
// example 1 returnin a temporary value

// const int &returnByConstReference()
// {
//     return 5; // returning reference to temporary object
// }

// example 2
const int &returnByConstReference_indirect(const int &ref)
{
    return ref;
}

int main()
{
    std::cout << "This program is named " << getProgramName() << std::endl;

    // calling returnByConstReference()
    // const int &ref{returnByConstReference()};
    // std::cout << ref << std::endl; // ref is bound to a dangling const& tempReference

    // calling returnByConstReference(const int& ref)
    // case 1: direct binding
    const int &ref1{5};                         // extends liftime
    std::cout << "ref1: " << ref1 << std::endl; // okay

    // case 2: indirect binding
    const int &ref2{returnByConstReference_indirect(5)}; // extends liftime
    std::cout << "ref2: " << ref2 << std::endl;          // okay
}
