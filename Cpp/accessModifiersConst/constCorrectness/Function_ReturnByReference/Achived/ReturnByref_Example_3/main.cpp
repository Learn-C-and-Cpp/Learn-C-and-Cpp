/** Do not return non-cont static local variables by reference
 */

#include <iostream>
#include <string>
#include <string_view>

std::string &getName()
{
    static std::string s_name{};
    std::cout << "Enter a name: " << std::endl;
    std::cin >> s_name;
    return s_name;
}
void printFirstAlphabetical(std::string_view s1, std::string_view s2)
{
    if (s1 < s2)
    {
        std::cout << s1 << " comes before " << s2 << std::endl;
    }
    else
    {
        std::cout << s2 << " comes before " << s1 << std::endl;
    }
}
int main()
{
    printFirstAlphabetical(getName(), getName());

    std::cout << " string_view " << std::endl;

    return 0;
}