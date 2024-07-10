#include <iostream>
#include <string>
#include <vector>

void pass_by_ref1(int &num);
void pass_by_ref2(std::string &s);
void pass_by_ref3(std::vector<std::string> &v);
void print_vector(const std::vector<std::string> &v); // const

int main()
{
    std::cout << "---------- by Reference ----" <<std::endl;
    int num{10};
    int another_num{20};

    std::cout << "num before calling pass_by_ref1: " << num << std::endl;
    pass_by_ref1(num);
    std::cout << "num before calling pass_by_ref1: " << num << std::endl;
    std::cout << "-------------------------" << std::endl;

    std::cout << "num before calling pass_by_ref1: " << another_num << std::endl;
    pass_by_ref1(another_num);
    std::cout << "num before calling pass_by_ref1: " << another_num << std::endl;
    std::cout << "-------------------------" << std::endl;

    std::string name{"Frank"};  
    std::cout << "num before calling pass_by_ref2: " << name << std::endl;
    pass_by_ref2(name);
    std::cout << "num after calling pass_by_ref2: " << name << std::endl;
    std::cout << "-------------------------" << std::endl;

    std::vector<std::string> stooges{"Larry", "Moe", "Curly"};
    std::cout << "stooges before calling pass_by_value3: ";
    print_vector(stooges);
    pass_by_ref3(stooges);
    std::cout << "stooges after calling pass_by_ref3: " << std::endl;
    print_vector(stooges);
    std::cout << "-------------------------" << std::endl;

    return 0;
}
void pass_by_ref1(int &num)
{
    num = 1000;
}
void pass_by_ref2(std::string &s)
{
    s = "Changed";
}
void pass_by_ref3(std::vector<std::string> &v)
{
    v.clear(); // delete all vector elements
}
void print_vector(const std::vector<std::string> &v)
{

    for (auto s : v)
    {
        std::cout << s << " ";
    }
    std::cout << std::endl;
}
