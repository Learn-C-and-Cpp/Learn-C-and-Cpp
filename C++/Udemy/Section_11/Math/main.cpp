#include <iostream>
#include <cmath>

int main()
{
    double num{};
    std::cout << "Enter a number(double)" << std::endl;
    std::cin >> num;

    std::cout << "The sqrt of " << num << " is:" << sqrt(num) << std::endl;
    std::cout << "The cubed root of " << num << " is:" << cbrt(num) << std::endl;
    
    std::cout << "The sine of " << num << " is:" << sin(num) << std::endl;
    std::cout << "The cosine of " << num << " is:" << cos(num) << std::endl;
    
    std::cout << "The ceil of " << num << " is:" << ceil(num) << std::endl;
    std::cout << "The floor of " << num << " is:" << floor(num) << std::endl;
    std::cout << "The round of " << num << " is:" << round(num) << std::endl;
    
    double power{};
    std::cout << "Enter  a power to raise" << num << "to: " << std::endl;
    std::cin >> power;

    std::cout << num << "raised to the " << power << " power is "<< pow(num, power)<< std::endl;   


    return 0;
}