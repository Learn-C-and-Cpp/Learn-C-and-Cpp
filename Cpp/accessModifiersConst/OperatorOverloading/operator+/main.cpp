/**
 * Why operator overloading is needed
 */
#include <iostream>
#include <cstdint>

class Complex
{
private:
    int real;
    int imaginary;

public:
    Complex(int r = 0, int i = 0) : real{r}, imaginary{i}
    {
        std::cout << " Two args constructor " << std::endl;
    }

    ~Complex()
    {
        std::cout << " Destructor constructor " << std::endl;
    }

    Complex operator+(const Complex &rhs) // lhs(this) + rhs (rhs is a reference to complex constant )
    {
        Complex results;
        results.real = real + rhs.real;
        results.imaginary = imaginary + rhs.imaginary;

        return results;
    }

    void print()
    {
        std::cout << real << " + i" << imaginary << std::endl;
    }
};

int main()
{
    int b1{12}, b2{3}, b3;
    b3 = b1 + b2;

    Complex c1(10, 5), c2(2, 4), c3;

     c3 = c1 + c2;

    std::cout << b3 << std::endl;
    c3.print();
} 