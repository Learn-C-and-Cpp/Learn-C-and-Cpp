/**Const protect inadvetently modifying the parameter and againist programming errors
 * A const function parameter can receive both const and non-const argument.
 * Non-const fuction reference/pointer can only receice non-const argument.
 */

#include <iostream>
//--------------Declareation ------------------
int squareConst(const int); // both const and non-const
int squareNonConst(int);
int squareConstRef(const int &);
int squareNonConstRef(int &);
//---------------------------------------------

int main()
{
    int number = 8;
    const int constNumber = 9;
    std::cout << "number " << squareConst(number) << std::endl;
    std::cout << "constNumber " << squareConst(constNumber) << std::endl;
    std::cout << "number " << squareNonConst(number) << std::endl;
    std::cout << "constNumber " << squareNonConst(constNumber) << std::endl;

    // by reference
    std::cout << "constRef takes non-const " << squareConstRef(number) << std::endl;   // take non-const argurment
    std::cout << "constRef tarkes const " << squareConstRef(constNumber) << std::endl; // take a const argurment

    std::cout << "non-constRef " << squareNonConstRef(number) << std::endl;      // take a non-const argurment
    //std::cout << "non-constRef " << squareNonConstRef(constNumber) << std::endl; // take a non-const argurment

    return 0;
}
//---------Implementation..........
int squareConst(const int number)
{
    return number * number;
}

int squareNonConst(int number)
{
    number *= number;
    return number;
}

int squareConstRef(const int &number)
{
    return number * number;
}

int squareNonConstRef(int &number)
{
    return number * number;
}