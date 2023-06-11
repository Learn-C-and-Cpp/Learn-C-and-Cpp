// Revers standard string using pointers

#include <iostream>
#include <string>
#include <algorithm>

std::string reverse_string(const std::string &str);

int main()
{
    std::string str = "Hello, World!";
    
    std::string reversed = reverse_string(str);

    std::cout << "reverse_string " << reversed << std::endl;

    std::reverse(str.begin(), str.end());

    std::cout << "algo_reverse " << str << std::endl;
    


    return 0;
}

std::string reverse_string(const std::string &str)
{
    std::string reverse;
    const char *start = str.c_str(); // point to first char
    const char *end = str.c_str() + str.size() - 1; // point to last char
    while (end >= start)
    {
        reverse.push_back(*end); 
        end--;
    }
    

    return reverse;
}

