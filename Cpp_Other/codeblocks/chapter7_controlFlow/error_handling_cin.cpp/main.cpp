
 /*calculator program
  *get Doublesfrom user
  *get operator
  *do calculation and print results
  *The numeric_limit class template provides  a standadized way to query various properties of
   arithmetic types e.g the largest possible value for type int is ( std::numeric_limits<int>::max())
  */


#include <iostream>
#include <limits> // for std::numeric_limits
#include <cstdint> // for fixed width integer type

// sinces numeric_limits is too long we wrap it in a function called ignoreLine()
void ignoreLine()
{
    // clear input buffer ignore the largest possible value for type <std::streamsize>
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

}

//get Values from user
double getDoubles()
{
    // to ensure the right input is extracted use loop
    while(true)
    {
        std::cout << " Enter a double value:\n";
        double value{ };
        std::cin >> value;

            // failled extraction case: if the a previous extraction had failed
            if( std::cin.fail())
            {
                std::cin.clear();// back to normal state
                ignoreLine();   // remove the bad input
            }
            else  // in a successful extraction case: else the extraction operation succeeded
            {
                ignoreLine();
                return value;
            }
    }

}
//get operator
char getOperator()
{
   // to ensure the right input is extracted  use loop
    while(true)
    {
        std::cout << " Choose operator from  +, -, *, or /:\n";
        char operation{ };
        std::cin >> operation;

        switch(operation)
        {
            case '+':
            case '-':
            case '*':
            case '/':
                return operation;
            default:
            std::cout << "invalid input. please try again.\n";
        }

    }
//    return operation;
}

//do calculation and print results
void printResults(double x, char operation, double y)
{
    switch(operation)
    {
        case '+':
        std::cout << x << " + " << y << " = " << x + y << '\n';
        break;
        case '-':
        std::cout << x << " - " << y << " = " << x - y << '\n';
        break;
        case '*':
        std::cout << x << " * " << y << " = " << x * y << '\n';
        break;
        case '/':
        std::cout << x << " / " << y << " = " << x / y << '\n';
        break;
        default:
        std::cerr << " printResult() got an invalid poperator" <<'\n';

    }

}


int main()
{
//  std::cout << "type\tlowest()\tmin()\t\tmax()\n\n" << "int\t"
//  <<  std::numeric_limits<int>::lowest()<<'\t'
//  <<  std::numeric_limits<int>::min()<<'\t'
//  <<  std::numeric_limits<int>::max()<<'\n'
//  <<  "streamsize\t"
//  <<  std::numeric_limits<std::streamsize>::lowest()<<'\t'
//  <<  std::numeric_limits<std::streamsize>::min()<<'\t'
//  <<  std::numeric_limits<std::streamsize>::max()<<'\n';

double x{  getDoubles() };

char operation{ getOperator() };

double y{  getDoubles() };

printResults(x, operation, y);

//    std::int16_t x2{}; // x is 16 bits, holds from -32768 to 32767
//    std::cout << "Enter a number between -32768 and 32767: ";
//    std::cin >> x2;
//
//    std::int16_t y2{}; // y is 16 bits, holds from -32768 to 32767
//    std::cout << "Enter another number between -32768 and 32767: ";
//    std::cin >> y2;
//
//    std::cout << "The sum is: " << x2 + y2 << '\n';
//

    return 0;
}
