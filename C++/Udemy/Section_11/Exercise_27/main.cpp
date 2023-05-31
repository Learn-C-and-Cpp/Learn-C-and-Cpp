// SumOfDigitsUsingRecursion
int sum_of_digits(int n);

#include <iostream>

int main()
{
    int sum = sum_of_digits(123);
    std::cout << sum << std::endl;
    return 0;
}

// int sum_of_digits(int n)
// {

//     int sum{0}, m{0};

//     while (n != 0)
//     {
//         m = n % 10;
//         sum += m;
//         n = n / 10;
//     }
//     return sum;
// }

int sum_of_digits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return (n % 10 + sum_of_digits(n / 10));
}