//displays a Letter Pyramid from a user-provided std::string

#include <iostream>
#include <string>

int main()
{
    std::string user_string{};
    std::cout << "Enter a string to displays a Letter Pyramid" << std::endl;
    getline(std::cin, user_string);
    for(size_t i{0}; i < user_string.length(); ++i)
    {
        
        std::cout << "A" << std::endl;        
    }


    std::cout << "A|" << std::endl;
    std::cout << "AB|A" << std::endl;
    std::cout << "ABC|BA" << std::endl;
    return 0;
}