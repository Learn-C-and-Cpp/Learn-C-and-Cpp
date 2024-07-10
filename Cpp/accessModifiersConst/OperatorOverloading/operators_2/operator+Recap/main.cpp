/**
 * Why operator overloading is different from other functions
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
    void print()
    {
        std::cout << real << " + i" << imaginary << std::endl;
    }

    friend Complex operator+(const Complex &c1, const Complex &c2);
    ~Complex()
    {
        std::cout << " Destructor constructor " << std::endl;
    }
};
/*Made friend to access private members*/
Complex operator+(const Complex &c1, const Complex &c2)
{
    return Complex(c1.real + c2.real, c1.imaginary + c2.imaginary);
}

int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;

    c3.print();
}