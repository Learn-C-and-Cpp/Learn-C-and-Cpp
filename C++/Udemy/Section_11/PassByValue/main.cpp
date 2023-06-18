// Function parameters
#include <iostream>
#include <string>
#include <vector>

// Funtion parameters
void pass_by_value1(int num);
void pass_by_value2(std::string s);
void pass_by_value3(std::vector<std::string> v);
void pass_by_value4(std::vector<std::string> v);

void pass_by_value1(int num)
{
    num = 1000;
}

void pass_by_value2(std::string s)
{
    s = "Changed";
}
void pass_by_value3(std::vector<std::string> v)
{
    v.clear();
}

void pass_by_value4(std::vector<std::string> v)
{
    for (auto s : v)
    {
        std::cout << s << " ";
    }
    std::cout << std::endl;
}
int main()
{
    std::cout << "---------- by value ----" <<std::endl;
    int num{10};
    int another_num{20};

    std::cout << "num before calling pass_by_value1: " << num << std::endl;
    pass_by_value1(num);
    std::cout << "num after calling pass_by_value1: " << num << std::endl;
    std::cout << std::endl;

    std::cout << "num before calling pass_by_value1: " << another_num << std::endl;
    pass_by_value1(another_num);
    std::cout << "num after calling pass_by_value1: " << another_num << std::endl;
    std::cout << std::endl;
    std::string name{"Frank"};
    std::cout << "num before calling pass_by_value2: " << name << std::endl;
    pass_by_value2(name);
    std::cout << "num after calling pass_by_value2: " << name << std::endl;

    // std::vector<std::string> myvector ------------------;
    std::cout << std::endl;
    std::vector<std::string> stooges{"Larry", "Moe", "Curly"};

    std::cout << "stooges before calling pass_by_value3: ";

    for (const std::string &stooge : stooges)
    {
        
        std::cout << stooge << " ";
    }
    std::cout << std::endl;

    pass_by_value3(stooges);
    std::cout << "stooges after calling pass_by_value3: ";
    for (const std::string &stooge : stooges)
    {
        std::cout << stooge << " ";
    }
    std::cout << std::endl;

    pass_by_value4(stooges);
    std::cout << "stooges after calling pass_by_value3: ";
    for (const std::string &stooge : stooges)
    {
        std::cout << stooge << " ";
    }
    std::cout << std::endl;

    return 0;
}