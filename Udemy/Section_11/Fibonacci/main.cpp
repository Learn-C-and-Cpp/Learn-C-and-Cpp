#include <iostream>

unsigned long long fibonacci(unsigned long long n);

int main()
{

    std::cout << fibonacci(5) << std::endl;
    std::cout << fibonacci(30) << std::endl;
    std::cout << fibonacci(40) << std::endl;
    return 0;
}

unsigned long long fibonacci(unsigned long long n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// unsigned long long fibonacci(unsigned long long n)
// {
//     if(n < 2)
//     {
//         return n;
//     }
//     return (fibonacci(n-1) + fibonacci(n-2));
// }
