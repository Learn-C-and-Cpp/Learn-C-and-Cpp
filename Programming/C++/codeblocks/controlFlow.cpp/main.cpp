/*halting a program flow
 *jump, conditional brances, switch
 *loops (while, do while, for, for each
 *exeption

 */
#include <iostream>
#include <cstdlib> // need for std::exit()

int getNumber()
{

    std::cout<< "Enter a mumber \n";
    int x{};
    std::cin >> x;

    return x;
}


int main()
{
    int x{getNumber()};
    int y{getNumber()};

    if( x > 0 && y > 0)// check if both conditions are true
    std::cout << "Both numbers are positive " << std::endl;




            return 0;
}
