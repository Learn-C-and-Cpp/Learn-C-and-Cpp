/**Generating a copy constructo and preventing copying
 * 
 * The rule of three a class  requires a usesr-defined copy constructor,
 * destructor, or copy assignment operator, the it probably require all three.
 * C++11 move constructor, move assignment operator to the list
 * */ 

#include <iostream>
int count{0};
// class
class Fraction
{
    // attributes
private:
    int m_numerator{0};
    int m_denomenator{1};

public:
    // methods
    // void set_numerator(int n) { n = m_numerator; }
    // void set_denominator(int m){m = m_denomenator;}

    // int get_numerator() { return m_numerator; }
    // int get_denominator(){return m_denomenator;}

    void print() const
    {
        std::cout << "Franction (" << m_numerator << "," << m_denomenator << ")" << std::endl;
    }

    // default constructor
    Fraction(int numerator = 0, int denomenator = 1)
        : m_numerator{numerator}, m_denomenator{denomenator}
    {
        std::cout << "Defaul costructor called " << std::endl;
    }

    // use =default to generate a copy constructor
    Fraction(const Fraction &source) = default;

    // use = delete,   prevent objects of certain class not to be copyable.
    // Fraction(const Fraction &source) = delete;

    ~Fraction()
    {
        std::cout << "Destructor called " << std::endl;
    }
};

// main
int main()
{
    Fraction f{5, 3};  // calls fraction (int,int ) constructor
    Fraction fCopy{f}; // copy constructor?
    f.print();
    fCopy.print();

    return 0;
}