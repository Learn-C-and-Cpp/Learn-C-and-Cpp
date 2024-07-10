// Operateor overloading usin dot(.) operator

#include <iostream>

class ComplexNumber
{
private:
    double real;
    double imaginary;
    double x;

public:
    ComplexNumber(double r = 0, double i = 0)
    {
        this->real = r;
        this->imaginary = i;
    }

    ~ComplexNumber() {}

    void print()
    {
        std::cout << real << " + i" << imaginary << std::endl;
    }

    /**Addition operator
     *
     */
    ComplexNumber operator+(const ComplexNumber &rhs)
    {
        ComplexNumber comp; //(0, 0);
        // ComplexNumber comp2(7,12);
        comp.real = this->real + rhs.real;
        comp.imaginary = this->imaginary + rhs.imaginary;

        return comp; // = comp2;
    }

    /**add friend
     */
    // friend ComplexNumber operator+( const ComplexNumber& obj1, const ComplexNumber &obj2)
    // {
    //     ComplexNumber comp;
    //     comp.real = obj1.real + obj2.real;
    //     comp.imaginary = obj1.imaginary + obj2.imaginary;
    //     return comp;
    // }

    /**Minus operator
     *
     */
    ComplexNumber operator-(ComplexNumber rhs)
    {
        ComplexNumber comp;
        comp.real = this->real - rhs.real;
        comp.imaginary = this->imaginary - rhs.imaginary;
        return comp;
    }

    ComplexNumber operator*(ComplexNumber rhs)
    {
        ComplexNumber comp;
        comp.real = this->real * rhs.real;
        comp.imaginary = this->imaginary * rhs.imaginary;
        return comp;
    }
    ComplexNumber operator/(ComplexNumber rhs)
    {
        ComplexNumber comp;
        comp.real = this->real / comp.real;
        comp.imaginary = this->imaginary / comp.imaginary;
        return comp;
    }
};

int main()
{
    std::cout << " operator + " << std::endl;
    ComplexNumber c1(3.0f, 5.0f);
    ComplexNumber c2(2.0f, 4.0f);
    ComplexNumber c3 = c1 + c2;
    c3.print();

    std::cout << " operator - " << std::endl;
    ComplexNumber c4 = c1 - c2;
    c4.print();

    std::cout << " operator * " << std::endl;
    ComplexNumber c5 = c1 * c2;
    c5.print();

    std::cout << " operator / " << std::endl;
    ComplexNumber c6 = c1 / c2;
    c6.print();

    return 0;
}