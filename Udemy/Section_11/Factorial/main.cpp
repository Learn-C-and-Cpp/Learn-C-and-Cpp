#include <iostream>
  int function_activation_count{0};
unsigned long long factorial(unsigned long long n);

int main()
{

    std::cout << factorial(3) << std::endl;
    std::cout << factorial(8) << std::endl;
    std::cout << factorial(12) << std::endl;

    return 0;
}

unsigned long long factorial(unsigned long long n)
{
      //std::cout << function_activation_count++;
      
    if (n == 0) // base case
    {
        return 1;
    }
    return n * factorial(n-1);
}
