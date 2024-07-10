/**
 * Operater overlaoding
 */

#include <iostream> // include iostream in order to use functions
// using namespace std; // to uses classes whithout calling it
class TestClass
{
    /** Private can only be accessed within the class
     * The variable real real part of a number
     * The variable over imaginanry part of a number
     */

private:
    int real;
    int over;

    /**
     * Public can be accessed even outside the class
     */

public:
    TestClass(int real_value = 0, int over_value = 0)
    {
        real = real_value;
        over = over_value;
    }

    /**
     * Override the meaning of the + operator
     * return_type operator symbol (argument(s)){ ... .. ...}
     * the arguments means the left hand side (lhs) of an expression
     */

    TestClass operator+(TestClass const &rhs) // (Lhs)
    {
        TestClass result; // create the data type of type TestClass
        result.real = real + rhs.real;
        result.over = over + rhs.over;

        return result;
    }
    TestClass operator-(TestClass const &rhs)
    {
        TestClass subtract;
        subtract.real = this->real - rhs.over; // lhs + rhs
        subtract.real = this->real - rhs.over;
        return subtract;
    }
    void print()
    {
        std::cout << real << " + i" << over << std::endl;
    }
};


int main()
{
    TestClass c1(9, 5), c2(4, 3);
    TestClass c3 = c1 + c2;

    c3.print();
}