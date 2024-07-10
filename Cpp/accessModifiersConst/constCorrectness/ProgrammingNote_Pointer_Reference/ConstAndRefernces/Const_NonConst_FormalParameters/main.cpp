#include <iostream>

int squareConst(const int); // Takes const and non-const args
int squareNonConst(int);    // non-const

int squareConstRef(const int &); // Takes both const and non-const args
int squareNonConstRef(int &);

int main()
{
    int number = 8; // Non-const int
    const int constNumber = 9;

    std::cout << "Non-const arg: " << squareConst(number) << std::endl;  // non-const args
    std::cout << "Const arg: " << squareConst(constNumber) << std::endl; // const args

    std::cout << "Non-const arg: " << squareNonConst(number) << std::endl; // non-const args
    std::cout << "const arg: " << squareConst(constNumber) << std::endl;   // const args

    std::cout << "constRef arg pass non-const: " << squareConstRef(number) << std::endl;  // passing a non-const
    std::cout << "constRef arg pass const: " << squareConstRef(constNumber) << std::endl; // passing a const

    std::cout << "Non-constRef arg pass non-const: " << squareNonConstRef(number) << std::endl;  // passing a non-const
   // std::cout << "Non-constRef arg pass const: " << squareNonConstRef(constNumber) << std::endl; // passing a non-const

    return 0;
}

int squareConst(const int number) // Const parameter
{
    return number * number;
}
int squareNonConst(int number) // Non-Const parameter
{
    number *= number;
    return number;
}

int squareConstRef(const int &number) // const reference
{
    return number * number;
}
int squareNonConstRef(int &number)
{
    number = 6;
    return number * number;
}
