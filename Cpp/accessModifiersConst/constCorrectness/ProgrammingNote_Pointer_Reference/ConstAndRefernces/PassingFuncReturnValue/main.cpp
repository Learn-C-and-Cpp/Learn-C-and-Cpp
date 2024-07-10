/**Passing return value as a pointer of reference
 * Passing back return value using refernce
 */
#include <iostream>

//------------------
int &squareRef(int &);
int *squarePtr(int *);
//------------------

int main()
{
    int mynum = 10;
    int &myref = mynum;
    std::cout << " mynum: " << mynum << '\n';
    std::cout << " myref: " << myref <<std::endl;
    std::cout << " &mynum: " << &mynum <<std::endl;
    std::cout << " &myref: " << &myref <<std::endl;


    
    int number1 = 8;
    std::cout << "In main &number1: " << &number1 << std::endl;
    int &resultRef = squareRef(number1);
    std::cout << "In main &resultRef: " << &resultRef << std::endl;
    std::cout << "resultRef: " << resultRef << std::endl;
    std::cout << "number1: " << number1 << std::endl;


    int number2 = 9;
    std::cout << "In main() &number2: " << &number2 << std::endl;
    int *resultPtr = squarePtr(&number2);
    std::cout << "In main() resultPtr: " << resultPtr << std::endl;
    std::cout << "*resultPtr: " << *resultPtr << std::endl;
    std::cout << "number2: " << number2 << std::endl;
    

    return 0;
}

int &squareRef(int &numberRef)
{
    std::cout << "In squareRef(); " << &numberRef << std::endl;
    numberRef *= numberRef;
    return numberRef;
}
int *squarePtr(int *numberPtr)
{
    std::cout << "In squarePtr(); " << numberPtr << std::endl;
    *numberPtr *= *numberPtr;
    return numberPtr;

}