// Constructor functions are used to initialise classes
// A copy constructor is a contructor used to initialise - an object with an existing object of the same type
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

    // copy constructor
    Fraction(const Fraction &source)
        : m_numerator{source.m_numerator}, m_denomenator{source.m_denomenator}
    {
        count++;
        std::cout << "Copy costructor called " << count << std::endl;
    }

    ~Fraction()
    {
        std::cout << "Destructor called " << std::endl;
    }
};

void printFraction(Fraction f) // f is passed by value
{
    f.print(); // print this object
}

Fraction generateFraction(int n, int d) // Uses temporary copy comstructor to return Fraction to main <-----
{
    Fraction f{n, d};
    return f;
}

// main
int main()
{
    // Fraction f{5, 3};  // calls fraction (int,int ) constructor
    // Fraction fCopy{f}; // copy constructor?
    // f.print();
    // fCopy.print();

    // Fraction f1 = (generateFraction(1, 2));
    Fraction f2{generateFraction(1, 2)}; // fraction is returned using copy constructor <------
    printFraction(f2);                   // f2 is copied into the fanction parameter using copy constructor <------

    return 0;
}